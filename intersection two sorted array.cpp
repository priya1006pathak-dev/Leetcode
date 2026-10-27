#include<iostream>
#include<vector>
using namespace std;
vector<int> intersectionArray(int arr1[],int arr2[], int n,int m){
    vector<int> ans;
    int i = 0;
    int j = 0;
    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }else if(arr1[i] < arr2[j]){
            i++;
        }else{
            j++;
        }
    }
    return ans;
}
int main(){
  int n ,m;
  cout << "Enter the value:";
  cin >> n;

  int arr1[100];
   cout << "Enter the first elements:";

  for(int i=0; i<n; i++){
  cin >> arr1[i];
  }
  cout << "Enter the second elements:";
  cin >> m;

  int arr2[100];

  cout << "Enter the second elements:";
  for(int j =0; j<m; j++){
     cin >> arr2[j];
  }
  vector<int> ans = intersectionArray(arr1,arr2,n,m);

  cout << "Intersection:";
  for(int i=0; i<ans.size(); i++){
    cout << ans[i] << endl;
  }
return 0;

  
}