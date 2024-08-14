#include <iostream >
using namespace std;

class human  {
	public :
		string name;
		int age;
		int height;
		int weight;
	
	int getAge(){
		return  this->age;
	}
	void setWeight(int w){
		this->weight=w;
	}
		
};
class male:public human{
	public :
		string color;
		void sleep(){
			cout<<"man is sleeping";
		}
	
};



int main(){
  
    male h1;
   cout<<h1.age<<endl;
    cout<<h1.weight<<endl;
     cout<<h1.color<<endl; 
	 cout<<h1.height<<endl;
	 h1.sleep();
	 h1.setWeight(77);
   
	return 0;
	
}
