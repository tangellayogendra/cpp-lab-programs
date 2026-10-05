#include<iostream>
using namespace std;
class Demo
{
	public:
		void show()
		{
			cout<<"NO ARGUMENTS"<<endl;
		}
		void show(int a)
		{
			cout<<"ONE ARGUMENT: "<<a<<endl;
		}
		void show(int a ,int b)
		{
			cout<<"TWO ARGUMENTS: "<<a<<" "<<b;
		}
};
main(){
	Demo d;
	d.show();
	d.show(10);
	d.show(20,30);
}
