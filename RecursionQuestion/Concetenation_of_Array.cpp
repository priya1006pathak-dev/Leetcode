#include<iostream>
#include<vector>
using namespace std;
vector<int> getConcatenation(vector<int>& nums) {
          vector<int> ans;
        
          for(int i=0; i<nums.size(); i++){
      ans.push_back(nums[i]);
                  
            
          }
           for(int i=0; i<nums.size(); i++){
              ans.push_back(nums[i]);
           }

          return ans;
    }
   int main() {
    vector<int> nums = {1, 2, 3};

    vector<int> ans = getConcatenation(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}