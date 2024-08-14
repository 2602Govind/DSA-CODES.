#include<iostream>
using namespace std;
class A{
	public:
		void func(){
			cout<<" inside func ";
		}
};

class B {
	public:
		void func(){
			cout<<" \n  inside func ";
		}
};


class C :public  A,public B{
	
	
};

int main(){
	C obj;
//	obj.func();

obj.A:: func();
}
