
#include <iostream>

using namespace std;

void TestTT2NgoiChamDong()
{
	int x = 9;
	int y = 6;

	cout << "int % int = " << x % y << "\n";
	cout << "int / int = " << x / y << "\n";
	cout << "double / int = " << (1.0 * x) / y << "\n";
	cout << "int / double = " << x / (1.0 * y) << "\n";
	cout << "double / double = " << (1.0 * x) / (1.0 * y) << "\n";
	cout << "double / int = " << static_cast<double>(x) / y << "\n";
	cout << "int / double = " << x / static_cast<double>(y) << "\n";
	cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << "\n";

}

void TestChiaLayDu()
{
	// count holds the current number to print
	int count = 1; // start at 1

	// Loop continually until we pass number 100
	while (count <= 100)
	{
		// if count is evenly divisible by 10, print a new line
		if (count % 2 == 0)
			cout << count << "\t"; // print the current number

		// if count is evenly divisible by 20, print a new line
		if (count % 10 == 0)
			cout << "\n";

		count = count + 1; // go to next number
	} // end of while
}

void Prefix()
{
		/*tăng hoặc giảm giá trị của biến x, 
		sau đó x được sử dụng để tính toán.*/

	int x = 69;
	int y = ++x;	// x is now equal to 70, and 70 is assigned to y

	cout << x << endl;	// x = 70
	cout << y << endl;	// y = 70
	
}

void Postfix()
{
		//sử dụng x để tính toán,
		//sau đó tăng hoặc giảm giá trị của biến x.
		//	Đối với trường hợp này,
		//	performance sẽ giảm vì compiler phải thực hiện nhiều hơn.
		//	Đầu tiên, compiler sẽ tạo một bản sao của x, 
		//	sau đó biến x được tăng hoặc giảm, 
		//	mọi tính toán trong biểu thức sẽ sử dụng giá trị của bản sao 
		//	và bản sao sẽ được xóa sau khi sử dụng.

	int x = 69;
	int y = x++;	// x is now equal to 70, and 69 is assigned to y

	cout << x << endl;	// x = 70
	cout << y << endl;	// y = 69
	
}
#if 1
int sum(int a, int b)
{
	
	return a+b;
	
}

#endif
void TTGanSoHoc()
{
	//Arithmetic assignment operators

	int x = 9;
	int y = 9;

	x = x + 6; // x += 6
	cout << "x = x + 6 = " << x << endl;

	y += 6; // y = y + 6
	cout << "y += 6 = " << x << endl;

	int z = sum(x, y);
	cout << "Sum of x and y is " << z << endl;
}

int main3()
{
	TTGanSoHoc();
	return 0;
}