#include <iostream>
#include <vector>
using namespace std;

int jumpingOnClouds(vector<int> c, int k) {
     int n = c.size();
    int energy = 100;
    int position = 0;
    do {
        position = (position + k) % n;
        if(c[position] == 1){
            energy -= 2;
        }
        energy -= 1;
    } while (position != 0); 
    
    return energy;

}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int k;
    cin>>k;
    int n ;
    cin>>n;
    int temp;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        arr[i] = temp;
    }
    cout<<jumpingOnClouds(arr,k)<<endl;


    return 0;
}   
