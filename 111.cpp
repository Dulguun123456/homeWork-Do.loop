/*hereglegchiih ugsun toonii ehnii bolon 
svvliin tsifriig hewle*/
#include<iostream>
using namespace std;
int main()
{
	int num,fnum,lnum;
	cout<<"Enter number:";
	cin>>num;
	lnum=num%10;
	for(int i=num;num>10;i++){
		
		num=num/10;
	}
	fnum=num;
	cout<<"First digit: "<<fnum<<endl;
	cout<<"Last digit: "<<lnum<<endl;
	
	
	return 0; 
}
