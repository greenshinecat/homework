#includ<iostream.h>
void main()
{
	float r,pi,S,C;
	int K;
	cout<<"Please input r,K:";
	cin>>r>>K;
	pi=3.14159;
	s=pi*r*r;
	c=2*pi*r;
	switch(K)
	{
	case 1:cout<<"Բ�����Ϊ:"<<S<<endl;break;
	case 2:cout<<"Բ���ܳ�Ϊ:"<<C<<endl;break;
	case 3:cout<<"Բ�����Ϊ:"<<S<<endl
			   <<"Բ���ܳ�Ϊ:"<<C<<endl;break;
	}
}
	

