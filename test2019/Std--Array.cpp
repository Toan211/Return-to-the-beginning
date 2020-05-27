#include <iostream>
#include <array>
#include <algorithm> // std::sort()

#define MAX 5

using namespace std;

void InputArr()
{
	array <int, 5> arr = { 2, 5, 8, 3, 1 };
	array <int, 5> arr2{ 2, 5, 8, 3, 1 }; // khởi tạo đồng nhất (C++11)

	array <int, 5> arr3;
	arr3 = { 2, 5, 8, 3, 1 }; // khởi tạo đầy đủ các phần tử
	arr3 = { 2, 5, 8 }; // khởi tạo 3 phần tử đầu, còn lại là 0

#if 0
	//Không khởi tạo nhiều giá trị hơn số lượng phần tử đã khai báo :
	array <int, 3> arr = { 2, 5, 8, 3, 1 }; // lỗi biên dịch
	
	//Không giống như khai báo mảng 1 chiều tĩnh, 
		//bạn không thể bỏ qua số lượng phần tử mảng khi khai báo :


	array <int, > arr = { 2, 5, 8, 3, 1 }; // lỗi biên dịch
#endif 
}

void CinArr()
{
	array <int, 5> arr = { 2, 5, 8, 3, 1 };
	arr[1] = 3; // gán 3 cho phần tử thứ 2
	cout << arr[4]; // truy xuất giá trị phần tử thứ 5
		
		//trên mảng 1 chiều tĩnh, 
		//toán tử[] không kiểm tra phạm vi mảng.
			//Truy cập 1 phần tử với chỉ số không hợp lệ 
				//==>cho kết quả không mong muốn(có thể gây chết chương trình).
	
	arr.at(1) = 3; // gán 3 cho phần tử thứ 2
	cout << arr.at(6); // ngoài phạm vi mảng, ném ra 1 lỗi và kết thúc chương trình
	
	//chắc chắn rằng chỉ số nằm trong phạm vi mảng 
		//mà không cần kiểm tra trong thời gian chạy, 
			//--> có thể sử dụng toán tử[]

	//toán tử[] không kiểm tra phạm vi của mảng, 
		 //nên hàm at() sẽ chậm hơn(nhưng an toàn hơn) so với toán tử[].

}

void SizeArr()
{
	array <int, 5> arr = { 2, 5, 8, 3, 1 };
	cout << arr.size() << endl;
}

void printArray(const array<int, MAX> &arr) // truyền tham chiếu (hằng) vì hiệu suất
{
	cout << "So phan tu: " << arr.size() << endl; // có thể biết số phần tử ở mọi hàm
	for (const auto& item : arr) // có thể sử dụng for-each loops ở mọi hàm
	{
		cout << item << ' ';
	}
	cout << endl;
}

void SortArr()
{
	array <int, MAX> arr = { 2, 5, 8, 3, 1 };

	cout << "Sap xep tang: \n";
	sort(arr.begin(), arr.end()); // sắp xếp tăng
	printArray(arr);

	cout << "Sap xep giam: \n";
	sort(arr.rbegin(), arr.rend()); // sắp xếp giảm
	printArray(arr);

}

//14
int main14()
{
	array <int, MAX> arr = { 2, 5, 8, 3, 1 };
	printArray(arr);

	SortArr();

	return 0;
}