/*
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.
Input:
N = 5 
A[] = {3,1,3,3,2} 
Output:
3
Explanation:
Since, 3 is present more
than N/2 times, so it is 
the majority element.
*/

// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
        
    // your code here
      int ansIndex = a[0], count = 1;
   for (int i = 1; i < size; i++)
   {
       if (a[i] == ansIndex)
           count++;
       else
           count--;
       if (count == 0)
       {
           ansIndex = a[i];
           count = 1;
       }
   }
   count = 0;
   for (int i = 0; i < size; i++)
       if (a[i] == ansIndex)
           count++;
   if (count > size / 2)
       return ansIndex;
   return -1;
        
}
