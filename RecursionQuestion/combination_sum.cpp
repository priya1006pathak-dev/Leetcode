#include<iostream>
#include<vector>
using namespace std;
void solve(vector<vector<int>>& ans, vector<int> candidate , int target , int index , vector<int> output){
    if(target == 0){
        ans.push_back(output);
        return;
    }
    if(target <  0){
        return ;
    }
    for(int i=index; i<candidate.size(); i++){
        output.push_back(candidate[i]);
        solve(ans,candidate,target-candidate[i], i , output);
        output.pop_back();
    }
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target){
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(ans,candidates,target,0,output);
    return ans; 
}
int main(){
    vector<int> candidates = {2,3,5};
auto result = combinationSum(candidates, 8);
    for(auto v: result){
      for(int x: v){
        cout << x << " ";

      }
      cout << endl;
    }
}