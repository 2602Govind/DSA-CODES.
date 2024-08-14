#include<iostream>
using namespace std;
void printArray(char arr[],int size){
	for(int i=0;i<size;i++)
{
	cout<<arr[i]<<endl;
}
cout<<"Printing done";
}
int main()
{
	
int arr[12]={ 1,3,54,65,34,3,45};


//cout<<"The value at  index 3 is : = "<<arr[4];
 int n=12;

/*printArray(arr,12);

int arrsize=sizeof(arr)/sizeof(int);

cout<<" The size is "<<arrsize;*/
 char ch[15]={'a','b','c','d','e','f','g'};
 printArray(ch,10);
}
