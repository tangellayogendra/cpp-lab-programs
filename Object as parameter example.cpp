#include <iostream>
using namespace std;

class Student{
public:
    int marks;
    void getData(){
      cout << "Enter marks: ";
      cin >> marks; }
};
void display(Student s)
{cout << "Student Marks = " << s.marks << endl;}

int main()
{
    Student s1;
    s1.getData();
    display(s1);
}
