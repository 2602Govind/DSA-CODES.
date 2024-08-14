#include<iostream>
using namespace std;
class A{
	public:
		void func1(){
			cout<<" inside func1 ";
		}
};

class B :public  A{
	public:
		void func2(){
			cout<<" \n  inside func2 ";
		}
};


class C :public  A{
	public:
		void func3(){
			cout<<" \n  inside func3 ";
		}
};

int main(){
	
	A d;
	d.func1();
	B g;
	g.func2();
	C v;
	v.func3();
	
}
