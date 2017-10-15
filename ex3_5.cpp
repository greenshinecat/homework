#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,d,s,S;
	cout<<"输入三角形三边长:";
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	s=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"三角形面积为:"<<S<<endl;
}
