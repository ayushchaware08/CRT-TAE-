#include <iostream>
using namespace std;

int main() {
	int arr[20] = {1,2,3,4,5,6,7,8,9,10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int evenSum =0, oddSum=0;
	for(int i =0; i<20; i++){
		if(arr[i]%2==0) evenSum+=arr[i];
		else oddSum+=arr[i];
	}
	cout<<"Even Sum: "<<evenSum<<endl;
	cout<<"Odd Sum: "<<oddSum<<endl;
	return 0;
} 
