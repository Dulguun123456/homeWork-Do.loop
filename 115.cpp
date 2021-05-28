/*hereglegchees ugsun toonii 
tsifriin vrjwervvdiig ol*/
#include<iostream>
using namespace std;
int main()
{
	int num,mlt=1;
	cout<<" Enter number:";
	cin>>num;
	for(int i=num;num>0;i++)
	{
		mlt=mlt*(num%10);
		num=num/10;
		
	}
	 cout<<mlt;
	
	return 0;
}
