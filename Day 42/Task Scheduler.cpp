class Solution {
public:
    class cnt{
        public:
        int count ; 
        char ch ; 
        cnt(char ch ){
            this->ch = ch ; 
            this->count = 0; 
        }
    } ; 
    class cmp{
        public:
        bool operator ()(cnt* &c1,cnt* &c2){
            return c1->count<c2->count ; 
        }
    } ; 
    int leastInterval(vector<char>& tasks, int n) {
        vector<cnt*>v ; 
        for(int i=0;i<26;i++){
            v.push_back(new cnt('A'+i)) ; 
        }
        for(char ch : tasks){
            v[ch-'A']->count++ ; 
        }
        priority_queue<cnt*,vector<cnt*>,cmp>pq ; 
        for(int i=0;i<26;i++){
            if(v[i]->count>0)pq.push(v[i]) ; 
        }
        v.clear() ; 
        int ans = 0  ;
        while(pq.size()){
            for(int i=0;i<=n && (v.size() || pq.size());i++){
                if(pq.size()){
                    cnt* temp = pq.top() ; 
                    pq.pop() ; 
                    temp->count-- ; 
                    if(temp->count > 0)v.push_back(temp) ; 
                }
                ans++ ; 
            }
            for(auto &e : v){
                pq.push(e) ; 
            }
            v.clear() ; 
        }
        return ans ; 
    }
};
