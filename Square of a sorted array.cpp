#include<iostream>
#include<vector>
using namespace std;
 vector<int> sortedSquare(vector<int> & nums){
vector<int> res(nums.size());
 int i = 0;
        int pos = nums.size()-1;
        for(int j=nums.size()-1; i<=j;  ){
            if(nums[i] * nums[i] > nums[j] * nums[j]){
                res[pos] = nums[i]*nums[i];
                i++;
            }else{
                res[pos] = nums[j] * nums[j];
               j--;
            }
            pos--;
        }
        return res;
        }

    int main(){
        int n ;
        cout << "Enter a value:" ;
        cin >> n;


       vector<int> nums(n);
        for(int j=0; j<n; j++){
            cin >> nums[j];

        }
     vector<int> ans = sortedSquare(nums);
      for(int x : ans){
        cout << x << " ";
      }
    }