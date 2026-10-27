
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> pairSum(int arr[],int n, int s){
    vector<vector<int>> ans;
    for(int i= 0; i<n; i++){
          for(int j=i+1; j<n; j++){
           if(arr[i] +arr[j] == s){
            vector<int> temp;
            temp.push_back(min(arr[i],arr[j]));
                 temp.push_back(max(arr[i],arr[j]));
                 ans.push_back(temp);
           }
          }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
int n,s;
      cout << "Enter array size: ";
    cin >> n;

    if(n < 1 || n > 100){
        cout << "Invalid size:";
        return 1;
    }
        int arr1[100];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
        cout << "Enter target sum: ";
    cin >> s;

  vector<vector<int>> res = pairSum(arr1, n, s);

    cout << "Pair Sum: ";
    for (int i = 0; i < res.size(); i++) {
        cout << res[i][0] << " " << res[i][1] << endl;
    }

    return 0;
}