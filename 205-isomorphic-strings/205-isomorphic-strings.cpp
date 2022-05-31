class Solution {
public:
    bool isIsomorphic(string s, string t) {
       
        map<char,char> mp;
        set<char> mapped;
        if(s.length()!=t.length()) return false;
        
        for(int i=0;i<s.length();i++){
            
            if(mp.find(s[i])==mp.end()){
                
                if(mapped.find(t[i])!=mapped.end()) return false;
                mp[s[i]]=t[i];
                mapped.insert(t[i]);
            }else{
                
                if(mp[s[i]]!=t[i]) return false;
            }
        }
        return true;
        
    }
};