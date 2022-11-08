#include<iostream>
using namespace std;

class Apnacollege{
	public:
		void fun(){
			cout<<"I am a function with no argument" <<endl;
		}
		void fun(int x){
			cout<<"I am a function with int argument" <<endl;
		}
		void fun(double x){
			cout<<"I am a function with double argument" <<endl;
		}
};

int main(){
	Apnacollege obj;
	obj.fun();
	obj.fun(4);
	obj.fun(6.2);
	return 0;
}
