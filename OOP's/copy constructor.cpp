#include<iostream>
using namespace std;
class hero{
	private:
	int health;
	public:
	
	void print(){
		cout<<health<<endl;
		cout<<level;
	}	
	char level;
	hero(){
		cout<<"\n constructor called";
	}
	//parameterized constructor 
	hero(int health){
		cout<<"this"<<this;
		this->health=health; 
	}
	hero(int health,int level)
	{
			this->health=health; 
				this->level=level; 
	}
	//copy constructor 
	hero(hero&  temp)
{
	cout<<"\n copy constructor called ;";
	this->health=temp.health;
	this->level=temp.level;
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
	hero suresh(89,'d');
	//copy constructor    
	hero ritesh(suresh);
	ritesh.print();
	return 0;
}
