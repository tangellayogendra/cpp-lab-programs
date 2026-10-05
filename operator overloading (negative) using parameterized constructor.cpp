#include<iostream>
using namespace std;
class Number
{
	public:
	int num;
	Number(int n):num(n){}   //PARAMETERIZED CONSTRUCTOR
	Number operator -()
	{
		return -num;
	}
};
main()
{ 
Number n1(10);
Number n2=-n1;
cout<<"Negative object number is: "<<n2.num;
}
