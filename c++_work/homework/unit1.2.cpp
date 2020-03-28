/*2.将下列代码改写成C++代码。
要求：将char的数组替换成string类型。
本题完成后需只需提交CPP文件即可。*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1, str2, str3, temp;
    cout<<"please enter three strings\n";
    cin >> str1 >> str2 >> str3;
    if (str2>str3)
    {
        temp = str2;
        str2 = str3;
        str3 = temp;
    }
    if (str1<=str2)
        cout << str1 << " " << str2 << " " << str3 << endl;
    else if (str1<=str3)
        cout << str2 << " " << str1 << " " << str3 << endl;
    else
        cout << str2 << " " << str3 << " " << str1 << endl;
    system("pause");
    return 0;
}
