#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

// DINH NHUT TUNG

int main()
{
	int n;
	cout << "hay nhap so nguyen n:";
	cin >> n;
	if ( n <= 0)
	{
		cout << "gia tri khong hop le nha: ^.^";
		
}
else
{
	int sum = 0;
	for ( int i =n; i > 0; i /=10)
	{
		sum += i % 10;
		}
		cout << sum << endl;
		}
		}
		

