#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;

	// 尾插一个字符
	str.push_back('+');
	str.push_back('+');
	str.push_back(' ');
	str.push_back('C');
	str.push_back('o');
	str.push_back('o');
	str.push_back('l');

	cout << "Str:" << str << endl; // Str:++ Cool

	str.insert(str.begin(), 'C'); // insert(pos,char):在指定的位置pos前插入字符char
	cout << "Str:" << str << endl; // Str:C++ Cool
    system("pause");
    return 0;
}
