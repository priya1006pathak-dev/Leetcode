#include<iostream>
using namespace std;
int factorialZeroes(int n){
    int res = 0;

    while(n > 0){
        n = n / 5;
        res = res + n;

    }
    return res;
}
int main(){
int n;
cin >> n;
int ans = factorialZeroes(n);
cout << ans << endl;
}