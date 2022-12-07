Given a collection of numbers, return all possible permutations.

Example:

[1,2,3] will have the following permutations:

[1,2,3]
[1,3,2]
[2,1,3] 
[2,3,1] 
[3,1,2] 
[3,2,1]


void fnc(vector<int>&A,vector<vector<int>>&ans,int index){
    if(index==A.size()){
        ans.push_back(A);
        return ;
    }
    for(int i=index;i<A.size();i++){
        swap(A[i],A[index]);
        fnc(A,ans,index+1);
        swap(A[i],A[index]);
            
        }
    
}
vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>>ans;
    fnc(A,ans,0);
    return ans;
}
