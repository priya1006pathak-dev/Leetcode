// #include<iostream>
// using namespace std;
// int subtractProductandSum(int n){
//     int product = 1;
//     int sum = 0;
//     for(; n!=0; n=n/10){
//         int digit = n%10;
//          sum = sum+digit;
//         product = product * digit;

//     }
//     int ans = product - sum;
//     return ans;
// }
// int main(){
//     int n;
//     cin >> n;
//     int result = subtractProductandSum(n);
//     cout << result;
// }



// solve in while loop 
#include<iostream>
using namespace std;
int subtractProductandSum(int n){
    int product = 1;
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        sum += digit;
        product *=digit;
        n /=10;

    }
    int result = product - sum ;
    return result;
}


int main(){
    int n;
    cin >> n;
    int ans = subtractProductandSum(n);
    cout << ans;
}
