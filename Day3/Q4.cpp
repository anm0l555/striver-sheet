//extended mooe's voting algorithm
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int c1=0,c2=0,num1=-1,num2=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num1){
                c1++;
                
            }else if(nums[i]==num2){
                c2++;
            }else if(c1==0){
                num1=nums[i];
                c1=1;
            }else if(c2==0){
                num2=nums[i];
                c2=1; 
            }else{
                c1--;
                c2--;
            }
        }
        c1=0,c2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num1){
                c1++;
            }else if(nums[i]==num2){
                c2++;
            }
            
        }
        if(c1>nums.size()/3){
            ans.push_back(num1);
        }
        if(c2>nums.size()/3){
            ans.push_back(num2);
        }
        return ans;
    }
};