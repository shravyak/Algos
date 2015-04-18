class Solution {
public:
    int singleNumber(int A[], int n) {
        int xor_sum = 0;
        for(int i = 0; i < n; i++){
            xor_sum = xor_sum ^ A[i];
        }
        return xor_sum;
    }
};
