#include<iostream>
#include<string>
using namespace std;
int strStr(string n, string m){
    for(int i=0; i+   m.length() <= n.length(); i++){
        int j = 0;
        for(j=0; j<m.length(); j++){
            if(n[i+j] != m[j]){
                break;
            }
        }
        if(j == m.length()){
            return i;
        }
    }
    return -1;
}
int main(){
string n,m;
cout << "Enter the value:";
cin >> n;
cin >> m;

int ans = strStr(n,m);
cout << ans;
return 0;

     
}