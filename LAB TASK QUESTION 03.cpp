#include<iostream >
using namespace std;
int main()
{
	int marks;
	cout << "enter marks =(0-100):";
	cin >> marks;
	switch (marks / 10)
	{
	case 10:
	case 9:
		cout << " grade A :" << endl;
		break;
	case 8:
		cout << "grade  B :" << endl;
		break;
	case 7:
		cout << "grade C " << endl;
		break;
	case 6:
		cout << "grade D" << endl;
		break;
	case 5:
		cout << " grade E " << endl;
		break;
	default:
		cout << "fail:"<<endl;
			

	}
	return 0;
}