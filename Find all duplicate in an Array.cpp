#include<iostream>
#include<vector>
using namespace std;

vector<int> findDuplicate(vector<int>& nums) {
   vector<int> ans; 
   vector<int> visited(nums.size(), 0);
     for(int i=0; i<nums.size(); i++){
      int index = nums[i] - 1;
       if(visited[index] == 1){
        ans.push_back(nums[i]);
     
     }else{
      visited[index] = 1;
     }
   }
     return ans;
   
}
int main(){
   vector<int> nums = {1,1,2};
   vector<int> ans =  findDuplicate(nums);
   for(int i=0; i<ans.size(); i++){
      cout << ans[i] << endl;
   }
   return 0;
}