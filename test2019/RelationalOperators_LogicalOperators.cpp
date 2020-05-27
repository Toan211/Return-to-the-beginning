
#include <iostream>
//for std::Cout<< and std::cin>>
#include <iomanip>
// for std::setw(n), std::setfill(ch), std::left, std::right
// for std::hex, std::oct, std::dec
// for std::setprecision

//Relational Operators la toan tu quan he

//Logical operators la toan tu logic

using namespace std;

void RelationalFloatingPoint()
{
	//so sanh 2 dau cham dong:
	/*Trong lập trình, việc so sánh trực tiếp 2 số chấm động
		là điều không nên và có thể cho ra
		những kết quả không mong muốn.
		Đó là do lỗi làm tròn của số chấm động*/

	double	d1{ 1.0 };
	double	d2{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };

	if (d1 == d2)
		cout << "d1 == d2" << "\n";
	else if (d1 > d2)
		cout << "d1 > d2" << "\n";
	else if (d1 < d2)
		cout << "d1 < d2" << "\n";

	cout << std::setprecision(20);	// show 20 digits
	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl;

}

void LogicalOperators()
{
	cout << "Enter a number: ";
	int value;
	cin >> value;

	if (!value)
		cout << value << " is false" << endl;
	else
		cout << value << " is true" << endl;

	if ((value > 1) && (value < 100))
		cout << value << " is between 1 and 100" << endl;
	else
		cout << value << " is not between 1 and 100" << endl;

	if ((value == 1) || (value == 100))
		cout << value << " == 1 or " << value << " == 100" << endl;
	else
		cout << value << " != 1 or " << value << " != 100" << endl;

}

int main4()
{
	RelationalFloatingPoint();
	cout << "\n";
	LogicalOperators();
	return 0;
}