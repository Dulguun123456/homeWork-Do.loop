#include<iostream>
using namespace std;
int main()
{	
	int n,evensum;
	cout<<"Number: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			evensum=evensum+i;
		}
	}
		cout<<evensum;
	
	return 0;
}
