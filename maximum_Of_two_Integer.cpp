#include<iostream>
using namespace std;
int maximum(int a,int b){
   
      if(a>b){
       return a;
      }else if(b>a){
        return b;
    }else {
        // return b;
        return a;
        
    }
   
}
int main(){
int a,b;
cin >> a >> b;

cout <<  maximum(a,b);
}