class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ans;
        for(int i=0; i<=n; i++){
            int k = i;
            int sum = 0;
            while(k>0){
                int lastBit = k&1;
                k = k>>1;
                sum += lastBit;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};