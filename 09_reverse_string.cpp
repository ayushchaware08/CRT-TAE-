#include<iostream>
#include<string>
using namespace std;
string reverse(string& s){
    int i = 0, j=s.length()-1;
    while(i<j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;
}
int main(){
    string s = "Computer";
    reverse(s);
    cout<<"Reverse string is: "<<s<<endl;
    return 0;

}