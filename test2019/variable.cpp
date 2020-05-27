#include <iostream>
using namespace std;

void variable() {
	// Khai báo biến số nguyên nVarName
		// Giả sử nVarName được cấp vùng nhớ tại địa chỉ---0x0069---

	int nVarName;

	//Đây gọi là một câu lệnh khai báo, 
	//khi chương trình được chạy đến dòng lệnh này,
	//một vùng trong bộ nhớ RAM sẽ được cấp cho biến nVarName này.
	//Ví dụ trong trường hợp này,
	//biến nInterger được cấp một vùng nhớ tại địa chỉ ---0x0069--- trong RAM, 
	//vậy mỗi khi chương trình chạy đến dòng lệnh nào chứa biến nInterger,
	//chương trình sẽ vào vùng nhớ ---0x0069--- để lấy giá trị của nó.
	//
	//Sau khi một biến được khai báo,
	//bạn muốn biến nVarName có một giá trị để sử dụng
	//câu lệnh gán với toán tử gán = (assignment operator) sẽ làm việc đó.

		// Gán giá trị 96 cho vùng nhớ tại địa chỉ 0x0069

	nVarName = 96;

	//Khi chương trình chạy đến câu lệnh này,
	//vùng nhớ tại địa chỉ 0x0069 sẽ được gán giá trị 96.

		// In giá trị biến nVarName tại địa chỉ 0x0069 ra màn hình

	cout << nVarName << endl;


	// Khởi tạo sao chép giá trị cho biến với toán tử gán =

	int nVarName1 = 69;	// copy initialization

	cout << nVarName1 << endl;
	// Khởi tạo trực tiếp giá trị cho biến với dấu ngoặc đơn ()

	int nVarName2(69);// direct initialization

	cout << nVarName2 << endl;

}

#if 1
/*local variable*/

// Automatic duration
void doSomeThing() 
{
	int value(0); // automatic duration by default
	++value;
	cout << value << endl;
} // value is destroyed here


/*Static variable*/

// Static duration
void doSomeThing_static()
{
	// static duration via static keyword.  This line is only executed once.
	static int s_value(0);
	++s_value;
	cout << s_value << endl;
} // s_value is not destroyed here, but becomes inaccessible

#endif

#if 0

	/*Liên kết bên ngoài(external linkage) :
		Khai báo ở ngoài mọi hàm(biến toàn cục)*/
int g_value;
void doSomeThing()
{
}

	 /*Liên kết nội bộ(internal linkage) :
	 -Khai báo trong hàm với từ khóa static*/

void doSomeThing()
{
	static int s_value(0);
}

/*-Khai báo ngoài hàm với từ khóa static (biến toàn cục)*/

static int g_value;
void doSomeThing()
{
}


#endif

int generateID()
{
	static int s_id(0);
	++s_id;
	return s_id;
}

//muon su dung, doi ten main1,2,...->main
int main2()
{
	variable();
	
	cout << "local variable here:" << endl;
	// Local variables
	doSomeThing();
	doSomeThing();
	doSomeThing();

	cout << "static variable here:" << endl;

	// Static variables
	doSomeThing_static();
	doSomeThing_static();
	doSomeThing_static();

	cout << "ung dung tao id ko trung nhau:" << endl;

	int nID1 = generateID();
	string strName1("Kteam");

	int nID2 = generateID();
	string strName2("FreeEducation");

	int nID3 = generateID();
	string strName3("HowKteam.com");

	cout << nID1 << " : " + strName1 << endl;
	cout << nID2 << " : " + strName2 << endl;
	cout << nID3 << " : " + strName3 << endl;

	return 0;
}