#include <iostream>
#include <string>
using namespace std;

#if 1  //thay doi so 1 thanh 0
			//	--> hàm stringIfStatements ko chạy
			//  --> hàm stringConditionalOperator sẽ chạy

void stringIfStatements()
{
	/*

	if (condition)    // nếu condition là true
		expression1;    // thực thi câu lệnh này
	else
		expression2;    // nếu condition là false, thực thi câu lệnh này

Hoặc:-------------------------------------------------

	if (condition)    // nếu condition là true
		x = value1;    // x = value 1
	else
		x = value2;    // nếu condition là false, x = value 2

	*/

	const string USERNAME("k");
	const string PASSWORD("m");
	string userName;
	string password;

	
	cout << "Enter username: ";
	getline(cin, userName);

	cout << "Enter password: ";
	getline(cin, password);

	if ((userName == USERNAME) && (password == PASSWORD))//co the sd toan tu dk
	{
		cout << "Login succeed!" << endl;//neu dung
	}
	else
	{
		cout << "Login failed!" << endl;//neu sai
	}
	
}

#else

void stringConditionalOperator()
{
	/*
	(condition) ? expression1 : expression2;

Hoặc:-------------------------------

	x = (condition) ? value1 : value2;
	*/

	const string USERNAME("k");
	const string PASSWORD("m");
	string userName;
	string password;

	cout << "Enter username: ";
	getline(cin, userName);

	cout << "Enter password: ";
	getline(cin, password);

#if 1
	((userName == USERNAME) && (password == PASSWORD)) ? (cout << "Login succeed!" << endl) : (cout << "Login failed!" << endl);
#else
	cout << (((userName == USERNAME) && (password == PASSWORD)) ? ("Login succeed!") : ("Login failed!"));
#endif
}

#endif

void switch_()
{
	int month;
	cout << "Month: ";
	cin >> month;

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		//int year = 2017;
			//Lỗi: không được phép khởi tạo biến 
				//khi vẫn còn case bên dưới. 

		int day;	//  có thể khai báo biến tại đây
		day = 30;	//  có thể gán giá trị cho biến
		cout << day << endl;
		break; // gặp break, dừng cả switch
	case 4:
	case 6: //trong trong hợp ko có case nào = 135..._>tiếp tục xét 46911
	case 9:
	case 11:
	{
		int year = 2017; //dc phép khởi tạo nếu ko còn case 
		//		có thể khởi tạo biến 
			//nếu sử dụng khối lệnh {}

		day = 31;	// có thể sử dụng biến ở những case bên dưới
		cout << day << endl;
		break;
	}
	default: //ko có case nào tương ứng-> thực thi default
		day = 28;
		cout << day << endl;
	}

}

int main7()
{
#if 1 //thay doi 1 thanh 0
			// nhớ thay đổi trên kia trước
	stringIfStatements();
#else	
	stringConditionalOperator()
#endif

		switch_();
	return 0;

}