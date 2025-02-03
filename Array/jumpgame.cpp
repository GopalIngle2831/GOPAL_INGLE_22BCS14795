class Solution {
public:
    bool canJump(vector<int>& nums) {
        int Destination=nums.size()-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(i+nums[i]>=Destination){
                Destination=i;
            }
        }
        return Destination==0;
    }
};