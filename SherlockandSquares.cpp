#include <iostream>
#include <vector>
using namespace std;
int squares(int a, int b) {
    int count = 0;
    int squre = 0;
    for(int i = 0; (i*i)/2<b; i++){
        squre = i*i;
        if(a<= squre && squre<= b){
            count++;
        }
    }
    return count;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int a,b;
    for(int i = 0; i<n; i++){
        cin>>a;
        cin>>b;
        cout<<squares(a,b)<<endl;
    }

    return 0;
}