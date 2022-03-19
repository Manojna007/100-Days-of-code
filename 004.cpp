/*
Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.

In case of multiple subarrays, return the subarray which comes first on moving from left to right.

 

Example 1:

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.
*/ 

vector<int> subarraySum(int arr[], int n, long long s)
    {
    //temp is current sum, j is start of window and i is end of window.
        long long temp=0;
        int i=0,j=0;
        while(i<n){
            if(temp+arr[i]<=s){
                temp+=arr[i];
                if(temp==s){
                    return {j+1,i+1};
                }
                i++;
            }else{
                temp-=arr[j];
                if(temp==s){
                    return {j+1,i+1};
                }
                j++;
            }
        }
        return {-1};
    }
