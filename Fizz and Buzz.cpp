    #include<iostream>
    #include<vector>
    using namespace std;
    void fizzBuzz(vector<string>&ans, int n){
        for(int i=1; i<=n; i++){
            if(i%3==0 && i%5==0){
                ans.push_back("FizzBuzz");
            }else if(i%3==0){
                ans.push_back("Fizz");
            }else if(i%5==0){
                ans.push_back("Buzz");
            }else{
                ans.push_back(to_string(i));
            }
        }
    }
    int main(){
    int n;
    cin >> n;
  vector<string> ans;
    fizzBuzz(ans,n);
  for(int i=0; i<ans.size(); i++){
  
    cout <<ans [i] << " ";
    }
}