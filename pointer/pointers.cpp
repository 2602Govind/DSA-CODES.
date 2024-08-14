#include <iostream>
using namespace std;
int main()

{
	int x=10;
	int y=65;
	cout<<"address of X  and Y is  "<<&x<<" and "<<&y<<endl;
	int *ptr1=&x;
	int *ptr2=&y;
	cout<<"value of x and y  is  "<<*ptr1<<"and "<<*ptr2<<endl;
	cout<<"value of x and y  is  "<<ptr1<<"and "<<ptr2<<endl;
	cout<<"Size of integer is "<<sizeof(x)<< " and "<<sizeof(y)<<endl;
	cout<<"size of pointer is "<<ptr1<<"and "<<ptr2<<endl;
	(*ptr1)++;
	cout<<" after increament by a++ " <<x;
	//copying a pointer
	int *ptr=ptr1;
	cout<<x<<"  "<<ptr1;
		cout<<*ptr1<<"  "<<*ptr;int i = 3;
   int *t = &i;
   //cout <<  (*t)++ << endl;
   *t = *t +1;
    cout << *t << endl;
    cout << " before t " << t << endl;
    t = t + 1;
    cout << " after t " << t << endl;
		
		
	
}

