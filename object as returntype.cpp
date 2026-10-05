#include<iostream>
using namespace std;
class Student 
{
	int a;
	public:
		Student GetData() 
		{   Student stu;
		cout<<"enter value of a:";
			cin>>stu.a;
			return stu;
			
		}
		void display(Student s)// passing object as a parameter
		{
			cout<<"Value of a :"<<s.a;
		}
};
main(){
	Student s1 ,s2;
	s2 =s1.GetData();
	s2.display(s2);
	
}
