#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include <random> //random_device rd;	mt19937; uniform_int_distribution
#include <string>

#define ROW 5

#define COL 10

using namespace std;

void NhapMang2Chieu(int Arr[][COL], int &Col, int &Row );

void XuatMang2Chieu(int Arr[][COL], int Col, int Row);

int TongDong(int Arr[][COL], int Col, int Row, int& FRow);

int TongCot(int Arr[][COL], int Col, int Row, int& FCol);

/*
void SelectionSort(int MyArr[][COL], int Col, int Row);

void Swap3(int& a, int& b);
*/ 
//will update in the future

int timMax(int mt[][COL], int Row, int Col);


int main11()
{
	int a[ROW][COL];
	int nCol, nRow;

	NhapMang2Chieu(a, nRow, nCol);

	XuatMang2Chieu(a, nRow, nCol);
	
	//dao ma tran--xoay ma tran--tinh dg cheo chinh--phu
 



	/*
	int FindRow, RowSum, T;
	bool Tinh = true;
	do
	{
		RowSum = TongDong(a, nCol, nRow, FindRow);
		cout << "tong dong thu " << FindRow << " la: " << RowSum << endl;

		cout << "co tinh nua ko? \n1:co \n0:khong " << endl;
		cin >> T;
		if (T == 1)
			Tinh = true;
		else
			Tinh = false;
		
	} while (Tinh == true);


	int FindCol, ColSum, T2;
	bool Tinh2 = true;
	do
	{
		ColSum = TongCot(a, nCol, nRow, FindCol);
		cout << "tong cot thu " << FindCol << " la: " << ColSum << endl;

		cout << "co tinh nua ko? \n1:co \n0:khong " << endl;
		cin >> T2;
		if (T2 == 1)
			Tinh2 = true;
		else
			Tinh2 = false;

	} while (Tinh2 == true);

	*/

	return 0;

}


void NhapMang2Chieu(int Arr[][COL], int& Row, int& Col)
{
	cout << "nhap so dong:";
	cin >> Row;
	cout << "nhap so cot:";
	cin >> Col;

	random_device rd;
	mt19937 rng(rd());
	uniform_int_distribution<int>uni(1, 100);
	
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			//cout << "a[" << i << "][" << j << "]:";
			//cin >> Arr[i][j];
			Arr[i][j]= uni(rng);
		}
	}

}

void XuatMang2Chieu(int Arr[][COL], int Row, int Col)
{
	cout << endl;
	for (int i = 0; i < Row; i++)
	{
		cout << "dong " << i << ": ";
		for (int j = 0; j < Col; j++)
		{
			cout<< Arr[i][j]<<"\t";
		}
		cout << endl;
	}
}

int TongDong(int Arr[][COL], int Col, int Row, int &FRow)
{
	int SumRow=0;
	cout << "nhap dong can tinh: ";
	cin >> FRow;

	while (FRow < 0 || FRow >= Row)
	{
		cout << "ko thay dong can tinh" << endl;
		cout << "nhap lai dong can tinh: ";
		cin >> FRow;
	}

		for (int j = 0; j < Col; j++)
		{
			SumRow += Arr[FRow][j];
		}
	
		
	return SumRow;
}

int TongCot(int Arr[][COL], int Col, int Row, int &FCol)
{
	int SumCol = 0;
	cout << "nhap cot can tinh: ";
	cin >> FCol	;

	while (FCol < 0 || FCol >= Col)
	{
		cout << "ko thay cot can tinh" << endl;
		cout << "nhap lai cot can tinh: ";
		cin >> FCol;
	}

	for (int i = 0; i < Row; i++)
	{
		SumCol += Arr[i][FCol];
	}
	
	return SumCol;

}

/*
void Swap3(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void SelectionSort(int MyArr[][COL], int Col, int Row)
{
	//col = cot
	//row = dong
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			for (int j2 = 0; j2 < j; j2++)
			{
				if (MyArr[i][j] > MyArr[j][j2])
					Swap3(MyArr[i][j], MyArr[j][j2]);
			}


		}
	}
}
*/

int timMax(int mt[][COL], int Row, int Col)
{
	int i, j, max;
	max = mt[0][0];
	for (i = 0; i < Row; i++)
		for (j = 0; j < Col; j++)
			if (mt[i][j] > max)
				max = mt[i][j];
	return max;
}

