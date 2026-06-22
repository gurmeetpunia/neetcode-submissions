class Solution {
public:
    int search(vector<int>& nums, int t) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        
        while(l<=r){
            int m= l +((r-l)/2);
            if(nums[m]>t){
                r=m-1;
            }else if(nums[m]<t){
                l=m+1;
            }else{
                return m;
            }
        }
        return -1;
    }
};
