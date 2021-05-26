#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"Enter number:";
	cin>>num;
	for(int i=num;num>0;i++){
		sum=sum+num%10;
		num=num/10;
		
	}
	cout<<"total of digits: "<<sum;
	
	return 0;
}
