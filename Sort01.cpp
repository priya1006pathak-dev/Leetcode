#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;

    }
    cout << endl;

}
void sortOne(int arr[],int n){
    int start =0;
    int end = n-1;
    while(start<=end){
        if(arr[start] == 0){
            start++;

        }else if(arr[end] == 1){
            end--;
        }else{
        swap(arr[start],arr[end]);
        start++;
        end--;
        }
    }
}
int main(){
  int arr[8] = {1,1,0,0,0,0,1,0};
    sortOne(arr,8);
    printArray(arr,8);
    return 0;

}