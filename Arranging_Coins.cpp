#include<iostream>
using namespace std;

int arrangingCoins(int n){
    int count = 0;
    int row = 1;

    while(n >= row){
        n = n- row;
        count++;
        row++;
    }
    return count;
}


int main(){
    int n;
    cin >> n;
    int ans = arrangingCoins(n);
    cout << ans << endl;

}
