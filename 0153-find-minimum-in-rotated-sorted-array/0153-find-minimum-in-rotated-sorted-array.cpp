class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0 , high=n-1 , mid ;
        int a=INT_MAX;
        while(low<=high){
            mid=(low+high)/2;
            a=min(a, nums[mid]);

            if(nums[mid]>nums[high]){
              low=mid+1; 
              

            }
            else {
                high=mid-1;
            } 
        }
     return a;   
    }
};