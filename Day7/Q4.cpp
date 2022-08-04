//Trapping Rainwater in O(n^2)
int trap(vector<int>& height) {
        int res=0;
        for(int i=0;i<height.size();i++){
            int left_max=0,right_max=0;
            for(int j=0;j<=i;j++)
                left_max=max(left_max,height[j]);
            for(int j=i;j<height.size();j++)
                right_max=max(right_max,height[j]);
            res+=min(left_max,right_max)-height[i];
        }
        return res;
}

//optimal Approach with O(n) but space complexity 2*O(n)
int trap(vector<int>& height) {
        int leftMax=0,rightMax=0,res=0;
        vector<int> t1(height.size()),t2(height.size());
        for(int i=0;i<height.size();i++){
            leftMax=max(leftMax,height[i]);
            t1[i]=leftMax;
        }
        for(int i=height.size()-1;i>=0;i--){
            rightMax=max(rightMax,height[i]);
            t2[i]=rightMax;
        }
        for(int i=0;i<height.size();i++){
            res+=min(t1[i],t2[i])-height[i];
        }
        return res;
}
//optimal Approach
//Approach: Take 2 pointer l(left pointer) and r(right pointer) pointing to 0th and (n-1)th index respectively.Take two variables leftMax and rightMax and initialise it to 0.If heigh[l] is less than or equal to height[r] then if leftMax is less then height[l] update leftMax to height[l] else add leftMax-height[l] to your final answer and move the l pointer to the right i.e l++.If height[r] is less then height[l],then now we are dealing with the right block.If height[r] is greater then rightMax,then update rightMax to height[r] else add rightMax-height[r] to the final answer.Now move r to the left. Repeat theses steps till l and r crosses each other.
int n = height.size();
  int left = 0, right = n - 1;
  int res = 0;
  int maxLeft = 0, maxRight = 0;
  while (left <= right) {
    if (height[left] <= height[right]) {
      if (height[left] >= maxLeft) {
        maxLeft = height[left];
      } else {
        res += maxLeft - height[left];
      }
      left++;
    } else {
      if (height[right] >= maxRight) {
        maxRight = height[right];
      } else {
        res += maxRight - height[right];
      }
      right--;
    }
  }
  return res;
}
