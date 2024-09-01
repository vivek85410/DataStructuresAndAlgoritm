#include<bits/stdc++.h>
using namespace std;

bool sortit(pair<int,int>a,pair<int,int>b){
    if(a.second == b.second){
        return a.first < b.second;
    }
    return a.second > b.second;
}

void sortingthearray(vector<int> &arr, int n){
    unordered_map<int, int>ans;
    for(int i=0;i<n;i++){
        ans[arr[i]]++;
    }
    vector<pair<int,int>>brr;
    for(auto x = ans.begin(); x!=ans.end();x++){
        brr.push_back({x->first,x->second});
    }
    sort(brr.begin(),brr.end(),sortit);
    for(int i=0;i< brr.size();i++){
        while(brr[i].second > 0){
            cout<<brr[i].first<< " ";
            brr[i].second--;
        }
    }
    cout<<endl;

}

int main(){

    vector<int> arr = {3, 3, 5, 2, 1, 1, 2};
    int n = arr.size();
    sortingthearray(arr,n);

return 0;
}
