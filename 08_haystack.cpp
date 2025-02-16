#include<iostream>
#include<string>
using namespace std;
int find(string haystack, string needle) {
    int index =0;
    if(haystack.size()<needle.size()) return -1;
    for(int i =0; i<=haystack.size()-needle.size(); i++){
        int j =0;
        for(; j<needle.size(); j++){
            if(haystack[i+j]!=needle[j]){
                break;
            }
        }
        if(j==needle.size()) return i;
    }
    return -1;
}
int main(){
    string s = "adbfksadk", needle="sad";
    int ans = find(s, needle);
    cout<<"found at index: "<<ans<<endl;
    return 0;
}