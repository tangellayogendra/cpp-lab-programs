#include<iostream>
using namespace std;
class Student 
{
	int a;
	public:
		void GetData()
		{
			cin>>a;
		}
		void display(Student s)// passing object as a parameter
		{
			cout<<"Value of a :"<<a;
		}
};
main(){
	Student stu;
	stu.GetData();
	stu.display(stu);
}
