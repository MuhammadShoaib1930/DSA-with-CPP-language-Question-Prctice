#include <iostream>
#include <vector>
using namespace std;

vector<int> getUniqueElements(const vector<int>& nums) {
    vector<int> uniqueNums;
    for (int i = 0; i < nums.size(); i++) {
        if (i == 0 || nums[i] != nums[i - 1]) {
            uniqueNums.push_back(nums[i]);
        }
    }
    return uniqueNums;
}

// Function to find the position of a score in the unique ranked list
int findRank(const vector<int>& uniqueRanks, int score) {
    int left = 0, right = uniqueRanks.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (uniqueRanks[mid] == score) {
            return mid + 1;
        } else if (uniqueRanks[mid] < score) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return left + 1;  // The rank should be one more than the position in the list
}

// Main function to calculate player ranks
vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector<int> uniqueRanks = getUniqueElements(ranked);
    vector<int> result;

    for (int p : player) {
        result.push_back(findRank(uniqueRanks, p));
    }

    return result;
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int temp = 0;
    int nR = 0;
    cin>>nR;
    vector<int> ranked(nR,0);
    for(int i = 0; i<nR; i++){
        cin>>temp;
        ranked[i] = temp;
    }
    int nP = 0;
    cin>>nP;
    vector<int> player(nP,0);
    for(int i = 0; i<nP; i++){
        cin>>temp;
        player[i] = temp;
    }
    
    vector<int> result = climbingLeaderboard(ranked, player);
    for(int i = 0; i< result.size(); i++){
        cout<<result[i]<<endl;
    }

}