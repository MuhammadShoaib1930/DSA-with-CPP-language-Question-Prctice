#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> cutTheSticks(vector<int> arr)
{
    vector<int> result = vector<int>(arr.size());
    sort(arr.begin(), arr.end());
    int n = 0;
    while (!arr.empty())
    {
        int temp = arr[0];
        result[n] = arr.size();
        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] -= temp;
        }
        arr.erase(remove(arr.begin(), arr.end(), 0), arr.end());
        n++;
    }

    result.erase(remove(result.begin(), result.end(), 0), result.end());
    return result;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> arr = vector<int>(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }
    vector<int> result = cutTheSticks(arr);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}