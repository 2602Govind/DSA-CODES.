#include<iostream>
using namespace std;
class hero{
	private:
	int health;
	public:
		
	char level;
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
	// creation of object
	
	hero  h1;
	h1.sethealth(99);
	h1.level='a';
	cout<<"health is"<<h1.gethealth();
	cout<<"\n level is :"<<h1.getlevel();
	
//	cout<<"size : "<<sizeof(h1);
//	cout<<"health is"  <<h1.health;
	//	cout<<"level  is"  <<h1.level;

	
	return 0;
}
