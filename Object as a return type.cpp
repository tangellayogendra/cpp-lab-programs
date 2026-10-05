//Object as a Return type
#include<iostream>
using namespace std;
class Student {
	public:
		int id;
		Student getData(){
			Student s;
			s.id =101;
			return s;
			//returning an object
		}
		void display(){
			cout<<"ID = "<<id;
		}
};
int main(){
	Student s1,s2;
	s2=s1.getData();
	s2.display();
}
