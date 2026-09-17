class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;

        if( n<=0)return ans;
        int num = 1;
        while(num <= n){
            if( num%3 == 0 && num%5 == 0 ){
                ans.push_back("FizzBuzz");
            }else if( num%3 == 0 && num%5 != 0){
                 ans.push_back("Fizz");
            }else if( num % 5 == 0 && num%3 != 0){
                 ans.push_back("Buzz");
            }else{
                ans.push_back(to_string(num));
            }
            num++;
        }
        return ans;
        
    }
};