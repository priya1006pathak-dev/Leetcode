#include<iostream>
#include<vector>

using namespace std;
  vector<int>  insertionArray(int arr1[], int arr2[] ,int n, int m){
    vector<int>ans;
    for(int i=0; i<n; i++){
        int result = arr1[i];
        for(int j=0; j<m; j++){
            if(arr1[i] == arr2[j]){
                ans.push_back(result);
                arr2[j] = -1;
                break;
            }
        }
        
    }
    return ans;
}

 

int main(){

    int n,m;
 
    int arr1[100], arr2[100];
   cout << " Enter size of first array ->" << endl;
    cin >> n;


    cout << "Enter elements of first array: " ;
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    cout << " Enter Size of second array ->" << endl;
  cin >> m;
        for(int j=0; j<m; j++){
            cin >> arr2[j];
        }
        vector<int> result = insertionArray(arr1, arr2,n,m);
        cout << "Intersection :" ;
        for(int x : result){
            cout << x << " ";

        }
        cout << endl;
        return 0;
        
    
    
    
}


