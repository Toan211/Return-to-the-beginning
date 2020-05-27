#include <iostream>

using namespace std;
//15

//Toán tử địa chỉ (&): address-of operator
void BasicAddress() 
{
	int x = 10;
	cout << x << '\n'; // print the value of variable x
	cout << &x << '\n'; // print the memory address of variable x
	//memory on Ram
	cout << &x << '\n';
}

//Toán tử trỏ đến (*): dereference operator
void Dereference_Operator() 
{
	int x = 10;
	cout << x << '\n'; // print the value of variable x
	cout << &x << '\n'; // print the memory address of variable x
	cout << *&x << '\n'; /// print the value at the memory address of variable x

	*&x = 20;
	cout << x << '\n'; // print the value of variable x
}

void Pointer1()
{
	int x = 10;
	int* iPt = &x; //con trỏ trỏ đến d chỉ 

	cout << x << endl;  //    biến x: 10
	cout << &x << endl; //   d chỉ x: 003456...
	cout << iPt << endl; //  i =  &x: 003456...
	cout << *iPt << endl;// *i = *&x: g trị tại d chỉ 003456--> = 10
	cout << &iPt;		 // &i = &&x: 01234... != &x

	*iPt = 100; //--> *&x = 100, g trị x sẽ thay đổi từ 10->100

}

//Truy cập vào vùng nhớ mà con trỏ trỏ đến(Dereferencing pointers)
void Pointer2()
{
	int value = 10;
	cout << &value << "\n"; // in địa chỉ biến value
	cout << value << "\n"; // in giá trị biến value

	int* ptr = &value; // ptr trỏ đến biến value

	cout << ptr << "\n"; // in địa chỉ con trỏ ptr trỏ đến, tương đương &value
	cout << *ptr << "\n"; // in giá trị tại địa chỉ mà ptr trỏ đến , tương đương value
}

//Sau khi được gán, giá trị con trỏ có thể được gán lại cho một giá trị khác :
void Pointer3()
{
	int value1 = 5;
	int value2 = 7;

	int* ptr;

	ptr = &value1; // ptr points to value1
	cout << *ptr << "\n"; // prints 5

	ptr = &value2; // ptr now points to value2
	cout << *ptr << "\n"; // prints 7
}

/*
Chú ý : Khi &value được gán cho *ptr :

	ptr == & value
	* ptr == value
	Vì* ptr == value, 
			--> có thể gán giá trị cho* ptr như 1 biến thông thường :
*/
void Pointer4()
{
	int value = 5;
	int* ptr = &value; // ptr points to value

	*ptr = 7; // *ptr tương đương với value
	cout << value; // prints 7
}

void PointerType()
{
	int iValue = 5;
	cout << typeid(&iValue).name() << "\n";
}

/*
Khi truy cập vào một con trỏ, 
	ứng dụng sẽ đến vị trí bộ nhớ được lưu trữ trong con trỏ 
		và truy xuất nội dung của bộ nhớ.
Vì lý do bảo mật,
	nếu một ứng dụng cố gắng truy cập vào một vị trí bộ nhớ 
			không được hệ điều hành phân bổ, 
				hệ điều hành có thể tắt ứng dụng.

Chú ý : Nếu truy xuất giá trị của con trỏ 
			khi nó chưa gán địa chỉ cụ thể, 
		Chương trình có thể bị đóng bởi hệ điều hành.
*/
//Truy cập con trỏ không hợp lệ :
void foo(int*& p)
{
	// p là tham chiếu đến con trỏ (sẽ được đề cập ở những bài sau)
	// Hàm này dùng để đánh lừa compiler rằng con trỏ p đã bị thay đổi
	// Mục đích là để chương trình được biên dịch thành công
}


int main()
{
#if 0
	int* p;
	
	cout << *p; // thông báo lỗi luôn khi build

#endif

#if 0

	int* p; // Khai báo 1 con trỏ mang giá trị rác
	foo(p); // Đánh lừa compiler rằng con trỏ p đã được gán

	cout << *p; // In ra giá trị tại địa chỉ rác
					//vẫn build(biên dịch) dc, ra console luôn nhung bị hdh đuổi vì...
#endif



	//system("pause"); //press any key to continue
	return 0;
}