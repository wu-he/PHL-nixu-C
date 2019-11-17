#include <iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û´®" << endl;
	cin >> a;
	int k;
	k = a.length();
	cout << "ÄæÖÃºó£º" << endl;
	for (; k >= 0; k--)
	{
		cout << a[k];
	}
	cout << endl;
	system("pause");
	return 0;
}
