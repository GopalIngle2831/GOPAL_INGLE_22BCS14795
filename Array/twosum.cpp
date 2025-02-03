class Solution {
public:
    vector<int>twoSum(vector<int>&nums,int target) {
        vector<pair<int,int>>temp;
        int left=0,right=nums.size()-1;
        for(int i=0;i<nums.size();i++)temp.push_back({nums[i],i});
        sort(temp.begin(),temp.end());
        while(left<right){
            if(temp[left].first+temp[right].first==target)
                return{temp[left].second,temp[right].second};
            else if(temp[left].first+temp[right].first>target)
                right--;
            else
                left++;
        }
        return{};
    }
};