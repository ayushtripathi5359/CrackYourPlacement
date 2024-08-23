class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        priority_queue<int> pq;
        for(int i:nums){
            map[i]+=1;
        }
        for(auto m:map){
            pq.push(m.second);
        }
        vector<int> topkf;
        for(int i=0;i<k;i++){
            for(auto m:map){
                if(pq.top()==m.second){
                    topkf.push_back(m.first);
                    pq.pop();
                    map.erase(m.first);
                    break;
                }
            }
        }
        return topkf;
    }
};
