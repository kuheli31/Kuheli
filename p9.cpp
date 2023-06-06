#include<iostream>
using namespace std;
int main()
{
	int l,b,a=0,p=0;
	cout<<"Length";
	cin>>l;
	cout<<"Breadth";
	cin>>b;
	a=l*b;
	cout<<"Area"<<a<<endl;
	p=2*(l+b);
	cout<<"Perimeter"<<p;
	return 0;
}
