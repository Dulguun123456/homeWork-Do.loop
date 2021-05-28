/*ugsun toonii tsifrvvdiig 
urwuugaar hewle.*/
#include<iostream>
using namespace std;
int main()
{
	int num,rev;
	cout<<"Enter number: ";
	cin>>num;
	for(int i=num;num>0;i++){
		
		
		rev=rev*10+num%10;
		
		num=num/10;
	}
	cout<<"rev num: "<<rev;
	
	
	
	return 0;
}
