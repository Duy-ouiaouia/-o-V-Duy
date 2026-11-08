#include <iostream>
#include <math.h>
using namespace std;
// these two lines will dissapear
int main() 
{
    int L, R;
    cin >> L >> R;
    for (int a = L; a <= R; a++)
    {
        bool check = true;
        if (a == 1)
            check = false;
        for (int i = 2 ; i <= sqrt(a) ; i++)
            if (a % i == 0)
               check = false;
        if (check == true)
            cout << a << endl;
    }
    
    return 0;
}
