//https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1/#:~:text=Search%20in%20a%20Rotated%20Array




//Search in a Rotated Array :




class Solution{
    public:
    int search(int A[], int l, int h, int key){
    //complete the function here
      while(l<=h)
         {
             int mid=(l+h)/2;
             if(A[mid]==key)return mid;
             if(A[l]<A[mid])
             {
                 if((key>=A[l]) and( key<A[mid]))
                 {
                     h=mid-1;
                 }
                 else
                 {
                     l=mid+1;
                 }
             }
             else
             {
                  if((key>A[mid])and(key<=A[h]))
                  {
                      l=mid+1;
                  }
                  else
                  {
                       h=mid-1;
                  }
             }
         }
         return -1;
   }
    
};