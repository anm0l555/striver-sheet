//Largest sub array with sum 0
int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int> mpp;
        int p_sum=0,max_i=0;
        for(int i=0;i<n;i++){
            p_sum+=A[i];
            if(p_sum==0){
                max_i=i+1;
            }else{
                if(mpp.find(p_sum)!=mpp.end()){
                    max_i=max(max_i,i-mpp[p_sum]);
                }else{
                    mpp[p_sum]=i;
                }
            }
        }
        return max_i;
    }