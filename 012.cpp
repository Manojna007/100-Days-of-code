/*Subarrays with distinct integers!
  
  Problem Description

Given an array A of positive integers,call a (contiguous,not necessarily distinct) subarray of A good if the number of different integers in that subarray is exactly B.

(For example: [1, 2, 3, 1, 2] has 3 different integers 1, 2 and 3)

Return the number of good subarrays of A.
  
  Input 1:

 A = [1, 2, 1, 2, 3]
 B = 2
Output 1:
7 */


int atmost(int B,vector<int>&A){
    int i=0,j=0,cnt=0;
    map<int,int>m;
    while(i<A.size()){
        m[A[i]]++;
        while(m.size()>B){
            auto it=m.find(A[j]);
            it->second--;
            if(it->second==0)m.erase(it);
            j++;
            
        }
        cnt+=(i-j+1);
        i++;
    }
    return cnt;
}

int Solution::solve(vector<int> &A, int B) {
    return atmost(B,A)-atmost(B-1,A);
}
