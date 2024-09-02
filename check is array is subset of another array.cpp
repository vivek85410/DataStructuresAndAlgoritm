#include<iostream>
#include<unordered_map>
using namespace std;

bool issubset(int arr1[], int m, int arr2[], int n){
    // if array 1 is bigger than array 2 , return false
    if(m>n) return false;
    unordered_map<int,bool>ans;
    // set the value as true in all the hash map;
    for(int i=0;i<n;i++){
        ans[arr2[i]] = true;
    }
    // check if any element is missing in map
    for(int j=0;j<m;j++){
        if(ans.count(arr1[j])==0){
            return false;
        }
    }
    return true;

}

int main(){
    int arr1[]={1,3,4,5,2};
	int arr2[]={2,4,3,1,7,5,15};

	int m= sizeof(arr1)/sizeof(arr1[0]);
	int n= sizeof(arr2)/sizeof(arr2[0]);

	bool ans= issubset(arr1,m,arr2,n);

	if(ans==true)
	    cout<<"arr1[] is a subset of arr2[]";
	else cout<<"arr1[] is not a subset of arr2[]";

	return 0;
}
