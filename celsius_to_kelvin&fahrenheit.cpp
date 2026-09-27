#include<iostream>
#include<vector>
using namespace std;
              vector<double> convertTemperature(double celsius){
    
            double k = celsius+273.15;
            double f = celsius*1.8+32;
            return{k,f};
         }
int main(){
  double n;
  cin >> n;
  vector<double> result = convertTemperature(n);
  cout << "k: " << result[0] << endl; 
    cout << "f: " << result[1] << endl; 
}