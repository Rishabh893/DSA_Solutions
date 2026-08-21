class Solution {
public:
    int possibleStringCount(string word) {
        int count = 0;
        for(int i =0;i<word.length();i++){
            if(word[i]==word[i+1]){
                count+=1;
            }
        }
        return count+1;
    }
};