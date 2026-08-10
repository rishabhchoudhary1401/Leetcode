class Solution {
public:
double helper(double x, long long n){
        double ans = 1;
        if(n>=0){
            while(n>0){
                int lastbit = n & 1;
                n = n>>1;
                if(lastbit == 1){
                    ans = ans*x;
                    x = x*x;
                }
                else x = x*x;
            }
        }
        else{
            n = n * -1;
            
            while(n>0){
                int lastbit = n & 1;
                n = n>>1;
                if(lastbit == 1){
                    ans = ans/x;
                    x = x*x;
                }
                else x = x*x;
            }
            
        }
        return ans;
}
    double myPow(double x, int n) {
        double ans = helper(x, n);
        return ans;
    }
};