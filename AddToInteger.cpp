#include<iostream>
using namespace std;
int sum(int a,int b){
    int ans = 0;
    for(int i=0; i<=b; i++){
        ans = a+b;

    }
    return ans;
}
int main(){
int a,b;
cin >> a >> b;
int answer = sum(a,b);
cout << "answer is" << answer;
    

}


