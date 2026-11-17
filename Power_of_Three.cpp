#include<iostream>
using namespace std;
bool powerThree(int n){
    if(n <= 0){
        return false;

    }
    while(n != 1){
    
    if(n % 3 == 0){
        n = n / 3;

    }else{
        return false;
    }
}
    return true;
}


int main(){
int n;
cin >> n;
bool ans = powerThree(n);
cout << ans << endl;
}