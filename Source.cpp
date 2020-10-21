int main()
{
srand(time(NULL));

int a=rand()% 101 ;
cout<<"\n So thu 1 la :"<<a;
int b=rand()% 101 ;
cout<<"\n So thu 2 la :"<<b;
int n;
cout<<"\nMoi ban nhap kq hieu 2 so";
cin>>n;
if(n==a-b)
{
	cout<<"Ban da Nhap dung";
}
else
{
	cout<<"Ban Nhap Sai!"<<"\nKq dung la :"<<a-b;
}
cout<<"\nMoi ban nhap kq tong 2 so";
cin>>n;
if(n==a+b)
{
	cout<<"Ban da Nhap dung";
}
else
{
	cout<<"Ban Nhap Sai!"<<"\nKq dung la :"<<a+b;
}

return 0;
}