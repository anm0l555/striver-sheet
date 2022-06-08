class Solution {
public:
    void sortColors(vector<int>& nums) {
        // vector<int> a;
        int arr[3]={0};
        
        for(int i=nums.size()-1;i>=0;i--){
            arr[nums[i]]++;
            nums.pop_back();
        }
        
        for(int i=0;i<3;i++){
            for(int j=0;j<arr[i];j++){
                nums.push_back(i);
            }
        }
        
        
    }
};