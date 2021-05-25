#include<iostream>
using namespace std;
int main()
{
	int num,sum;	
	cout<<"Number: ";
	cin>>num;
	for(int i=1;i<=num;i++){
		sum=sum+i;
	}
	cout<<"Total numbers (1--"<<num<<") :"<<sum;
		
	
	return 0; 
}
