#include<iostream>
using namespace std;
class hero{
	private:
	int health;
	public:
		
	char level;
	hero(){
		cout<<"\n constructor called";
	}
	int gethealth(){
	return health;
	}
	char getlevel(){
		return level;
		
	}
	void sethealth(int h){
		health=h;
	}
	void setlevel(char ch)
	{
		level=ch;
	}
};

int main(){
//statically
	hero h1;
	//dynamically
	hero *h=new hero;
	
	return 0;
}

