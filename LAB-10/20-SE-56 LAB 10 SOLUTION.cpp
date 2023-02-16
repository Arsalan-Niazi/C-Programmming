            #include<iostream>
            #include<iomanip>
            #include<conio.h>
            #include<cctype>
            #include<cmath>
            using namespace std;

            //DECLAARING A STRUCTURE FOR STUDENT RECORD
             struct student
            {
            //INITIAL DATA WHEN THERE IS NO INPUT


                string Reg_No="0";
                int Pf_Score=0;
            };

            int main ()
            {
             student stdnt1;
             student stdnt2;
             student stdnt3;

             char choice_1;
             char choice_2;




 cout<<"\n ***************** Main Menu ******************\n";
do
 {
    menu:
        cout<<"\t Press 1 to Enter Student Record "<<endl;
        cout<<"\t Press 2 to Display Student Record "<<endl;
        cout<<"\t Press 3 to exit "<<endl;

cin>>choice_1;

//SWITCH STATEMENT TO SELECT BETWEEN ABOVE THREE CHOICES
 switch(choice_1)

 {
                case '1':
                                {


                                              cout<<endl<<endl;
                                              cout<<"\t press 1 for 1st student record"<<endl;
                                              cout<<"\t press 2 for 2nd student record"<<endl;
                                              cout<<"\t press 3 for 3rd student record"<<endl;
                                              cout<<"\t press 4 for return to main menu"<<endl;
                                              cout<<"\t press 5 to exit \n"<<endl;

                              start:
                              cout<<endl<<"\t Enter your choice"<<endl;


                            cin>>choice_2;
                                cout<<endl;
                            switch(choice_2)
                              {

//CASE 1 ,CASE 2,CASE 3 ARE FOR 3 STUDENTS WHILE CASE 4 WILL RETURN TO MAIN MENU CASE 5 WILL EBD THE PROGRAMME
                case '1':
                                {
                                              cout<<endl;
                                              cout << "Enter Reg_No: ";
                                              cin >>stdnt1.Reg_No;
                                              cout<<endl;
                                              cout << "Enter PF Marks ";
                                              cin >> stdnt1.Pf_Score;
                                              cout<<endl;
                                              goto start;
                                              break;
                          }
                case '2':
                      {

                                              cout << "Enter Reg_No: ";
                                              cin >> stdnt2.Reg_No;
                                              cout << "Enter PF Marks ";
                                              cin >> stdnt2.Pf_Score;
                                              goto start;

                                              break;

                        }

                case '3':
                         {

                                              cout << "Enter Reg_No: ";
                                              cin >> stdnt3.Reg_No;
                                              cout << "Enter PF Marks ";
                                              cin >> stdnt3.Pf_Score;
                                              goto start;
                                              break;
                                       }


                                case '4':
                                          {
                                             goto menu;
                                             break;
                                          }


                                   case '5':
                                          {
                                            exit(0);
                                          }
                              }// IT IS END OF SWITCH choice_1
                              break;


                        }// END OF CASE 1 OF STUDENT RECORD

                 case '2':
                     //CASE 2 TO DISPLAY ALL INPUT STUDENT RECORD
                         {
                                            cout<<setw(20)<<"Roll No."<<setw(20)<<"PF Score"<<endl<<endl;
                                            cout<<setw(20)<<stdnt1.Reg_No<<setw(20)<<stdnt1.Pf_Score<<endl<<endl;
                                            cout<<setw(20)<<stdnt2.Reg_No<<setw(20)<<stdnt2.Pf_Score<<endl<<endl;
                                            cout<<setw(20)<<stdnt3.Reg_No<<setw(20)<<stdnt3.Pf_Score<<endl<<endl;

                                break;
                                     }


                                case '3':
                                     {
                                    //CASE 3 TO END THE PROGRAMM
                            cout<<"YOU WANTED TO TERMINATE THE PROGRAMM THANK YOU!!!!!!!!!"<<endl<<endl;
                                      exit(0);
                                     }// end of case power function

                              }
                            //ABOVE WHOLE PROGRAMME WILL EXECUTE IF USER PRESS ANY KEY WITHOUT 3
                            }       while(choice_1 != '3');

                                    return 0;
                            }

