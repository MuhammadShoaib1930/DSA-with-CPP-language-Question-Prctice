#include <iostream>
#include <vector>
using namespace std;
int equalizeArray(vector<int> arr);
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            arr[j] = temp;
        }
        cout << equalizeArray(arr) << endl;
    }
    return 0;
}
void printarr(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int equalizeArray(vector<int> arr)
{
    int n = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        n = (n < arr[i]) ? arr[i] : n;
    }
    n++;
    vector<int> arrCount(n, 0);
    for (int i = 0; i < arr.size(); i++)
    {
        arrCount[arr[i]] += 1;
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        max = (max < arrCount[i]) ? arrCount[i] : max;
    }
    // cout << max;
    return arr.size()- max;
}