#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
// pi = 4 - 4/3 + 4/5 - 4/7 + 4/9.....
int main()
{
   double pia = 0;
   double pib = 0;

   for ( double beg = 1; 1/beg >= pow( 10, -5 ) ; beg = beg + 4)
    {

       pia =  pia + ( 4 / beg );

    }

    for ( double beg = 3;  1/beg >= pow( 10, -5 ) ; beg = beg + 4)
    {
       pib =  pib  - ( 4 / beg );

    }

    cout << setprecision( 70 ) <<  fixed  << pia + pib << endl;

    return 0;
}
