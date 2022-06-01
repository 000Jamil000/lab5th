#include <iostream>
#include <string>
#include <bitset>
#include <vector>

using namespace std;
//.\5thLab.exe
//bitset < 64 >_bin1_ = num1;
	//bitset < 64 >_bin2_ = num2;
void unitCounter(unsigned long long num1, unsigned long long num2, unsigned long long num3)
{	
	if (num2 + num3 > 64)
	{
		cout << "Неверный ввод данных!\n";
			return;
	}
	bitset < 64 >_bin1_ = num1;
	string copy1 = _bin1_.to_string();
	unsigned long long copy2 = num2;
	unsigned long long copy3 = num3;
	string binStr1{}, newS{};
	string binStr2{};

	cout << "Двоичное представление числа " << num1 << ": " << copy1 << endl;
	
	string bin1 = "";

	for (int i = 0; i < copy1.length();i++)
	{
		if (i >= copy1.length() - num3-num2 && i < copy1.length()- num2)
		{
			if (copy1[i] == '0')
				newS += '1';
			if (copy1[i] == '1')
				newS += '0';
		}
		else
		{
			newS += copy1[i];
		}
		
	}
	cout << "Ответ в двоичном представлении: " << newS << endl;
	unsigned long long num10{};
	for (int i = 0;i< newS.length();i++)
	{
		if(newS[i]=='1')
		num10 += pow(2, 63-i);
	}
	cout << "Ответ в десятичном представлении: " << num10;



	
}