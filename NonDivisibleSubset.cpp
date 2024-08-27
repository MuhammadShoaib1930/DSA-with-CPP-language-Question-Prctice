#include <iostream>
#include <vector>
#include <set>
using namespace std;
void display(set<int> stes)
{
    cout << endl;
    for (int i : stes)
    {
        cout << i << " ";
    }
    cout << endl;
}

int nonDivisibleSubset(int k, vector<int> s)
{
    vector<int> rem(k, 0);
    for (int num : s) rem[num % k]++;

    int result = min(rem[0], 1);
    for (int i = 1; i <= k / 2; i++) {
        result += (i == k - i) ? min(rem[i], 1) : max(rem[i], rem[k - i]);
    }
    return result;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int k;
    cin >> k;
    int n;
    cin >> n;
    vector<int> arr = vector<int>(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }

    cout << nonDivisibleSubset(k, arr);
    return 0;
}