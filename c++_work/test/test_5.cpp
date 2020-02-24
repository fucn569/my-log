#include <iostream>
using namespace std;
int main( )
{
    cout<<"please enter your name and age:"<<endl;
    char name[10];
    int age;
    cin.getline(name, 10);     //* 使输入空格变为可能
    cin >> age;
    cout << "your name is"<< name << endl;
    cout << "your age is"<< age <<endl;
    return 0;
}
