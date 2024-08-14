#include<iostream>
using namespace std;
class A{
	public:
		void sayhello (){
			cout<<" bhule to nhi humko ";
			
		}
			void sayhello (string name){
			cout<<" bhule to nhi humko  bol be";
			
		}
};
int main(){
	A obj ;
	obj.sayhello();
	
}
