class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int n=gas.size();

        int gas_sum=accumulate(gas.begin(),gas.end(),0);
        int cost_sum=accumulate(cost.begin(),cost.end(),0);

        if(cost_sum>gas_sum) return -1;
        else
        {
            int max_ind=-1 , max_diff=INT_MIN , curr_diff=0;

            for(int index=n-1;index>=0;index--)
            {
                curr_diff+=(gas[index]-cost[index]);
                if(curr_diff>max_diff) 
                {
                    max_diff=curr_diff;
                    max_ind=index;
                }
            }
            return max_ind;
        }
    }
};
