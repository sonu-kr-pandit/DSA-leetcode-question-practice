class Solution {
public:

    static bool cmp(string a, string b ){
        return a+b > b+a ;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> str;
        for( int num : nums){
            str.push_back(to_string(num));
        }
         sort(str.begin() , str.end() , cmp);
         if(str[0]=="0"){return "0";}
         string result ="";
         for(auto &s : str){
            result+= s;
         }
         return result;
         
       
        
        
    }
    //    static bool cmp(string a, string b ){
    //     return a+b > b+a ;
    // }
};