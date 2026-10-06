#include<iostream>
#include<vector>
 using namespace std;
 vector<int> SingleNumberIII(int arr[] , int n){
  vector<int>ans;

    for(int i =0; i<n; i++){
          int count = 1;
        for(int j=0; j<n; j++){
            if(i != j && arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
           ans.push_back(arr[i]);
        }
    }
    return ans;
 }
int main(){
    int n;
    cin >> n;
    int arr[100];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
      vector<int> result = SingleNumberIII(arr, n);

    cout << "SingleNumberIII -> ";

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}