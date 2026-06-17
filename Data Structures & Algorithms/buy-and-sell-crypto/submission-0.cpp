class Solution {
    public:
        int maxProfit(vector<int>& p) {
                int maxp=0;
                        int minb= p[0];

                                for(int & s:p){
                                            maxp=max(maxp,s-minb);
                                                        minb=min(minb,s);
                                                                }
                                                                        return maxp;
                                                                            }
                                                                            };

