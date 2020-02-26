#include <iostream>
using namespace std;
int main()
{
    string str;
    cout<<"cin's test':"<<endl;
    cin>>str;
    cin.sync();
    cout<<str<<endl;
    cin>>str;
    cout<<str<<endl;
    return 0;
}
