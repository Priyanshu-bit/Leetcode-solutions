class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp,window;
        int n1 = s1.size(),n2 = s2.size();
        if(n1>n2) return false;
        for(int i=0; i<n1 ; i++){
            mp[s1[i]]++;
            window[s2[i]]++;
        }
        if(window == mp)return true;
        int k=0;
        for(int i=n1 ; i<n2 ; i++){
           if(window[s2[k]] == 1) window.erase(s2[k]);
            else window[s2[k]]--;
            window[s2[i]]++;
            k++;
            if(mp == window) return true;
        }
        return false;
    }
};