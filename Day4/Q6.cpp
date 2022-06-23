//longest unique sequence
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mpp;
        int ans=0,c=0;
        for(int i=0;i<s.size();i++){
            if(mpp.find(s[i])!=mpp.end()){
                c=0;
                i=mpp[s[i]]+1;
                mpp.clear();
            }
            mpp[s[i]]=i;
            c++;
            ans=max(ans,c);
            
        }
        return ans;
    }
};

//Optimised Approach
int l=0,r=0,ans=0;
        while(r<s.size()){
            if(mpp.find(s[r])!=mpp.end()){
                l=max(l,mpp[s[r]]+1);
            }
            mpp[s[r]]=r;
            ans=max(ans, (r-l+1));
            r++;
        }
        return ans;