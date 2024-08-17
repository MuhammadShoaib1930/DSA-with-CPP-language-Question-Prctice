#include <iostream>
#include <vector>
using namespace std;


vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector<int> result(player.size());
    int countDouplicates = 0;
    for(int i = 0 ;i<ranked.size()-1; i++){
        if(ranked[i] == ranked[i+1]){
            countDouplicates++;
        }
    }
    for(int i = 0;i<player.size(); i++){
        int j = 0;
        for(j = 0; j<ranked.size() && ranked[i]!=-1 ;j++){
            if(player[i]>=ranked[j]){
                break;
            }
        }
        result[i] = (j+1)-countDouplicates;
    }
    return result;
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int temp = 0;
    int nR = 4;
    int nP = 4;
    vector<int> ranked(nR,0);
    vector<int> player(nP,0);
    for(int i = 0; i<nR; i++){
        cin>>temp;
        ranked[i] = temp;
    }
    for(int i = 0; i<nP; i++){
        cin>>temp;
        player[i] = temp;
    }
    
    vector<int> result = climbingLeaderboard(ranked, player);
    for(int i = 0; i< result.size(); i++){
        cout<<result[i]<<endl;
    }
}