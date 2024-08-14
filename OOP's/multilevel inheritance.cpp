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
class germans: public dog{
	
};
int main(){
	germans g1;
	g1.speak();
	
	
	return 0;
	
}
