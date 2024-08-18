#include<iostream>
#include<math.h>
#include<stdio.h>
 using namespace std;


// DINH NHUT TUNG

 int main()
 { 
 int n,sum=0,i;
 cout<<"hay nhap gia tri n:";
 cin>>n;
 for ( int i=1; i<n; i++)
 {
 	if(n % i ==0)
 	{
 		sum=sum+i;
	 }
}
	 if(sum==n)
	 {
	 	cout << n <<" la so hoan hao:";
	 	
	 }else
	 {
	 	cout << n <<"khong la so hoan hao:";
	 	
	 }
	 return 0;
 }

