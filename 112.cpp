/*hereglegchiin ugsun ehnii too bolon
svvliin tsifrvvdiin niilbervvdiig ol*/
#include<iostream>
using namespace std;
int main()
{
	int num,fnum,lnum;
	cout<<" Enter num: ";
	cin>>num;
	lnum=num%10;
	for(int i=num;num>10;i++){
		
		num=num/10;
	}
	fnum=num;
	
	cout<<"First number: "<<fnum<<endl;
	cout<<"Last number: "<<lnum<<endl;
	cout<<"Multification of numbers: "<<lnum*fnum;

	return 0;
}
