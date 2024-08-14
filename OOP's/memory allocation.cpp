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

	//static allocation
	hero a;
		a.sethealth(455);
	a.setlevel('g');
	cout<<"level is "<<a.level;
	cout<<"\n health is "<<a.gethealth();
	
	// dynamically allocation 
	
	hero *b =new  hero;
	
	b->sethealth(90);
	b->setlevel('e');
		cout<<"\n level is "<<(*b).level;
	cout<<"\n health is "<<(*b).gethealth();
		cout<<"\n level is "<<b->level;
	cout<<"health is "<<b->gethealth();
	return 0;
}
