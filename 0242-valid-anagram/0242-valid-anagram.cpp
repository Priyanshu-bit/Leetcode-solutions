class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.length()!=t.length())return false;
        
        unordered_map<char,int>map;
        for (auto ch :s){
            map[ch]++;
            
        }
        for (auto ch :t){
            if(map.find(ch)==map.end() || map[ch]==0) return false;
            else map[ch]--;
        }
        
        for (const auto&  i: map){
            if (i.second!=0) return false;
            
        }
        return true;
        
    }
};