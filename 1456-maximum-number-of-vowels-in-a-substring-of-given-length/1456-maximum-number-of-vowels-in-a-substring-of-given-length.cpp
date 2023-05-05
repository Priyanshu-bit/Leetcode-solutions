class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = { 'a','i','e','o','u'};
        int vcnt =0 ;
        for (int i=0;i<k;i++){
            if ( vowels.find (s[i])!= vowels.end())
                vcnt++;
        
    }
    int l =0;int r=k-1;
    int mvc= vcnt;
    while (r < s.length()-1){
        if ( vowels.find (s[l])!= vowels.end()){
                vcnt--;
}
    l++;
    r++;
       if ( vowels.find (s[r])!= vowels.end()){
                vcnt++;
}
         mvc= max(vcnt,mvc); 
    }
    return mvc;   
    }
};