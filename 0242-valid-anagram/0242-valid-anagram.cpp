class Solution {
public:
    bool isAnagram(string s, string t) {
        if(t.length() != s.size()){return false;}
        int freq[26] = { 0 };
        for(int i = 0 ; i< s.size(); i++){
            freq[s[i]-'a']++;
        }
        for(int i = 0 ; i< t.size(); i++){
           int idx = t[i] - 'a';
           if(freq[idx]==0){return false;}
           freq[idx]--;
        }
        return true;
    }
};