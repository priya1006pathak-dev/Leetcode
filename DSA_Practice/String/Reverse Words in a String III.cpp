#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
string reverseWords(string s){
    int start = 0;
    int end = 0;
    while(end < s.length()){
        if(s[end] == ' '){
            reverse(s.begin()+start , s.begin() + end); 
            start = end + 1;
        }
        end++;
    }
    reverse(s.begin() + start,s.end());
    return s;
}
int main(){
   string s;
   getline(cin , s);
   cout << reverseWords(s) << endl;

}