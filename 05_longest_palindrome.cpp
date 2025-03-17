#include<iostream>
using namespace std;
bool ispalindrome(string& s){
    int start = 0, end = s.length()-1;
    while(start < end){
        if(s[start]!=s[end]) return false;
        start++;
        end--;
    }
    return true;
}
string subarr(string& s){
    int n=s.length();
    string longest ="";
    for(int i =0; i<n; i++){
        string temp ="";
        for(int j =i; j<n; j++){
            temp+=s[j];
            if(ispalindrome(temp) && temp.length()>longest.length()){
                longest = temp;
            }
        }
    }
    return longest;
}
int main(){
    // string s = "babad";
    string s ;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<"Longest Substring: "<<subarr(s);
    return 0;


}