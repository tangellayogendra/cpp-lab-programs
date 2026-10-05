#include<iostream>
using namespace std;
class Parent
{
	public:
		parent(){
			cout<<"Parent Class"<<endl;
		}
};
class Child1 :virtual public Parent
{
	public:
		Child1() : Parent()
		{
			cout<<"Child1"<<endl;
		}
};
class Child2 : virtual public Parent
{
	public:
		Child2() : Parent()
		{
			cout<<"Child2"<<endl;
		}
};
class SmallChild : public Child1, public Child2
{
	public:
		void display()
		{
			cout<<"Small Child";
		}
};
int main()
{
	SmallChild sc;
	sc.display();
	return 0;
}










