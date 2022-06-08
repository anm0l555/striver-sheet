class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Bruteforce technique
//         int value=0;
        
//         for(int i=0;i<prices.size()-1;i++){
//             for(int j=i+1;j<prices.size();j++){
//                 if(prices[j]>prices[i]){
//                     int temp=abs(prices[i]-prices[j]);
//                     if(temp>value){
//                         value=temp;
//                     }    
//                 }
                
                
//             }
//         }
//         return value;
        
        
        int lsf=INT_MAX;
        int op=0,profit;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<lsf){
                lsf=prices[i];
            }
            profit=prices[i]-lsf;
            if(profit>op){
                op=profit;
            }
            
        }
        return op;
    }
};