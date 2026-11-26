#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> nums , vector<vector<int>>& ans , int index){
    // base case
    if(index >= nums.size()){
        ans.push_back(nums);
        return; 

    }
    for(int j=index; j<nums.size(); j++){

    bool duplicate = false;

            // Check if this number was already used
            // at the current recursion level
            for (int k = index; k < j; k++) {
                if (nums[k] == nums[j]) {
                    duplicate = true;
                    break;
                }
            }
            if (duplicate) {
                continue;
        }
        swap(nums[index] , nums[j]);
        solve(nums , ans ,index+1);

        // backtrack
         swap(nums[index] , nums[j]);

    }
}
vector<vector<int>> permute(vector<int>& nums){

    vector<vector<int>> ans;
    int index = 0;
    solve(nums,ans,index);
    return ans;
}


int main(){

    vector<int> nums = {1,1,2};
    auto result = permute(nums);
    for(const auto& permutation : result){
        for(int x : permutation){
            cout << x << " "; 
        }
        cout << endl;
    }
}