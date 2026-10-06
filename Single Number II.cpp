#include<iostream>
 using namespace std;
 int  SingleNumberII(int arr[] , int n){
  
    for(int i =0; i<n; i++){
          int count = 1;
        for(int j=0; j<n; j++){
            if(i != j && arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            return arr[i];
        }
    }
    return -1;
 }
int main(){
    int n;
    cin >> n;
    int arr[100];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int ans = SingleNumberII(arr,n);
    cout << "SingleNumberII -> " << ans << endl;
}