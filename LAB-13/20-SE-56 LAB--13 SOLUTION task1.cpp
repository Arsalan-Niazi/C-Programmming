#include<iostream>
using namespace std;
    int main()
        {
            //we have an array of 3 by 3
            int arr[3][3];
            //we declared integer type variables for this purpose
                    int i;
                    int j;
                    int search;
                    int count=0 ;
                    int replace;
                    cout<<"USER ENTER 9 INTEGERS:";
                        for(i=0 ; i<3 ; i++)
        {
            //user enter 9 digits that are stored in the array of 3 by 3
                        for(j=0 ; j<3 ; j++)
                        cin>>arr[i][j];
        }
                cout<<endl;

        for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
		    //we display the input digits by user on screen in the form of 3 by 3
			cout<<arr[i][j];
			cout<<"  ";
		}
		cout<<endl;
	}
            //now this prompt ask user to serch specific number from this array
	cout<<endl<<"USER ENTER THE NUMBER WANT TO SEARCH :";
	cin>>search;
	//for loops are used to determine how many time required number is repeated

        for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
        if(search==arr[i][j])
				count++;
		}
        }
        cout<<endl;
        cout<<"THE NUMBER REPEATED  "<<count<<" TIMES "<< endl<<endl;
        //user will input the number he want to add in place of searched digit
        cout<<"USER ENTER NUMBER TO REPLACE ACTUAL NUMBER :";
        cin>>replace;
        cout<<endl;
                    for(i=0 ; i<3 ; i++)
                    {
                        for(j=0 ; j<3 ; j++)
                    {
                        if(search==arr[i][j])
                            arr[i][j]=replace;
                    }
                    }
                        for(i=0 ; i<3 ; i++)
                    {
                        for(j=0 ; j<3 ; j++)
                    {
                        cout<<arr[i][j];
                        cout<<"  ";
                    }
                        cout<<endl;
                    }
                    return 0;
            }

