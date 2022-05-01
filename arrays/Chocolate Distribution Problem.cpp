//https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1/#:~:text=Chocolate%20Distribution%20Problem

//Chocolate Distribution Problem







class Solution{
    
    public:
    long long findMinDiff(vector<long long> arr, int n, int m) {
        sort(arr.begin(), arr.end());
        m--;
        long long result = LLONG_MAX;
        for (long long i = m; i < n; i++)
            result = min(result, arr[i] - arr[i - m]);
        return result;
    }   
    
       
};