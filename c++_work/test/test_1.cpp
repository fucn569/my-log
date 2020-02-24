#include <iostream>
using namespace std;
int main( )
{
  int a,b,c;
  cin >> a >> b;
  c = max1(a,b);
  cout<<"max="<<c<<endl;
  return 0;
}
int max1(int x,int y)
{
  int z;
  if(x > y)
   z = x;
  else
   z = y;
  return(z);
}
