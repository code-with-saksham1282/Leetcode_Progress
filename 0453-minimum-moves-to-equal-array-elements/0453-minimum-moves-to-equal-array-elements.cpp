class Solution {
public:
    int minMoves(vector<int>& nums) {
        // bool allequal = true;
        // for(int i = 1; i<nums.size();i++){
        //     if(nums[i]!=nums[0]){
        //         allequal = false;
        //         break;
        //     }
        // }
        // if(allequal){
        //     cout<<0;
        // }
        // else{

        // }
        int sum = 0, min =  INT_MAX;
        int n = nums.size();
        for(int i = 0; i<n;i++){
            sum+=nums[i];
            if(nums[i]<min) min = nums[i];
        }
        return sum-(n*min);
    }
};