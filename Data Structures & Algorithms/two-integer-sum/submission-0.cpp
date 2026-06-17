class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int t) {
                unordered_map<int,int> mp;
                        int n=nums.size();
                            
                                    for(int i=0;i<n;i++){
                                                int di=t-nums[i];
                                                            if(mp.find(di) != mp.end()){
                                                                            return {mp[di],i};
                                                                                        }
                                                                                                    mp.insert({nums[i],i});
                                                                                                            }
                                                                                                                    return {};
                                                                                                                        }
                                                                                                                        };
