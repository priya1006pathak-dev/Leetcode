#include<iostream>
using namespace std;



int dp[46] = {0};

int climbStairs(int n) {

    if(n == 0 || n == 1)
        return 1;

    if(dp[n] != 0)
        return dp[n];

    return dp[n] = climbStairs(n-1) + climbStairs(n-2);
}

int main() {
    int n;
    cin >> n;

    int ans = climbStairs(n);
    cout << ans << endl;
}