#include <iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	cout << "������һ���ַ���" << endl;
	cin >> a;
	int k;
	k = a.length();
	cout << "���ú�" << endl;
	for (; k >= 0; k--)
	{
		cout << a[k];
	}
	cout << endl;
	system("pause");
	return 0;
}
