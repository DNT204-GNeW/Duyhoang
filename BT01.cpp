#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

// DINH NHUT TUNG


int main()
{ 
	float a,b,c,p,chuvi,s;
	cout << "nhap gia tri canh a:" << endl;
	cin>>a;
	cout<<"nhap gia tri canh b:"<< endl;
	cin>>b;
	cout<<"nhap gia tri canh c:"<< endl;
	cin>>c;
	if ( a > 0 && b > 0 && c > 0)
	{
		if(abs(a-c) < b && (a+c) > b )
		{
			cout<<"tam giac hop le:";
			}
			else
			{
				cout<<"khong tao thanh tam giac:";
				}
				
	}
	else
	{ cout<<"nhap lai nhe va khong nhap gia tri am:";

}
    chuvi=a+b+c;
	p =chuvi/2;
	s= sqrt(p*(p-a)*(p-b)*(p-c));
cout<<"chu vi= "<< chuvi << endl;
cout << "dien tich =" << s << endl;
return 0;
}





