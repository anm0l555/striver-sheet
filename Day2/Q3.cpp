class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0 && nums1.size()==0){
            for(int i=0;i<n;i++){
                nums1.push_back(nums2[i]);
            }
        }else{
        int x=n-1;
        for(int i=nums1.size()-1;i>=m;i--){
            if(nums1[i]==0){
                nums1[i]=nums2[x];
                x--;
            }
        }
            
        
        sort(nums1.begin(),nums1.end());}
    }
};