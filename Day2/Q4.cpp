//space complexity of O(N)
int findDuplicate(vector<int>& nums) {
        int len=nums.size();
        int ans;
        vector<int> a(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
            if(a[nums[i]]>1){
                ans=nums[i];
                break;
            }   
        }
        return ans;
        
    }
//Space Complexity of O(1)
int slow=nums[0];
int fast = nums[0];
do{
    slow=nums[slow];
    fast=nums[nums[fast]];

}while(slow!=fast);

fast=nums[0];
while(slow!=fast){
    slow=nums[slow];
    fast=nums[fast];

}
return slow;