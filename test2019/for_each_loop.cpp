#include <iostream>

using namespace std;

//For - each loop được sử dụng 
	//để lặp qua các phần tử trên 1 mảng
	//(hoặc các cấu trúc danh sách khác 
		//như vectors, linked lists, trees, và maps).

void ForEach()
{
	int arr[] = { 14, 3, 6, 27, 12 };
	for (const int &item : arr)// nen sd tham chieu cho ehhh...nhanh hon? cho do loi:v
	//co the sd
	//for (auto &item: arr) // compiler tự dộng xác định kiểu cho item
	{
		// biến item đại diện cho phần tử mảng ở mỗi vòng lặp
		cout << item << " ";
		//lay tung phan tu mang gan vao bien item
		//bien item dai dien cho arr, ko phai chi so i
	}
	cout << endl;
}
//ko can idex (i, j = 0 gi do)
#if 0
void printArray(int arr[])
{
	for (const auto& item : arr) // lỗi biên dịch vì arr chỉ là 1 con trỏ
	{
		cout << item << " ";
	}
}
#endif
//forEach ko lam viec voi con tro toi mang  

int main13()
{
	ForEach();

	int arr[3] = {10,201,20};
#if 0
	printArray(arr);
#endif

	return 0;
}
