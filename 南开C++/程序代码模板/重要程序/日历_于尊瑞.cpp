#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	int year, weekday;
	cout << "�꣺";
	cin >> year;
	cout << "1��1���ܼ�:";
	cin >> weekday;
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		days[2] = 29;
	//ȷ������ƽ
	for (int i = 1; i <= 12; i++)
		weekday += days[i];
	weekday %= 7;
	//����1��1���ܼ��Ѿ�ȷ��
	cout << "��\tһ\t��\t��\t��\t��\t��\t" << endl;
	for (int i = 0; i < weekday; i++)
		cout << "\t";
	int day = 1;
	for (; weekday <= 6;weekday++)
		cout << day++<<"\t";
	cout << endl;
	for (int i=1; day <= 31; day++)
	{
		cout << day << "\t";
		if (i++ % 7 == 0)
			cout << endl;
	}
	cout << endl;
	system("pause");
}