#include<iostream>
using namespace std;

int find_element(int *arr,int n,int k){
    int i=0,j=n-1;
    while(i<=j){
        if(arr[i] == k)
            return i;
        else if(arr[j] == k)
            return j;
        else{
            i++;
            j--;
        }
    }
return -1;
}

int main(){
    int arr[] = {6,7,9,5,3,10};
    int n = 6;
    int k = 10;
    int ans = find_element(arr,n,k);
    cout<<ans<<endl;

return 0;
}
