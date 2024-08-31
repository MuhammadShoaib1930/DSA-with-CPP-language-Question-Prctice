#include <iostream>
#include <vector>
using namespace std;
// aba * 10 = abaabaabaa --> 7 'a'

long repeatedString(string s, long n)
{
    long s_lenght = s.length();
    long stringEachComes = n / s_lenght;
    long stringRemander = n % s_lenght;

    long aCountString = 0;
    long aCountRem = 0;
    for (int i = 0; i < s_lenght; i++)
    {
        if(s[i]=='a'){
            aCountString++;
            if(i<stringRemander){
                aCountRem++;
            }
        }
    }
    return aCountString * stringEachComes + aCountRem;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    long n;
    int tests;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        cin >> s;
        cin >> n;
        cout << repeatedString(s, n) << endl;
        s = "";
        n = 0;
    }

    return 0;
}