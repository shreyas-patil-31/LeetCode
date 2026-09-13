class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string k = words[i];
            int a=0;
            int b=words[i].size()-1;
            bool ok = true;
            while(a<=b){
                if(words[i][a]!=words[i][b]){
                    ok = false;
                     break;
                }else if(words[i][a]==words[i][b]){
                    a++;
                    b--;
                }
            }
            if(ok){
                    return words[i];
                }
        }
        return "";
    }
};