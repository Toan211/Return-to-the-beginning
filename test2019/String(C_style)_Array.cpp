#include <iostream>
#include <cstring>

#define MAX 10
using namespace std;


void CinC_StyleArr()
{
	char sz[MAX];
	//char sz[MAX] = {"asassa"} nhay kep
	//char sz[MAX] = {'a','c','v','a','f','e','d','a'} //nhay don
	cin.getline(sz, 10);
	//cin >> sz; 
		//neu xai, no gap khoang trang ' ' se dung.
		// de bi tran mang (nhap qua MAX ky tu)
}	

void Length()
{
	char szTeam[20] = "Klm04"; // mảng có 20 phần tử (5 ký tự thường, 15 ký tự '\0')
	cout << "Team cua tui: " << szTeam << endl;
	cout << szTeam << " co " << strlen(szTeam) << " ky tu." << endl;
	//strlen() in ra số ký tự trước ký tự ‘\0’ null,

	cout << szTeam << " co " << sizeof(szTeam) << " phan tu trong mang." << endl;
	// sizeof() trả về kích thước của toàn bộ mảng.
}

void Up_Low()
{
	char szString1[] = "HELLO ";
	char szString2[] = "Hello";

	cout << "s1: " << szString1 << endl;
	cout << "s2: " << szString2 << endl;
	//cảnh báo sử dụng hàm strlwr() và strupr(),
	//yêu cầu thêm  #define _CRT_NONSTDC_NO_DEPRECATE
	_strlwr_s(szString1);
	_strupr_s(szString2);
	//sử dụng 2 hàm _strlwr_s() và _strupr_s() để thay thế
	cout << "s1: " << szString1 << endl;
	cout << "s2: " << szString2 << endl;
}

void Copy()
{
	//
#if 0 
	char szSource[] = "Kteam";
	char szDest[20];

	// sao chép chuỗi szSource sang chuỗi szDest
	strcpy(szDest, szSource);
	cout << "Source: " << szSource << endl;
	cout << "Dest: " << szDest << endl;
	//chuỗi đích phải đủ lớn để chứa được chuỗi nguồn.
	//Nếu không, vấn đề tràn mảng sẽ xảy ra.

	//Một số compiler hiện đại cảnh báo việc sử dụng hàm strcpy()không an toàn
	//yêu cầu thêm lệnh #define _CRT_SECURE_NO_WARNINGS vào đầu chương trình 
	//để có thể sử dụng hàm strcpy().
#endif
	char szSource[] = "Howkteam.com";
	char szDest[5];

	// sao chép chuỗi szSource sang chuỗi szDest
	strcpy_s(szDest, 5, szSource); //không đủ lớn->1 assert được ném ra trong debug mode

	//thêm 1 tham số cho phép xác định độ dài của chuỗi đích
	cout << "Source: " << szSource << endl;
	cout << "Dest: " << szDest << endl;
}

void Compare()
{	/*
		return < 0 nếu : s1 <  s2
		return == 0 nếu: s1 == s2
		return > 0 nếu : s1 >  s2
	*/
		
	char szString1[] = "howkteam.com!";
	char szString2[] = "Howkteam.com!";

	cout << "s1: " << szString1 << endl;
	cout << "s2: " << szString2 << endl;

	// so sánh 2 chuỗi
	int result = strcmp(szString1, szString2);
	if (result < 0)
		cout << "s1 < s2" << endl;
	else if (result > 0)
		cout << "s1 > s2" << endl;
	else
		cout << "s1 == s2" << endl;
}

void Find()
{
	char szString1[] = "Hello Howkteam.com!";
	char szString2[] = "kteam";

	cout << "s1: " << szString1 << endl;
	cout << "s2: " << szString2 << endl;

		// Nếu tìm thấy : trả về con trỏ đến vị trí xuất hiện đầu tiên 
				//của chuỗi s2 trong chuỗi s1.
		//Nếu không tìm thấy : trả về NULL.
	if (strstr(szString1, szString2) != NULL)
		cout << "Tim thay " << szString2 << " trong " << szString1 << endl;
	else
		cout << "Khong tim thay!" << endl;
}

//12
int main12()
{
	

	return 0;
}