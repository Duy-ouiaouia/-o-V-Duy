#include <iostream>
using namespace std;
#include <math.h>
int main() 
{
    int L, R, sum;
    cin >> L >> R;
    int cnt = 0;
    for (int a = L; a <= R; a++)
    {
        sum = 1;
        for ( int i = 2; i <= sqrt(a); i++)
            if (a % i == 0)
            
             {
                 sum += i;
                 if (i * i != a)
                 sum += a/i;    
             }
        if ( sum > a)
            cnt++;    
    }
    cout << cnt;
    return 0;
}
