#include<iostream>
using namespace std;
int main()
{
	int n,oddsum;
	cout<<"Number: ";
	cin>>n;
	for(int i=0;i<=n;i++){
	
		if(i%2==!0){
			oddsum=oddsum+i;
		}
	}
		cout<<oddsum;
	
	return 0;
}
