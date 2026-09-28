
// reverse half number

// #include<iostream>
// using namespace std;

//     bool palindromeNumber(int x){
//         if(x < 0 || (x%10==0 && x!=0)){
//           return false;
//         }
//         int rev = 0;
//         while(x > rev){
//             int digit = x%10;
//             rev = rev*10+digit;
//             x = x/10;
      
//         }
//               return (x == rev || x == rev/10);
//     }

//     int main(){
//      int n;
//      cin >> n;

//      int ans =  palindromeNumber(n);
//      cout << ans;



// }








// reverse whole number 



#include<iostream>
using namespace std;

    bool palindromeNumber(int x){
      if(x < 0){
        return false;
      }
        int original = x;
        int rev = 0;
        while(x > 0){
          
        
            int digit = x%10;
            rev = rev*10+digit;
            x = x/10;
       
        }
            return (original == rev); 
    }

    int main(){
     int n;
     cin >> n;

     int ans =  palindromeNumber(n);
     cout << ans;



}
