#include <iostream>
#include <string>
//(variable).length()
//(variable).size()
using namespace std;

void PrintTest()
{
	/* Khai báo một chuỗi ký tự */
	std::string strString;

	/* Khởi tạo một chuỗi theo nhiều cách */
	string strString0("");                 // Khởi tạo chuỗi strString0 rỗng
	string strString1("Kteam");            // Khởi tạo chuỗi "Kteam" cho strString1
	string strString2{ "Free Education!" }; // Khởi tạo chuỗi "Kteam" cho strString2
	string strString3 = "HowKteam.com";    // Khởi tạo chuỗi "HowKteam.com" cho strString3
	string strString4 = strString1;         // Gán giá trị chuỗi strString1 cho strString4

	/* Khởi tạo một chuỗi số */
	string strNumber = "88";         // Khởi tạo chuỗi "88" cho strNumber, không phải số
	
	cout << strString2 << endl;
}

void CinError()
{
	
	cout << "Enter your full name: ";
	string strName;
	cin >> strName;

	cout << "Enter your age: ";
	string strAge;
	cin >> strAge;

	cout << "Your name is " << strName << endl;
	cout << "Your age is " << strAge << endl;

 /*Trong chương trình trên, 
	 khi nhập chuỗi “Hello HowKteam.com! Free Education!” và nhấn enter,
	 chương trình đã bỏ qua lần nhập tiếp theo và xuất ra kết quả.

Chú ý: 
	Toán tử >> (extraction operator) được dùng chung với std::cin
	chỉ cho phép đọc một dãy gồm các ký tự liền nhau (không có khoảng trắng),
	nên nó sẽ trả về các ký tự đến khoảng trắng đầu tiên trong chuỗi vừa nhập.

Vì vậy, 
	chương trình có 2 lần yêu cầu nhập chuỗi, 
	nhưng khi bạn nhập một chuỗi có 3 khoảng trắng như trên,
	nó chỉ cho phép bạn nhập vào 1 lần.*/
}

void GetLineTest()
{
	/*Để đọc đầy đủ chuỗi có khoảng trắng
	từ đối tượng nhập của lớp iostream (ví dụ cin), 
	bạn nên sử dụng hàm std::getline() 
	(trong namespace std)*/

	
	cout << "Enter your full name: ";
	string strName;
	getline(cin, strName);

	cout << "Enter your age: ";
	string strAge;
	getline(cin, strAge);

	cout << "Your name is " << strName << endl;
	cout << "Your age is " << strAge << endl;


}


void Cin_GetLine()
{
	cout << "Enter your age: ";
	int nAge;
	cin >> nAge;

	cout << "Enter your name: ";
	string strName;
	getline(cin, strName);

	cout << "Hello, " << strName << endl;
	cout << "Your age " << nAge << endl;

/*Khi bạn nhập một thông tin bất kỳ,
	mọi ký tự bạn gõ vào bàn phím (kể cả ký tự Enter \n)
		đều được đẩy vào bộ nhớ đệm trước khi được gán vào biến.

Trong chương trình trên,
	bạn nhập số bằng std:: cin,
		chúng chỉ nhận số chứ không nhận được ký tự Enter (‘\n’),
			và ký tự Enter vẫn còn trong bộ nhớ đệm.

Đến khi nhập chuỗi,
	hàm std::getline() nhận được ký tự Enter từ bộ nhớ đệm
		thì kết thúc nhập và chương trình vẫn chạy tiếp.

Điều này khiến kết quả bị sai.*/

}

void Cin_Ignore()
{
	//có thể xóa ký tự Enter ‘\n’ sau khi sử dụng std::cin 
	//bằng cách sử dụng phương thức cin.ignore() thuộc namespace std:

	cout << "Enter your age: ";
	int nAge;
	cin >> nAge;

	// Xóa khỏi bộ nhớ đệm 32767 ký tự, hoặc đến khi gặp ký tự '\n'
	std::cin.ignore(32767, '\n');

	cout << "Enter your name: ";
	string strName;
	getline(cin, strName);

	cout << "Hello, " << strName << endl;
	cout << "Your age " << nAge << endl;
	
	//Chú ý: Nên xóa ký tự Enter ‘\n’ trong bộ nhớ đệm trước khi nhập chuỗi bất kỳ.
}

void endLine()
{
/*Mặc định, hàm std::getline() 
	sử dụng ký tự ‘\n’ khi nhấn phím Enter 
	là ký tự báo hiệu kết thúc việc nhập chuỗi.

Nếu muốn nhập nhiều dòng văn bản vào một biến string, 
	bạn có thể thay đổi nó,
	ví dụ:*/

	cout << "Enter your text: ";
    string strText;
    getline(cin, strText, '_');

    cout << "Your text: " << endl;
    cout << strText << endl;

//có thể nhập chuỗi ký tự 
	//cho đến khi chương trình nhận vào ký tự gạch dưới ‘_’. 
	//Kết quả nhận được là một chuỗi ký tự gồm nhiều dòng.


}

void StringLength()
{
	string myName("Hello HowKteam.com!");

	cout << myName << " has " << myName.length() << " characters\n";
	cout << myName << " has " << myName.size() << " characters\n";
}
int main5()
{
	
	return 0;
}