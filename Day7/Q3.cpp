//3 sum using 2 pointer approach
//Time Complexity: O(n^2)
//Space Complexity: O(n)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i==0|| (i>0 && nums[i]!=nums[i-1])){
                int a =nums[i];
                int target=0-a,lo=i+1,hi=nums.size()-1;
                while(lo<hi){
                    if((nums[lo]+nums[hi])==target){
                        vector<int> temp{a,nums[lo],nums[hi]};
                        res.push_back(temp);

                        int t1=nums[lo],t2=nums[hi];
                        while(nums[lo]==t1 && lo<hi)
                            lo++;
                        while(nums[hi]==t2 && lo<hi)
                            hi--;
                    }else if((nums[lo]+nums[hi])<target){
                        lo++;
                    }else{
                        hi--;
                    }


                }
            }
        }
        return res;
    }
};
