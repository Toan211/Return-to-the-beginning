#include <iostream>
#include <string>

using namespace std;

//------------------WHILE------------------------

void Infinite_Loops()
{
	while (1) // or while (true)
	{
		// vòng lặp này sẽ lặp mãi mãi

		// có thể thoát khỏi vòng lặp bằng cách:
		// return, break, exit(), goto, throw hoặc bạn tự tắt chương trình.
		break;
	}
}

void Loop_Variables() //Biến vòng lặp
{
	//Không sử dụng kiểu số nguyên không dấu (unsigned) 
		//cho các biến vòng lặp.
	unsigned int count = 10;

	// count from 10 down to 0
	while (count >= 0)
	{
		cout << count << " ";
		--count;
	}
	/*
	chương trình lặp vô hạn,in ra dãy số: “10 9... 4294967295 4294967294 …”.
		Biến kiểu dữ liệu unsigned int,
			->không có giá trị âm,
			->vòng lặp sẽ không bao giờ chấm dứt.
		Nếu giá trị của count = 0,
			giảm đi 1 sẽ tràn số, quay lại 4294967295,

	=>điều kiện lặp count >= 0 luôn luôn đúng.
	*/
}

void Nested_loops() //vòng lặp lồng nhau
{
	// Loop between 1 and 5
	int outer(1);
	while (outer <= 5)
	{
		// loop between 1 and outer
		int inner(1);
		while (inner <= outer)
		{
			cout << inner << " ";
			++inner;
		}

		// print a newline at the end of each row
		cout << "\n";
		++outer;
	}
}
	
//------------------DO WHILE----------------

const string ID("kteam");
const string PASSWORD("howkteam.com");

void stringWhile()
{
	string id;
	string password;

	do
	{
		system("cls"); //xóa màn hình mỗi lần lặp

		cout << "ID: ";
		getline(cin, id);

		cout << "Password: ";
		getline(cin, password);
	} while (id != ID || password != PASSWORD);

	cout << "Login succeed!" << endl;
	// do something
}

void SelectionWhile()
{
	int selection;

	do
	{
		system("cls");	// clear screen

		cout << "Please make a selection: \n";
		cout << "1) Addition\n";
		cout << "2) Subtraction\n";
		cout << "3) Multiplication\n";
		cout << "4) Division\n";
		cout << "Enter your selection: ";
		cin >> selection;

		if (cin.fail())// user didn't input a number
		{
			
			cin.clear(); // reset failbit
			cin.ignore(32767, '\n'); //skip bad input
		}
	} while (selection < 1 || selection > 4);

	// do something with selection here
	// such as a switch statement

	cout << "You selected option #" << selection << "\n";

}

//----------------------------For------------------------

void ManyFor()
{
	for (int i = 5, j = 10; i + j < 20; i++, j++)
	{
		cout << i << " + " << j << " = " << (i + j) << '\n';
	}
}

void NestedForLoops()
{
	for (int i = 0; i <= 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}

}

//-----------------Continue------------------------
/*
nhảy đến cuối vòng lặp hiện tại, 
và thực thi lần lặp tiếp theo.
*/
void Continue()
{
	for (int i = 0; i < 10; ++i)
	{
		// if the number is divisible by 4, skip this iteration
		if ((i % 2) == 0)
			continue; // jump to end of loop body

		// If the number is not divisible by 4, keep going
		cout << i << endl;

		// The continue statement jumps to here
	}
}

int main8()
{
//-----------------WHILE--------------------

	Infinite_Loops();

	Loop_Variables();

	Nested_loops();

//-----------------DO WHILE-------------------
	
//yêu cầu vòng lặp phải thực hiện ít nhất 1 lần
	stringWhile();

	SelectionWhile();

//---------------FOR---------------

	ManyFor();

	NestedForLoops();

	Continue();
	
	return 0;
}