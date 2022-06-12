#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    int sum1,sum2,missingno,repeatno;
    vector<int> temp(n+1,0);
    for(int i=0;i<arr.size();i++){
        temp[arr[i]]++;
       
    }
    for(int i=0;i<temp.size();i++){
         if(temp[i]>1){
            repeatno=i;
        }
        if(i>0 && temp[i]==0){
            missingno=i;
        }
    }

    pair<int,int> ans;
    ans.first=missingno;
    ans.second=repeatno;
    return ans;
    
}
