#include"Polinom.h"
#include<locale.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	Polinom R;
	Polinom F;
	F.Input();
	F.out("������ �������:\n");
	cout << endl;
	Polinom T;
	T.Input();
	T.out("������ �������:\n");
	cout << endl;
	cout << "_______________________________________________________" << endl;
	Polinom S = F.addition(T);
	 S = S.addition(R);
	S.out("����� ���������:\n");
	cout << endl;
	//	T.out("����1"); //!!
	Polinom C = F.Minus(T);
		 C = C.Minus(R);
		
	C.out("�������� ������� � ������� ���������:\n");
	F.Minus(T);
	//T.out("����1"); //!!
		//F.out("����2");//!!
	Polinom Q = T.Minus(F);
		 Q = Q.Minus(R);

	Q.out("�������� ������� � ������� ���������:\n");
	T.Minus(F);
	//F.out("����2");//!!
	cout << "_______________________________________________________" << endl;
//	cout << "TESTING" << endl;
//	Polinom Testing = R.Minus(T);
	//Testing.out("����");
	cout << endl;

	_getch();

}
