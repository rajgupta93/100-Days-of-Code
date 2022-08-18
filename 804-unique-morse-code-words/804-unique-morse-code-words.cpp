class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        vector<string> sample = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        
        set<string> st;
        
        for(int i = 0; i < words.size(); i++){
            string s="";
            for(int j = 0; j < words[i].length(); j++) {
                s+=sample[words[i][j] - 'a'];
            }
            
            cout << s <<" ";
            st.insert(s);
        }
        
        return st.size();
    }
};