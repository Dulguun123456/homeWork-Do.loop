#include<iostream>
using namespace std;
int main()
{
	int num,rev=0;
	cout<<"Enter a number: ";
	cin>>num;
	for(int i =num; num>0;i--){
		rev=rev*10+num%10;
		num=num/10;
		
	}
	
	cout<<"reverce number:  "<<rev;
	return 0;
}
