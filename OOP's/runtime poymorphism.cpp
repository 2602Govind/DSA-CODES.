#include<iostream>
using namespace std;

class animal{
	void speak (){
		cout<<"speaking";
	}
};

class dogs: public animal{
	public:
	void speak(){
		cout<<"barking";
		
	}
};

int main (){
	dogs obj;
	obj.speak();
}
