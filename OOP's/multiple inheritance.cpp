#include<iostream>
using namespace std;

class animal {
	public:
		int age ;
		int weight;
	    string  sound;
	    
	    public:
	    	void speaks(){
	    		cout<<"barking"<<endl;
	    		
			}
};

class human {
	string  color;
	
	public :
		void speak(){
			cout<<"speaking";
		}
		
};

//multiple inheritance 

class hybrid :public animal ,public human{
	
};

int main(){
	hybrid h2;
	
	h2.speak();
	
	
	
	
	return 0;
	
}
