class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length())return false;
      const int Char=256;
        
        int count [Char]={0};
        for (int i =0;i<s.length();i++){
count[s[i]]++;
            count[t[i]]--;
            }
        for (int i =0;i<Char;i++){
        if (count[i]!=0)return false;
        }
        return true;
    }
};