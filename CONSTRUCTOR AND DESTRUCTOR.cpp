//Illustrate the use of Constructors and destructors
#include<iostream>
using namespace std;
class Book
{
	int bid;
	string bname;
	public:
		//Default Constructor
	Book()
	{cout<<"DEFAULT"<<endl;
	}
	//parameterized constructor
	Book(int id, string name){
		bid=id;
		bname=name;
		cout<<"Bookid:"<<bid<<" Bookname:"<<bname<<endl;
	}
	Book (Book &b){
		bid=b.bid;
		bname=b.bname;
		cout<<"Bookid:"<<bid<<" Bookname:"<<bname<<endl; 
	}
	~Book(){
		cout<<"Destructor Called"<<endl;
	}
};
main()
{
	Book b;
	Book b1(25,"Legend");
	Book b2(b1);
}
