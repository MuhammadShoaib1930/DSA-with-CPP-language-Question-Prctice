#include <iostream>
#include <vector>
using namespace std;

int positionGet(string s , string t){
    int i = 0;
    while (i<s.length() && i<t.length())
    {
        if(s[i]==t[i]){
            i++;
        }else{
            return i;
        }
    }
    return i;
}
string appendAndDelete(string s, string t, int k) { 
    int position = positionGet(s,t);
    if(position == s.length() && position == t.length()){
        return "Yes";
    }
    int removeChar = s.length() - position;
    int addingChar = t.length() - position;
    int totalReplace = removeChar+addingChar;
    if(totalReplace <= k && (k - totalReplace) % 2 == 0) {
        return "Yes";
    }
    if((s.length() + t.length()) <= k) {
        return "Yes";
    }
    return "No";
}
void callfun();
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    callfun();
    callfun();
    return 0;
}
void callfun(){
    string s ;
    cin>>s;
    string t;
    cin>>t;
    int k;
    cin>>k;
    cout<<appendAndDelete(s,t,k)<<endl;

}