
 #include <iostream>

using namespace std;


void hello()
{
	cout << "Heloo lol :v"<<endl;
	//o day ko co return vi la ham void
	//ko co tham so/gia tri tra ve

}

void hi()
{
	hello();
	cout << "hi there lol :v"<<endl;
	//also, co the chong cheo len nhau ntn cung dc
}


#if 1
int return69()
{
	return 69;
	//tra ve so 69 (hay noi thang la cho ham nay =69 lol)
	//ham int kieu co gia tri tra ve
}
#endif

/*de su dung 2 retun, phai--- 
				            truyen tham chieu
					        truyen dia chi   */
#if 0
int return70( int x)
{
	return 70;
	return 71;
	//ham nay se ko thuc thi vi ko ho tro 2 return
	//also, duoi <return> cung ko dc thuc thi
}

#endif


int parameter(int x, int y)
{
	// int x, int y la tham so truyen vao ham (parameter)
	return x + y;
}
//day la phuong phap truyen gia tri cho ham
//nhuoc diem: chi co the return 1 gtri
//blabla

void OutputTestPara()
{
	hi();
	/*

	Neu xai
	cout << hi();
		==> bao loi vi ko the su dung void vs cout
	*/

	//**********************************************************************************

	cout << "Test Para::" << parameter(2, 6) << endl;
	//2,6 la doi so (argument),
	//la gtri truyen vao ham thong qua loi goi ham parameter

}

//_________________________________________________________________________

//khac phuc nhuoc diem truyen giá tri-->truyen tham chieu
void callByReferences(int& yRef)	// y is a reference variable
									//y la bien tham chieu

			//bien yRef la tham chieu cho bien doi so xRef
				//thay doi bien yRef trong ham-->thay doi bien xRef
{

	cout << "y1 = " << yRef << endl;

	yRef = 69;

	cout << "y2 = " << yRef << endl;
}	// luu y: khi truyen tham chieu, doi so phai la 1 bien

void OutputReferences()
{
	//test ham tham chieu
	cout << "\nTest ham tham chieu::" << "\n" << endl;

	int xRef = 1;

	cout << "xRef_1 = " << xRef << endl;

	callByReferences(xRef); // luu y: khi truyen tham chieu, doi so phai la 1 bien

		//thay doi bien yRef trong ham-->thay doi bien xRef
			//bien xRef va yRef se cung nam giu vung nho tren bo nho Ram


	cout << "xRef_2 = " << xRef << endl;
	//Xref != 1
		//du cho co thoat khoi ham, bien xRef van thay doi gtri thanh yRef

	cout << "\t===> Gia tri doi so se thay doi sau loi goi ham:v\n" << endl;

	cout << "\nsu khac biet giua Para va Ref::" << endl;
}


//su khac biet::*****************************

void callByParameters(int yPara)	// y is a parameter
									//y la tham so
{
	cout << "y1 = " << yPara << endl;

	yPara = 69;

	cout << "y2 = " << yPara << endl;

	
}	// y is destroyed here

void OutputParameters()
{
	int xPara = 1; 

	cout << "xPara_1 = " << xPara << endl;

	callByParameters(xPara);

	cout << "xPara_2 = " << xPara << endl;
	//Xref = 1
		//thoat khoi ham, bien xRef ko thay doi gtri thanh yRef

	cout << "\t===> Gia tri doi so ko thay doi\n" << endl;
}


//________________________________________________________________________

void Calculator(int x, int y, int& addOut, int& subOut)
//nguyen tac tham chieu dau ra: nen dat "out" phia sau ten bien
{
	addOut = x + y;
	subOut = x - y;
	//ko can return addOut, SubOut
}

void OutputCaculator()
{

	int a(6), b(9);
	int add, sub;

	//bang cach nao do, truyen tham chieu kha giong vs ham return trong truyen gia tri
	cout << "test ham return::" << endl;

	// calculator will return the addOut and subOut in variables add and sub
	Calculator(a, b, add, sub);

	//khi nay doi so add sub dc truyen tham chieu

	cout << " a + b = " << add << endl;
	cout << " a - b = " << sub << endl;
	//ko co cau lenh return trong ham <<caculator>> add sub nhung van ra dap an

	cout << " \t==>khong can su dung Return vs tham chieu" << endl;
}

//___________________________________________________________________________

void printValue(const int& value)	// value is a const reference
									//value la tham chieu hang
{
	//value = 69;
		// compile error: a const reference cannot have its value changed!
			//---> khong the thay doi gia tri value

	cout << value << endl;
}
	//dam bao doi so ko bi thay doi ngoai y muon
		//co the truyen vs bien, hang, bieu thuc--> tot cho class, struct

void PasteValue()
{
	cout << "\nTest hang so Const::" << endl;

	int x = 1;

	cout << "variable: "; printValue(x);	// argument is a variable 
	cout << "const number: "; printValue(5);	// argument is a const
	cout << "expression: "; printValue(x + 5);	// argument is a expression

	//doi so co the la 1 bien, hang, bieu thuc
			//thong thuong, doi so ko the la 1 hang vs biey thuc,
				//vi no ko the nam cung 1 bo nho ram, ko tham chieu dc

}



int main6()
{
	OutputTestPara();

	cout << "gia tri return:"<<endl;
	cout << return69() << endl;
	int su = return69() + 1;
	cout << su << endl;
	cout << "\t==>co ve nhu return chi dung de tinh toan lol:v"<<endl;
	cout << "return chi co the cout khi di vs int, blabla, ko the cout khi di vs void" << endl;

//**********************************************************************************

	OutputReferences();

	//_____________________________________________________________________________
	
	OutputParameters();

//********************************************************************************

	OutputCaculator();

//************************************************************************************

	PasteValue();

	return 0 ;
}