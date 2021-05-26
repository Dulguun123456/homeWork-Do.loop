#include<iostream>
using namespace std;
int main()
{
	long int num,rev;
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0; //0--9 numbers
	cout<<"Enter number: ";
	cin>>num;           //4564
	while(num>0){
		rev=num%10;     // re=4 take last digit.
		num=num/10;    // num=456 lost a last number. 
		switch(rev){
		case 0:
			a++;
			break;
		case 1:
			b++;
			break;
		case 2:
			c++;
			break;
		case 3:
			d++;
			break;
		case 4:
			e++;
			break;
		case 5:
			f++;
			break;
		case 6:
			g++;
			break;
		case 7:
			h++;
			break;
		case 8:
			i++;
			break;
		case 9:
			j++;
			break;
		default: 
			cout<<"Envalid number "<<endl;	
											
		}
	}
	cout<< "Frequence of 0="<<a<<endl;		
	cout<< "Frequence of 1="<<b<<endl;
	cout<< "Frequence of 2="<<c<<endl;
	cout<< "Frequence of 3="<<d<<endl;
	cout<< "Frequence of 4="<<e<<endl;
	cout<< "Frequence of 5="<<f<<endl;
	cout<< "Frequence of 6="<<g<<endl;
	cout<< "Frequence of 7="<<h<<endl;
	cout<< "Frequence of 8="<<i<<endl;
	cout<< "Frequence of 9="<<j<<endl;
	return 0;
}
