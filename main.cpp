#include <iostream>
using namespace std;

const int N=40;
int F[N];

int main()
{
 F[0] = 0;
 F[1] = 1;
  
 for(int i=2; i<N; i++)
    F[i] = F[i-1] + F[i-2];
 
 for(int i=0; i<N; i++)
    cout << F[i] << "\n";

return 0;
}

