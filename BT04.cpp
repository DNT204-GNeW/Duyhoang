#include<iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>	
#include <iostream>
#include <math.h>
#include <stdbool.h>

// DINH NHUT TUNG _


using namespace std;
void NhapMang(int a[], int &n);
void XuatMang(int a[], int n);
int Timkiemnhiphan(int a[],int n, int x);
void HoanDoi(int &x, int &y);
void Tuyentinh(int a[], int n, int x);
void BubbleSort(int a[], int n);

void NhapMang(int a[], int &n) 
{
	cout<< "Nhap danh sach cac phan tu: \n";
	cout<<"->Nhap so luong phan tu: ";
	cin>> n;

	while(n<=0) {
		cout <<"-> Nhap lai so duong: ";
		cin >> n;
	}

	for(int i=0; i<=(n-1); i++) {
		cout<<"-Nhap phan tu thu "<< i+1 <<":";
		cin>>a[i];
	}
}

void XuatMang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout << a[i] << " ";
	}
	cout<<"\n";
}

void HoanDoi(int &x, int &y)
{
	int tam = x; 
	x = y; 
	y = tam;
}


int main()
{
	int a[100], n;
	cout<<"nhap Mang : \n";
	NhapMang(a,n);
	cout<<"\n Mang A vua nhap : \n";
	XuatMang(a,n);
	int x;
	cout<<"Nhap phan tu can tim: "; 
	cin>>x;
	cout<<"\nKet qua tim kiem:";
	Tuyentinh(a,n,x);
	//cout<<"Nhap phan tu can tim: "; cin>>x;
	//cout<<"\nKet qua tim kiem nhi phan :";
	Timkiemnhiphan(a,n,x);
	//cout<<"\nThuc hien sap xep lai:";
	BubbleSort(a,n);
	cout<<"\nMang sau khi sap xep\n";
	XuatMang(a,n);
	getch();
	return 1;
}

int Timkiemnhiphan (int a[], int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n - 1;
    do {
        mid = (left + right) / 2;
        if (a[mid] == x) {
            return mid;
        } else if (a[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    } while (left <= right);
    return -1;
}

void Tuyentinh(int a[], int n, int x)
{ 
	int i, flag = 0; 
	for(i=0;i<n;i++)
	 	if( a[i] == x) 
		{  

		cout << "\nGia tri " << x << " o vi tri " << i+1 << " trong mang" << endl;

			flag =1; 
			break; 
		} 
	
	if( flag == 0) 
		cout<<"\n khong tim thay gia tri"<<x<<" trong mang";  
} 

void BubbleSort(int a[], int n)
{ 	
	int i,j;
	for(i=0; i<n-1; i++ ){	
		for(j=n-1 ; j>i ; j--){
			if (a[j] < a[j-1])
			HoanDoi(a[j],a[j-1]);
		}
	}
}
