#include<iostream>
using namespace std;
int main()
{
	int num,count;
	cout<<"Enter number: ";
	cin>>num;
	for(count=0;num>0;count++){
		
		num=num/10;
	}
	cout<<"number of digits:"<<count;
	
	return 0;
}
