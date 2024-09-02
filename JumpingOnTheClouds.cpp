#include <iostream>
#include <vector>
using namespace std;
int jumpingOnClouds(vector<int> c);
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    int test;
    cin >> test;
    for (int j = 0; j < test; j++)
    {
        cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            s[i] = temp;
        }
        cout << jumpingOnClouds(s) << endl;
    }
    return 0;
}
int jumpingOnClouds(vector<int> c)
{
    int i = 0;
    int result = 0;
    while (i < c.size() - 1)
    {
        if (i + 2 < c.size() and c[i + 2] == 0)
        {
            i += 2;
        }
        else
        {
            i++;
        }
        result++;
    }
    return result;
}