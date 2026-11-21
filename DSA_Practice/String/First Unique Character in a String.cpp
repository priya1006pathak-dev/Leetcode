#include<iostream>
#include<string>
using namespace std;
int firstUniqChar(string s) {
        int freq[26] = {0};
        for(int i =0; i<s.length(); i++){
            freq[s[i] - 'a']++;
        }
        for(int i=0; i<s.length(); i++){
            if(freq[s[i] -'a'] == 1){
                return i;
            }
        }
        return -1;
    }
int main(){
    string s = "leetcode";

    int ans = firstUniqChar(s);

    if(ans != -1){
        cout << "First unique character index: " << ans;
        cout << "\nCharacter: " << s[ans];
    }
    else{
        cout << "No unique character found";
    }

    return 0;
}