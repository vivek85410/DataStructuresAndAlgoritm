#include <bits/stdc++.h>
using namespace std;

void mergeNewArray(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;

    // copy elements in dummy array in sorted manner
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    //if element is left in left half
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    //if element is left in right half
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    // now transfer all the elements from temporary to original array arr
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector<int>&arr, int low, int high){
    // base case
    if(low >= high){
        return;
    }

    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    mergeNewArray(arr,low,mid,high);

}

int main() {

    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    mergeSort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}
