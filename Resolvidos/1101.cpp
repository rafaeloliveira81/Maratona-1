#include <iostream>
using namespace std;

int main() 
{
  int e1=1, e2=1, soma = 0;
  cin >> e1;
  cin >> e2;

  while( e1 > 0 && e2 > 0 )
  {
    if ( e1 <= e2 && e1 > 0 && e2 > 0 ) 
    {
      for ( int i = e1; i <= e2; i++ ) 
      {
        cout << i << " ";
        soma += i;
      }
    }
    else 
    {
      for (int i = e2; i <= e1; i++) 
      {
        cout << i << " ";
        soma += i;
      }
    }
    cout << "Sum=" << soma << endl;
    soma = 0;
    cin >> e1;
    cin >> e2;
  }
  return 0;
}