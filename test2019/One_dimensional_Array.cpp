#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include <random> //random_device rd;	mt19937; uniform_int_distribution
#include <string>
#define MAX 1000

using namespace std;

void NhapMang(int MyArr[], int &Size);
//nSize se dc cap phat dinh nghia o ham nay luon
void XuatMang(int MyArr[], int Size);

void SaoChepMang(int ArrSource[], int ArrDes[], int Size);

void TimKiemPhanTuTrongMang(int MyArr[], int Size, int Location);

void SelectionSort(int MyArr[], int Size);

void Swap2(int &a, int &b);

void ThemPhanTu(int MyArr[], int& Size, int idx, int Number);

void XoaPhanTu(int MyArr[], int& Size, int idx);

int main10()
{
	int arr[MAX];
	int nSize;

	NhapMang(arr, nSize);
	//truyen tham chieu nSize
	//xuong duoi ko phai nhap them nSize
	XuatMang(arr, nSize);

	cout << "sao chep mang 1 chieu tu arr1 qua arr2:" << endl;

	int arr2[MAX];
	SaoChepMang(arr, arr2, nSize);
	XuatMang(arr2, nSize);

	cout << "----------tim kiem mang----------" << endl;
	
	int Find;
	cout << "nhap vao phan tu x can tim:";
	cin >> Find;

	TimKiemPhanTuTrongMang(arr, nSize, Find);
	

	cout << "sap xep mang theo tt tang dan:" << endl;

	SelectionSort(arr, nSize);
	XuatMang(arr, nSize);


	cout << "Them 1 phan tu vao mang:" << endl;
	cout << "Phan tu muon them:" << endl;
	int Add;
	cin >> Add;
	
	cout << "Vi tri muon them:" << endl;
	int idx;
	cin >> idx;
	ThemPhanTu(arr, nSize, idx, Add);
	XuatMang(arr, nSize);

	cout << "Vi tri muon xoa:" << endl;
	int Del;
	cin >> Del;
	XoaPhanTu(arr, nSize, Del);
	XuatMang(arr, nSize);
	return 0;
}


void NhapMang(int MyArr[], int& Size)
{
	random_device rd;
	mt19937 rng(rd());
	uniform_int_distribution<int> uni(1, 1000);

	cout << "nhap so phan tu:";

	cin >> Size;// nhap nSize
	//neu Size thay doi-> nSize thay doi theo

	for (int i = 0; i < Size; i++)
	{
		MyArr[i] = uni(rng);
	}
}

void XuatMang(int MyArr[], int Size)
{
	for (int i = 0; i < Size; i++)
	{
		cout <<"arr ["<< i<<"] : "<< MyArr[i] << endl;
	}
}


void SaoChepMang(int ArrSource[], int ArrDes[], int Size)
{
	for (int i = 0; i < Size; i++)
	{
		ArrDes[i] = ArrSource[i];
	}
}

void TimKiemPhanTuTrongMang(int MyArr[], int Size, int Location)
{
	int idx = NULL;
	for (int i = 0; i < Size; i++)
	{
		if (MyArr[i] == Location)
		{
			idx = i;
			break;
		}
		
	}
	if (idx != NULL)
		cout << "x nam tai vi tri thu " << idx << endl;
	else
		cout << "ko thay x!!! " << endl;

}

void Swap2(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void SelectionSort(int MyArr[], int Size)
{
	for (int i = 0; i < Size - 1;i++)
	{
		for (int j = i + 1; j < Size; j++)
		{
			if (MyArr[i] > MyArr[j])
				Swap2(MyArr[i] , MyArr[j]);
		}
	}
}


void ThemPhanTu(int MyArr[], int& Size, int idx, int Number)
{
	if (idx >= 0 && idx <= Size)
	{
		for (int i = Size; i > idx; i--)
		{
			MyArr[i] = MyArr[i - 1];
		}
		MyArr[idx] = Number;
		Size++;
	}
	else
		cout << "ko thay vi tri can them" << endl;
}

void XoaPhanTu(int MyArr[], int& Size, int idx)
{
	if (idx >= 0 && idx <= Size)
	{
		for (int i = idx; i < Size - 1; i++)
		{
			MyArr[i] = MyArr[i + 1];
		}
		
		Size--;
	}
	else
		cout << "ko thay vi tri can xoa" << endl;
}