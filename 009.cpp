
/*
Given an integer A, check if it is an Armstrong number of not.
An Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits.

*/

int Solution::solve(int A) {
    assert(1<=A && A<=1e9);
    int B = A;
    long long sum = 0;
    int cnt[10] = {0};
    int d = 0;
    while(B > 0){
        int k = B%10;
        cnt[k]++;
        d++;
        B /= 10;
    }
    for(int i = 1; i < 10; ++i){
        long long p = 1;
        for(int j = 0; j < d; ++j){
            p *= i;
        }
        sum += p*cnt[i];
    }
    if(A == sum){
        return 1;
    }
    return 0;
}
