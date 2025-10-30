#include<iostream >
using namespace std;
int main()
{
	char op;
	int a, b;
	

	cout << "enter operator(+,-,*,/,):";
	cin >> op;
	cout << "enter two number(a,b):";
	cin >> a >> b;
	switch (op)
	{
	case '+':
		cout <<"answer="<< a + b << endl;
			break;
	case'-':
		cout <<"answer="<<a - b << endl;
		break;
	case'*':
		cout <<"answer="<< a * b << endl;
			break;
	case'/':
		cout <<"answer=" <<a / b << endl;;

		default:
			cout << "invalid operator:";



	}
	return 0;

}