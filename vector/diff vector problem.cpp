#include<iostream >
#include<vector>

using namespace std;
int main ()
{
	int arr[]={1,2,33,11,1,1};
	int anssum=0;
	
	for(int i=0;i<6;i++)
{
	if(i%2==0){
		anssum+=arr[i];
		
	}
	else{
		anssum-=arr[i];
		
	}
	}	
	cout<<anssum;
	return 0;
	
}
