#include<iostream>
#include<vector>

using namespace std;
void reverseString(vector<char>&s){
    int start = 0;
    int end = s.size()-1;
    while(start <= end){
       
            swap(s[start++],s[end--]);
        
    }
}
int main(){
 vector<char>s;
 char ch;
 for(int i=0; i<5; i++){
    cin >> ch;
    s.push_back(ch);

 }
 

   reverseString(s);
    for(char ch : s){
cout << ch << " ";
            

}
}