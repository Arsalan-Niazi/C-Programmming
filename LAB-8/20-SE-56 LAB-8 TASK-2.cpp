#include <iostream>
using namespace std;
int main()
{
    //declared and initialized a integer type variable from 0
    int i = 0;
while (i < 10)
{
    i++;
if (i == 5) continue;
cout << i << " "; //this statement will be skipped every time when i=5
}
return 0;
}
