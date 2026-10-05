//Factorial of a Number 
#include<iostream>
using namespace std;
int factorial(int ); // function declaration
main(){
	int n;
	cout<<"Enter n Value: "<<endl;
	cin>>n;
	cout<<"Factorial of "<<n<<"is: "<<factorial(n);//Function calling
}
// Function Definition
int factorial(int x){
	if (x<0) 
	printf("Negative Factorial is not Defined");
	if (x==0 || x==1) 
	return 1;
	return x *factorial(x-1);
	
}
