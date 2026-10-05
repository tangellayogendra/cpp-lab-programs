//OPERATOR OVERLOADING
#include<iostream>
using namespace std;
class Student {
	public:
		int marks;
		Student operator +(Student s) //Student(int m):marks(m);
		{
			Student t;
			t.marks=marks+s.marks;
			return t;
		}
		void display()
		{
		 cout<<"Two Students total marks are: "<<marks;
		}
};
main()
{
	Student s1,s2,s3;
	s1.marks=98;
	s2.marks=96;
	s3=s1+s2;
	s3.display();
}
