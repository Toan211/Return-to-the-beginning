// test2019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//for std::Cout<< and std::cin>>
#include <iomanip>
// for std::setw(n), std::setfill(ch), std::left, std::right
// for std::hex, std::oct, std::dec
// for std::setprecision

using namespace std;


void character() {
	
	int n{ 75 };
	cout << static_cast<char>(n) << endl; // in ký tự với mã ASCII 75

	char ch{ 'K' };
	cout << static_cast<int>(ch) << endl; // in mã ASCII của ký tự 'K'

	/*Chương trình trên sử dụng kỹ thuật ép kiểu static cast trong C++
	để in một ký tự từ một số nguyên và ngược lại.
	Cú pháp ép kiểu static cast:

	--------static_cast<Type - id>(expression)

	Lệnh static cast sẽ chuyển đổi giá trị của expression
	thành một giá trị có kiểu Type - id(char, int, double, …),
	và trả về giá trị đó.

		Chú ý 1: Bản thân expression
		sẽ không bị ảnh hưởng sau khi ép kiểu
		(n vẫn là 75, ch vẫn là ‘K’).

		Chú ý 2 : Khi bạn ép kiểu từ int sang char,
		nếu giá trị int của bạn lớn hơn giới hạn kiểu char,
		vấn đề tràn số sẽ xảy ra.
	*/
}

void ErrorFloatPoint() {

	double d1{ 1.0 };
    cout << d1<<endl;
    
    double d2(0.8);
    cout << d2<<endl;

    double d3{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };
    cout << d3<<endl;

    double d4(0.1 + 0.7);
    cout << d4<<endl;

    cout << std::setprecision(20);
    cout << d1 << endl << d3 << endl << d2 << endl << d4 << endl;

    cout << " loi lam tron so cham dong.\n";
    

}

void DinhDangDLvsIoManIP()
{
	/*Toán tử std::setw(n) :
		xác định độ rộng dành cho của dữ liệu xuất.
		Khi sử dụng std::setw(n),
		các khoảng trắng sẽ được thêm vào bên trái hoặc bên phải dữ liệu xuất
		(để tổng số ký tự là n).
		Dữ liệu khi in ra sẽ được canh trái hoặc canh phải.

	Toán tử std::left và std::right 
		dùng chung với std::setw(n) để canh lề trái hoặc lề phải.

	Toán tử std::setfill(ch) dùng chung với std::setw(n) 
		để quy định ký tự ch được thêm vào
		thay vì dùng khoảng trắng mặc định.
		Ví dụ : nếu dùng std::setfill(‘ - ’) 
		thì dấu ‘ - ‘ sẽ được thay cho khoảng trắng.*/

	cout << "Kteam Solutions and Entertainment" << endl;
	cout << "HowKteam.com" << endl << endl;

	cout << setw(5) << left << "ID";		// độ rộng 5 ký tự, canh trái ID
	cout << setw(30) << left << "Name";	// độ rộng 30 ký tự, canh trái Name
	cout << setw(20) << right << "Address" << endl;	// độ rộng 20 ký tự, canh phải Address

	cout << setfill('-');		// set fill bằng ký tự '-' thay vì ' '
	cout << setw(55) << "-" << endl;	// fill 55 ký tự '-'

	// reset fill bằng ký tự ' '
	cout << setfill(' ');

	// in thông tin theo format như trên
	cout << setw(5) << left << 1;
	cout << setw(30) << left << "Nguyen Doan Ngoc Giau";
	cout << setw(20) << right << "Sai Gon" << endl;

	cout << setw(5) << left << 2;
	cout << setw(30) << left << "Tran Kim Long";
	cout << setw(20) << right << "Da Lat" << endl;

	cout << setw(5) << left << 3;
	cout << setw(30) << left << "Nguyen Son Tung";
	cout << setw(20) << right << "Dong Nai" << endl;

	/*Các toán tử std::dec(thập phân),
		std::oct(bát phân), 
		std::hex(thập lục phân) 
		quy định số nguyên khi nhập xuất theo dạng thập phân, 
		bát phân, hay thập lục phân.*/
	
	int n;
	cout << "Enter n (hexadecimal): ";
	cin >> hex >> n;	// nhập số thập lục phân (hệ 16)

	cout << "Octal: " << oct << n << endl;	// xuất số bát phân (hệ 8)
	cout << "Decimal: " << dec << n << endl;	// xuất số thập phân (hệ 10)

	//Toán tử std::setprecision(n) quy định độ chính xác khi in số thực, 
	//n là tổng các chữ số khi in
}

void printYearOfBirth(const int nYear)
{
	/*Hằng số có thể sử dụng làm một tham số hàm(function paramater).
	Cách này được sử dụng phổ biến và khá hữu ích.
	Cách sử dụng này nhằm 2 mục đích :

		Giúp lập trình viên biết được 
			các tham số hằng sẽ không bị thay đổi giá trị sau lời gọi hàm.
		Đảm bảo các tham số hằng	
			sẽ không bị thay đổi giá trị bên trong hàm*/
	
	cout << "Year of birth: " << nYear << endl;

}

int main1()
{	
	printYearOfBirth(20);
	
	
	
	character();
	cout << "Hello World!\n";

	
	
	const int what{ 20 };
	cout << what << endl;
	
	  
	return 0;
}

