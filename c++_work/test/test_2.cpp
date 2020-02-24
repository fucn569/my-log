#include <iostream>
using namespace std;
int max(int x,int y)
{
  int z;
  if(x > y)
   z = x;
  else
   z = y;
  return(z);
}
int main( )
{
  int a,b,c;
  cin >> a >> b;
  c = max(a,b);
  cout<<"max="<<c<<endl;
  return 0;
}
