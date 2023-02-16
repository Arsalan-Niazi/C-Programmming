
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
        char strng[90];
        int countw=1,len_strng, i;
            cout<<"ENTER THE STRING--> ";
            gets(strng);

         len_strng=strlen(strng);

                for(i=0; i<len_strng; i++)
        {
                if(strng[i]==' ')
                {
                        countw++;
                }
        }
                cout<<"\nNUMBER OF WORDS IN STRING--> "<<countw<<"\n";
                cout<<"\n\n***************END OF THE PROGRAM*****************\n\n";

        return 0;
}
