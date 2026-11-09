class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        // int pointer1 = 0,pointer2 = 0, index1 = 0, index2 = 0;
        // while(pointer1< word1.size() && pointer2 < word2.size()){
        //     char char1 = word1[pointer1][index1];
        //     char char2 = word2[pointer2][index2];
        //     if(char1 != char2){
        //         return false;
        //     }
        //     index1++;
        //     index2++;
        //     if(index1 == word1[pointer1].size()){
        //         index1 = 0;
        //         pointer1++;
        //     }
        //     if(index2 == word1[pointer2].size()){
        //         index2 = 0;
        //         pointer2++;
        //     }
        // }
        // return pointer1 == word1.size() && pointer2 == word2.size();
        string s1 = "";
        string s2 = "";
        for(int i = 0; i< word1.size();i++){
            s1+=word1[i];
        }
        for(int i = 0; i< word2.size();i++){
            s2+=word2[i];
        }
        return s1 == s2;
    }
};