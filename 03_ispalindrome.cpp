#include<iostream>
#include<string>
using namespace std;
bool palindrome(string s){
	int i=0, j = s.length();
	while(i<j){
		if(s[i]!=s[j]) return 0;
		else{
			i++;
			j--;
		}
	}
	return 1;
}
int main(){
	string  s("ayush");
	string s1("nayan");
	int a = palindrome(s);
	if(a==1) cout<<"Palindrome"<<endl;
	else cout<<"Not Palindrome"<<endl;
	int b = palindrome(s1)==1;
	if(b==0) cout<<"Palindrome"<<endl;
	else cout<<"Not Palindrome"<<endl;
	return 0;
}
