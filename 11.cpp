#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"Enter number: ";
	cin>>num;
	for(i =0;num>0;i++){
		
		num=num/10;
	}
	
	cout<<"count digits: "<<i;
	
	return 0;
}
