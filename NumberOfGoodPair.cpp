#include<iostream>
#include<vector>
using namespace std;
int twoSum(vector<int>&nums,int n){
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] == nums[j]){
                  count++;
            }
        }
    }
    return count;
}
int main(){

    int n;
    cin >> n;
    // int arr[100];
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i]; 
    }
    cout <<twoSum(nums , n);
    return 0;
}