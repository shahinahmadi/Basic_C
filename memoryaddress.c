#include <iostream>
using namespace std;

int main()
{
    int i;
    int a[] = {1,2,3,4,5};
    cout << (int*)&a[0] << endl;
    cout << (int*)&a[1] << endl;
    cout << (int*)&a[4] << endl;
  
 //Calculation of difference between second and first & first and last memory address gives 4 and 10, respectively.

    return 0;
}
