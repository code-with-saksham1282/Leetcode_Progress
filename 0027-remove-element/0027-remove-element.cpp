class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i =0 , j= nums.size()-1, k=0;
        while(i<=j){
            
            // if(nums[i]==val){   
            //     if(nums[j]==val) j--;
            //     int temp = nums[i];
            //     nums[i] = nums[j];
            //     nums[j] = temp;
            //     j--;
            // }
            // else{
            //     i++;
            //     k++;
            // }
            if(nums[i]!=val){
                i++;
                k++;
            }
            else{
                while(i <= j && nums[j] == val) {
                          j--;
                }
                if(i<=j){
                int temp = nums[i];
                nums[i] = nums[j];
                 nums[j] = temp;
                 j--;
                }
            }
       }
        return k;
    }
};