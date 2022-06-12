class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans=false;
        int index=0;
        
            for(int i=0;i<matrix.size();i++){
                if(target>=matrix[i][0] && target<=matrix[i][matrix[0].size()-1]){
                    index=i;
                    break;
                }
            }
        
        for(int i=0;i<matrix[0].size();i++){
            if(target==matrix[index][i]){
                ans=true;
                break;
            }
        }
        return ans;
    }
};

//Optimal Approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lo = 0;
        if(!matrix.size()) return false;
        int hi = (matrix.size() * matrix[0].size()) - 1;
        
        while(lo <= hi) {
            int mid = (lo + (hi - lo) / 2);
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] == target) {
                return true;
            }
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] < target) {
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }
        return false;
    }
};