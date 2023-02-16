#include <iostream>
using namespace std;
const int MAX = 6;
int main () {
    //defining arrays of integer data-types
   int  var[MAX];
   int rev[MAX+1];
   int *ptr[MAX];

    cout<<"\n\nENTER A 6 DIGIT NUMBER TO BE REVERE SEPARATED BY SPACE --> ";
    for (int i = 0; i < MAX; i++)
    {
      cin>> var[i];
   }
            for (int i = 0; i < MAX; i++)
   {
       //assigned the address of integers
            ptr[i] = &var[i];
   }
        cout<<endl<<"AFTER ASSIGNING CONTENTS OF ARRAY TO POINTERS ARRAY ,YOUR ENTERED NUMBER BECOMES-->"<<endl;
        for (int i = 0; i < MAX; i++) {

        cout << *ptr[i] <<" ";
   }
        //used for loopto reverse the number
            cout<<endl<<"NUMBER AFTER REVERSING--> "<<endl;
            for (int i = MAX-1; i >=0; i--) {
            cout << *ptr[i]<<" ";
   }

 cout<<"\n********************************************************"<<endl<<endl;

   return 0;
}

