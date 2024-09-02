#include<iostream>
using namespace std;

int equilibrium_index(int *nums,int n){
    int totalsum = 0;
    for (int i=0;i<n;i++){
        totalsum+=nums[i];
    }
    int leftsum=0,rightsum = totalsum;

    for(int i=0;i<n;i++){
        rightsum-=nums[i];
        if(leftsum == rightsum){
            return i;
        }
        else{
            leftsum+=nums[i];
        }
    }
    return -1;
}


int main(){

    int nums[] = {1,-1,4};
    int n = 3;
    int ans = equilibrium_index(nums,n);
    cout<<ans<<endl;

return 0;
}
