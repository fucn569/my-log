#include <iostream>
using namespace std;
int main( )
{
    int *p = new int[3];
    p[1] = 2;
    cout << p[0] << endl;
    return 0;
}
