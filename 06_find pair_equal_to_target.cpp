#include<iostream>
#include<vector>
using namespace std;
vector<int> find(vector<int>& arr, int target){
    // cout<<arr.size()<<"size";
    for(int i =0; i<arr.size()-1; i++){
        for(int j =i+1; j<arr.size(); j++){
            if(arr[i]+arr[j]==target){
                return {i,j};
            }
        }
    }
    return {-1, -1};
}
int main(){
    vector<int> arr = {1, 1, 6, 2, 4};
    int target = 3;
    vector<int> ans = find(arr, target);
    cout<<"Pair: ";
    for(int i=0; i<ans.size();i++) cout<<ans[i]<<" ";
    
    return 0;
}