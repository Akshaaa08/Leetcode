class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        int sl=fib(n-2);
        int l=fib(n-1);
        return sl+l;
    }
};