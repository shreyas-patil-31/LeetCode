class Solution {
public:
    string truncateSentence(string s, int k) {
        string v = "";
        int count = 0;
        int i = 0;
        while(count<k && i<s.size()){
            if(s[i]== ' '){
                count++;
                if(count<k){
                v += s[i];
                }
                i++;
            }else{
           v += s[i];
            i++;
            }
        }
        return v;
    }
};