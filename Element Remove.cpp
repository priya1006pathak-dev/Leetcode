#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>&  nums, int val){
    int k = 0;
    for(int i=0; i < nums.size(); i++){
        if(nums[i] != val){
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
int main(){
   int n, val;
   cout << "Enter the value: ";
   cin >> n;
   vector<int> nums(n);
   for(int i =0; i<n; i++){
    cin >> nums[i];

   }
   cin >> val;
   
   int k = removeElement(nums,val);
   for(int i=0; i<k; i++){
    cout << nums[i] <<  " " ; 

}
}