#include<iostream>
#include<vector>
using namespace std;
  int majorityElement(vector<int> nums ){
      int n = nums.size();
    for(int i=0; i<nums.size(); i++){
            int count = 0;
        for(int j=0; j<nums.size(); j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
        if(count > n/2){
       return nums[i];
        }
    }
    return -1;

  }
int main(){
    int n;
    cout << "Enter number of element:" ;
    cin >> n;

        vector<int> nums(n);
         for(int i=0; i<nums.size(); i++){
            cin >> nums[i];

         }
         int ans = majorityElement(nums);
         cout << ans << " ";

}