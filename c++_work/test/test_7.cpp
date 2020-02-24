#include <iostream>
using namespace std;
int main()
{
    void test_input();
    test_input();
    return 0;
}
void test_input()
{
    char ch1,ch2[10];
    cout<<"input please:"<<endl;
    cin.get(ch2,6);//在不遇到结束符的情况下，最多可接收6-1=5个字符到ch2中
    cin.get();//注意：前面两句可以写到一块：cin.get(ch2,6).get();
    cin.get(ch1);//或ch1 = cin.get();
    cout<<ch2<<endl;
    cout<<ch1<<"\n"<<(int)ch1<<endl;
}

