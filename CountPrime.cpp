#include<iostream>
#include<vector>
using namespace std;
int  countPrime(int n){
    int count = 0;
  if(n<=2){
    return 0;
  }

    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;
    for(int i=2; i<n; i++){
        if(prime[i]){
            count++;

            for(int j = 2*i; j<n; j=j+i){
              prime[j] = 0;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    int ans = countPrime(n);
    cout << ans;
    return 0;
}