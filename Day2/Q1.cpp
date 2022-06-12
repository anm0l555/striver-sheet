class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int s=matrix.size();
        for(int i=0;i<s;i++){
            for(int j=0;j<s;j++){
                if(i==j){
                    break;
                }
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(int i=0;i<s;i++){
            for(int j=0;j<s/2;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[i][s-j-1];
                matrix[i][s-j-1]=temp;
            }
        }
    }
};