/*
Given a number N, find all prime numbers upto N ( N included ).

Example:

if N = 7,

all primes till 7 = {2, 3, 5, 7}

Make sure the returned array is sorted.
*/


vector<int> Solution::sieve(int A) {
   
    vector<bool> val;
    vector<int> ans;
    
    int i;
    
    for(i = 0; i <= A; i++){
        val.push_back(true);
    }
    
    val[0] = false;
    
    for(i = 2; i <= sqrt(A); i++){
        if(val[i] == true){
            for(int j = 2; i*j <= A; j++){
                val[i*j] = false;
            }
        }
    }
    
    for(i = 2; i < val.size(); i++){
        if(val[i] == true){
            ans.push_back(i);
        }
    }
    
    return ans;
    
}
