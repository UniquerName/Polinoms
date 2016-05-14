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
	F.out("Первый полином:\n");
	cout << endl;
	Polinom T;
	T.Input();
	T.out("Второй полином:\n");
	cout << endl;
	cout << "_______________________________________________________" << endl;
	Polinom S = F.addition(T);
	 S = S.addition(R);
	S.out("Сумма полиномов:\n");
	cout << endl;
	//	T.out("Тест1"); //!!
	Polinom C = F.Minus(T);
		 C = C.Minus(R);
		
	C.out("Разность первого и второго полиномов:\n");
	F.Minus(T);
	//T.out("Тест1"); //!!
		//F.out("Тест2");//!!
	Polinom Q = T.Minus(F);
		 Q = Q.Minus(R);

	Q.out("Разность второго и первого полиномов:\n");
	T.Minus(F);
	//F.out("Тест2");//!!
	cout << "_______________________________________________________" << endl;
//	cout << "TESTING" << endl;
//	Polinom Testing = R.Minus(T);
	//Testing.out("Тест");
	cout << endl;

	_getch();

}
