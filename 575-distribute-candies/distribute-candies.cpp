class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> st;
        for(auto it:candyType){
            st.insert(it);
        }
        int x=st.size();
        int n=candyType.size()/2;
        if(x>n){
            return n;
        }
        return x;
    }
};