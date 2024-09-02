#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_array(int *arr,int n){
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rotatebyright(int *arr, int n, int k){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+k)%n] = arr[i];
    }
    arr = temp;
    cout<<"rotation to right : "<<endl;
    print_array(arr,n);
    cout<<endl;
}


void rotatebyleft(int *arr, int n,int k){
    reverse(arr,arr+n);
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    cout<<"rotation to left : "<<endl;
    print_array(arr,n);
    cout<<endl;

}
int main(){

    int arr1[] = {3,7,8,9,10,11};
    int arr2[] = {1,2,3,4,5,6,7};


    rotatebyright(arr2,7,2);

    rotatebyleft(arr1,6,3);
return 0;
}
