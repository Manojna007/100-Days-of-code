#include<iostream>
#include<conio.h>

int sqroot(int  x){
    int low=1,high=x,mid,msq,ans=-1;
    while(low<=high){
        mid=(low+high)/2;
        msq=mid*mid;
        if(msq==x)return mid;
        else if(msq>x){
            high=mid-1;

        }
        else{
            low=mid+1;
             ans=mid;

        }
        
    }
    return ans;
}


int main(){
    int x;
    std::cout<<"enter a number to check if its square_root or not"<<std::endl;
    std::cin>>x;
    
    std::cout<<"answer is  "<<sqroot(x);
    return 0;
}
