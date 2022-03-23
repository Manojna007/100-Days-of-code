/*
Find the contiguous subarray within an array, A of length N which has the largest sum.

Input Format:

The first and the only argument contains an integer array, A.
Output Format:

Return an integer representing the maximum possible sum of the contiguous subarray.
Constraints:

1 <= N <= 1e6
-1000 <= A[i] <= 1000
For example:

Input 1:
    A = [1, 2, 3, 4, -10]

Output 1:
    10

Explanation 1:
    The subarray [1, 2, 3, 4] has the maximum possible sum of 10.

*/



int Solution::maxSubArray(const vector<int> &A) {
  
    int maxSoFar = 0, overallMax = 0, check = 0, k = 0, min;
    
    for(int i = 0; i < A.size(); i++){
        maxSoFar = maxSoFar + A[i];
        if(maxSoFar < 0){
            maxSoFar = 0;
        }
        if(maxSoFar > overallMax){
            overallMax = maxSoFar;
        }
        if(A[i] < 0){
            k++;
            if(k == 1){
                min = A[i];
            }
            if(A[i] > min){
                min = A[i];
            }
            check++;
        }
    }
    
    if(check == A.size()){
        overallMax = min; 
    }
    
    return overallMax;
}
