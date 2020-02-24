#include <iostream>
using namespace std;
int main() {
	cout << "Enter your name:";
	char name[15];
	//cin.get(name, 15);
	cin.getline(name, 15);// 输入abc(enter)
	cout << "name:" << name << endl;
	char ch;
	cin.get(ch);// 输入123(enter) 注：因为cin.getline把最后一个换行符丢弃了，所以此处ch读取字符'1'
	cout << (int)ch << endl;  //输出49  '1'的ASCII码值
	cout << "\nEnter your address:";
	char address[15];
	//cin.getline(address, 15);
	cin.get(address, 15); //直接读取缓冲区剩余的23 注：cin.get保留最后一个换行符在缓冲区
	cout << "address:" << address << endl;
	cin.get(ch); // 读取缓冲区最后一个换行符
	cout << (int)ch << endl;
	cin.get(ch);  // 缓冲区已为空，所以从键盘输入a
	cout << (int)ch << endl; //输出97  'a'的ASCII码值
	return 0;
}
