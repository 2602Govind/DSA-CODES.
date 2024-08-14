#include<iostream>
using namespace std;

class animal {
	public:
		int age ;
		int weight;
	    string  sound;
	    
	    public:
	    	void speak(){
	    		cout<<"barking"<<endl;
	    		
			}
};

class dog :public animal{
	
};
int main(){
	dog d1;
	d1.speak();
	
	return 0;
	
}
