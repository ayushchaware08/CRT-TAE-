#include<iostream>
using namespace std;

void febonacci(int n){
    int a =0;
    int b = 1;
    cout<<"Febonacci Series: 0 ";
    for(int i =0; i<n-2; i++){
        int next = a+b;
        cout<<next<<" ";
        a = b;
        b = next;
    }
}

bool isPrime(int n){
    int i = 0;
    while(i>n){
        if(n%i==0){
            return false;
        } 
        i++;
    }
    return true;
}
bool armstrong(int n){
    int org = n;
	int ans = 0;
	while(n>0){
		int digit = n%10;
		ans += digit*digit*digit;
		n = n/10;
	}	
	return ans == org;
}
int main(){
	// prime number
	int n = 17;
	if(isPrime(n)) cout<<"is Prime number"<< endl;
	else cout<<"not a Prime Number"<<endl;
	
	// armstrong
	int n1 = 153;
	if(armstrong(n1)) cout<<"is a Armstrong number"<<endl;
	else cout<<"not a Armstrong Number"<<endl;
	// febonacci
	febonacci(10);
	return 0;
}
