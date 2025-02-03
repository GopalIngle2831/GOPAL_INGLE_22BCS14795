class Solution {
public:
    vector<vector<int>>threeSum(vector<int>&nums) {
        vector<vector<int>>solution;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int target=nums[i];
            int left=i+1;
            int right=nums.size()-1;
            if(i>0&&nums[i]==nums[i-1])
                continue;
            while(left<right){
                vector<int>temp;
                if(nums[left]+nums[right]+target==0){
                    temp={nums[i],nums[left],nums[right]};
                    solution.push_back(temp);
                    left++;
                    right--;
                    while(left<right&&nums[left]==temp[1])left++;
                    while(left<right&&nums[right]==temp[2])right--;
                }
                else if(nums[left]+nums[right]+target>0)
                    right--;
                else
                    left++;
            }
        }
        return solution;
    }
};
