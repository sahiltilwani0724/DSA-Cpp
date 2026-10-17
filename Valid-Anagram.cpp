--leetcode que 242--

  class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        for(char i=0;i<s.size();i++){
            bool found=false;
            for(char j=0;j<t.size();j++){
                if(s[i]==t[j] ){
                   found = true;
                    t[j]='#';
                    break;
                }
            }
               if(found==false){
            return false;
        }
        }
     
        return true;
    }
};
