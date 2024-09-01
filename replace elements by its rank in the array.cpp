#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr = {20, 15, 26, 2, 98, 6};
    vector<int>brr;
    map<int,int>ans;
    int temp = 1;
    for(int i=0;i<arr.size();i++){
        brr.push_back(arr[i]);
    }
    sort(brr.begin(),brr.end());

    for(int i=0;i<arr.size();i++){
        if(ans[brr[i]] == 0){
            ans[brr[i]] = temp;
            temp++;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<ans[arr[i]]<<" ";
    }

return 0;
}

