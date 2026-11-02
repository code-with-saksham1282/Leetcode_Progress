class Solution {
public:
    int reverseDegree(string s) {
        int sum =0;
        for(int i = 0; i<s.size();i++){
            int reverseposition = 'z'-s[i]+1; // when we subtract two characters their ASCII values gets subtracted
            int stringposition = i+1;
            sum += reverseposition*stringposition;
        }
        return sum;
    }
};