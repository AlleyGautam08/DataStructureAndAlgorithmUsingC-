#include<iostream>
using namespace std;

class base{
	public:
		virtual void print(){
			cout<<"this is the base class print function"<<endl;
		}
		void display(){
			cout<<"this is the base class display function"<<endl;
		}
};
class derived: public base{
	public:
		void print(){
			cout<<"this is the derived class print function"<<endl;
		}
		void display(){
			cout<<"this is the derived class display function"<<endl;
		}
};

int main(){
	base *baseptr;
	derived d;
	baseptr = &d;
	baseptr -> print();
	baseptr -> display();
	return 0;
}
