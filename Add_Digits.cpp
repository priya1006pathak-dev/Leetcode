#include<iostream>
using namespace std;
int addDigits(int num){
    while(num >= 10){
        int sum = 0;

        while(num > 0){
            int digit = num % 10 ;
            num = num / 10;

            sum = sum + digit;

        } 

        num = sum ;
        sum = 0;
    }
   
    return num ;
}



int main(){
    int num ;
    cout << " Enter the value " <<  " " ;

    cin >> num ;
    cout << addDigits(num);

}