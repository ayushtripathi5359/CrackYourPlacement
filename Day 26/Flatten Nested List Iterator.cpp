class NestedIterator {
private:
    vector<int> res;
    int i=0;
    void solve(vector<NestedInteger> &nestedList){
        for(auto it:nestedList){
            if(it.isInteger()) res.push_back(it.getInteger());
            else solve(it.getList());
        }
    }
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        solve(nestedList);
    }
    
    int next() {
        return res[i++];
    }
    
    bool hasNext() {
        return i<res.size();
    }
};
