
#include <iostream>
#include <vector>
using namespace std;
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    if(y1 > y2){
        return 10000;
    }else if(m1 > m2 && y1 == y2 ){
        return ((m1-m2)*500);
    }else if(d1 > d2 && y1 == y2 && m1 == m2){
        return ((d1 - d2)*15);
    }
    return 0;
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int d1,m1,y1;
    int d2,m2,y2;
    for(int i = 0; i<n; i++){
      cin>>d1>>m1>>y1;
      cin>>d2>>m2>>y2;
      cout<<libraryFine(d1,m1,y1,d2,m2,y2)<<endl;
    }
  return 0;
}