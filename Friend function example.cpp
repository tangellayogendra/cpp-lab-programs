// friend function
#include<iostream>
using namespace std;
class Student{
	protected:
		int sid;
		friend void display(int sid , Student);
};
void display (int sid, Student){
	cout<<"SID: "<<sid;
}
main(){
	Student s;
	display(111,s);
}
