#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;


 struct student//made a structure named student that contain 3 objects
       {      char name[25];
              int marks[3];
              char reg_no[25];
       };

       int main()
       {
           cout<<"\n\t\tSTUDENT RECORD \n";
           cout<<"////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
              student record [5];//determined the value of students limit to 5
   do
   {
    int select;
    cout<<"\t1.ENTER THE STUDENTS RECORD\n";
    cout<<"\t2.DISPLAY THE RECORD\n";
    cout<<"\t3.MODIFY THE RECORD\n";
    cout<<"\t4.EXIT\n";
cout<<"---------------------------------------------------------------------------------------------------------------------\n";
    cin >> select;
    switch (select)//switch to allow user to choose action want to perform
    {
    case 1:


              for(int i=0;i<5;i++)//for loop that will execute for 5 times as we have 5 students
              {
                    cout << "\nENTER DETAILS OF STUDENT NO:"  <<i+1;

                    cout << "\n\tENTER THE STUDENT NAME: ";
                    cin>> record[i].name;

                    cout << "\n\tENTER THE STUDENT REG NO: ";
                    cin>> record[i].reg_no;
                    for(int j=0;j<3;j++) //again a for loop for marks as we have to give marks of 3 subjects
                    {
                            cout << "\n\nENTER THE MARKS OF STUDENT IN SUBJECT" << j+1 << " :";
                            cin >> record[i].marks[j];
                     }
		    }
		    cout<<"------------------------------------------------------------------------------------------------------------\n";
        break;
        case 2://displaying the record
			cout << "\nSTUDENT RECORD  "<<endl;
			cout<<endl<<endl;

                for ( int i=4; i>=1;i--)//display the record in ascending order
			{
                for (int j=0; j<i;j++)
                {
                    if (record[j].name[0] > record[j+1].name[0])
                    {
                        swap(record[j], record[j+1]);
                    }
                }

			}
				for (int i=0; i<5; i++)//display the full record of all 5 students
                {
                    cout<<i+1<<"\t";
                    cout << record[i].name << "\t";

                    cout << record[i].reg_no << "\t";
			        for(int j=0;j<3;j++)
                    {
                    cout << record[i].marks[j] << "\t";
                    }
                  cout<< endl;
                }
cout<<"-------------------------------------------------------------------------------------------------------------------------\n";
    break;
    case 3://modify the record
            char name[25];//a character data type for searching student by name
            cout << "ENTER NAME OF STUDENT TO SEARCH RECORD:";
            cin >> name;
            for (int i = 0; i < 5; i++)
            {
                if (!strcmp(record[i].name, name ) )//searching the name
                {

                    for(int j=0;j<3;j++)
                    {



                            cout << "\n\nENTER THE MARKS " << j+1 << " :";//modify the marks of student
                            cin >> record[i].marks[j];
                    }

                    }

                     }
cout<<"--------------------------------------------------------------------------------------------------------------------------\n";
    break;
    case 4://if user press 4 it will exit the rogram
        exit(0);
    default:
        break;
    }}
     while (1);}

