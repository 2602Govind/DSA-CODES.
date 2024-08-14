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
	hero h1 (23);
	cout<<"address of h1"<<&h1;
	h1.gethealth();
	//dynamically
	hero *h=new hero;
	h->print();
	hero temp(22,'e');
	temp.print();
	
	return 0;
}

