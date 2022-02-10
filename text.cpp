#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	string z,y;
	double a,b,x,h,g,i,k,l,q,w;
	cout<<"enter 2 floating number\n";
	cin>>a>>b;
	x=a+b;
	h =min(a,b);g=max(a,b); i=floor(x);k=ceil(x);l=round(x);q=pow(a,3);w=sqrt(pow(a,2));

	cout<<x<<" "<<h<<" "<<g<<" "<<i<<" "<<k<<" "<<l<<" "<<q<<" "<<w<<endl;
    cout<<"my name is eddy\n";
	cout<<"what is your fullname ?";
cin>>z>>y;
cout<<"hey nice to meet you "<<z<<" "<<y<<endl;
	return(0);
}