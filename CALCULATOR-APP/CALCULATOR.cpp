#include<iostream>
#include<math.h>
#include<cmath>
#include<conio.h>
#include<iomanip>
using namespace std;
int main ()
{
        //initialized an integer type variable to select operation user want to perform
        int select_ope;
        cout<<endl<<endl;
        cout<<" WELCOME TO CALCULATOR BY 20-SE-56  MUHAMMAD ARSALAN"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------------------";
        cout<<"------------------------------------------------------------------------------------------------------------------------";
        cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
        cout<<"------------------------------------------------------------------------------------------------------------------------";
        cout<<"------------------------------------------------------------------------------------------------------------------------";
        cout<<endl<<endl;
        //declared this statement so that after performing some operation programm will come to again this point by using 'goto'statement
start_programm:
        //provided the list of available operation that can be performed
        cout<<setw(10)<<" \t \t  1 : Arithmetic Operations "<<setw(10)<<endl;
        cout<<setw(10)<<" \t \t  2 : Trignometric Functions"<<setw(10)<<endl;
        cout<<setw(10)<<" \t \t  3 : Logarithmic Functions "<<setw(10)<<endl;
        cout<<setw(10)<<" \t \t  4 : Power Functions       "<<setw(10)<<endl;
        cout<<setw(10)<<" \t \t  5 : Exit ...              "<<setw(10)<<endl;

cout<<endl;

cout<<"\t \t  SELECT OPERATION YOU WANT TO PERFORM "<<endl;
cout<<"\t  ===  ";
        //user will select from any of above 5 possible choices
cin>>select_ope;
cout<<endl<<endl<<endl;
                if(select_ope==1)
                cout<<"<--USER CHOSED ARTHEMETIC OPERATION -->"<<endl;
                if(select_ope==2)
                cout<<"<--USER CHOSED TRIGNOMETRIC OPERATION-->"<<endl;
                if(select_ope==3)
                cout<<"<--USER CHOSED LOGARITHMIC OPERATION-->"<<endl;
                if(select_ope==4)
                cout<<"<--USER CHOSED POWER OPERATION"<<endl;
                if(select_ope==5)
                cout<<"USER CHOSED TO CLOSE THE CALCULATOR GOOD BYE !!!!"<<endl;
cout<<" ------------------------------------------------------------------------------------------------------------";
cout<<endl<<endl<<endl;


//switch statement to perform case study on any of selected operation from above
        switch(select_ope)
    {
            case 1:
                astart:
                    //a character type data type to select which arthemetic operation to be performed
                    char oper;
    double num1, num2;
    cout<<"CHOSE ARTHEMETIC OPERATION FROM THE FOLLOWING GIVEN '+','-','*','/' "<<endl;
    cout<< "SELECT OPERATION TO BE PERFORMED :";
    cout<<"    \t----> : ";
    cin>>oper;
    cout<<"           \t";
    cout<<endl<<endl;
    cout<<"ENTER FIRST NUMBER : "<<endl;
    cout<<"    \t----> : ";
    cin>>num1;
    cout<<"ENTER SECOND NUMBER :"<<endl;
    cout<<"    \t----> : ";
    cin>>num2;
    cout<<endl;

    switch(oper)
    {
    case '+':
        cout<<"Sum of numbers "<<num1<<" & "<<num2<<" : "<<endl<<"   ANSWER : \n   "<<num1+num2<<endl;
        break;
    case '-':
        cout<<"Difference of numbers "<<num1<<" & "<<num2<<" : "<<endl<<"   ANSWER : \n   "<<num1-num2<<endl;
        break;
    case '*':
        cout<<"Product of numbers "<<num1<<" & "<<num2<<" : "<<endl<<"   ANSWER : \n  "<<num1*num2<<endl;
        break;
    case '/':
        cout<<"Answer of "<<num1<<" / "<<num2<<" : "<<endl<<"   ANSWER : \n     "<<num1/num2<<endl;
        break;
    case '/0':
        	if (num2==0)
	{
	cout<<"\a"" Error : A NUMBER CAN'T BE DIVIDED BY  0 ."<<endl<<endl;
	}
        break;

    default:
            cout<<"MATH ERROR!INVALID ENTRY!!!!"<<endl;
           }
break;
 case 2:


    int radian ;
    int trig_ope;

    cout<<"\t\t\t  > 1 : sin , \t> 2 : cos,\t> 3 : tan. "<<endl;
    cout<<"\t\t\t  > 4 : cosec,\t> 5 : sec,\t> 6 : cot. "<<endl;
    cout<<endl;
    cout<<"PLEASE SELECT FROM ABOVE GIVEN TRIGNOMETRIC OPERATION !!"<<endl<<endl;
    cout<<"   \t \t \t----> : ";
    cin>>trig_ope;
    switch (trig_ope)
{
    case 1:
        cout<<"\t \t \t NOTE : Enter the angle to be measured in Radian "<<"    \t----> : ";
        cin>>radian;
        cout<<"\t \t \t You chose sine function "<<endl;
        cout<<" \t \t \t \t sine(radian) : "<<endl<<"\t \t \t \t ANSWER = "<<sin(radian)<<endl;
        break;
    case 2:
        cout<<"\t \t \t NOTE : Enter the angle to be measured in Radian "<<"    \t----> : ";
        cin>>radian;
        cout<<"\t \t \t You chose COSECANT function "<<endl;
        cout<<" \t \t \t \t COS(radian) : "<<endl<<"\t \t \t \t ANSWER = "<<cos(radian)<<endl;
        break;
    case 3:
        cout<<"\t \t \t NOTE : Enter the angle to be measured in Radian "<<"    \t----> : ";
        cin>>radian;
        cout<<"\t \t \t You chose TANGENT function "<<endl;
        cout<<" \t \t \t \t  TAN(radian) : "<<endl<<"\t \t \t \t ANSWER = "<<tan(radian)<<endl;
        break;
    case 4:
        cout<<"\t \t \t NOTE : Enter the angle to be measured in Radian "<<"    \t----> : ";
        cin>>radian;
        cout<<"\t \t \t You chose COSECANT function "<<endl;
        cout<<" \t \t \t \t  COSEC(radian) : "<<endl<<"\t \t \t \t ANSWER = "<<1/sin(radian)<<endl;
        break;
    case 5:
        cout<<"\t \t \t NOTE : Enter the angle to be measured in Radian "<<"    \t----> : ";
        cin>>radian;
        cout<<"\t \t \t You chose SECANT function "<<endl;
        cout<<" \t \t \t \t  SEC(radian) : "<<endl<<"\t \t \t \t ANSWER = "<<1/cos(radian)<<endl;
        break;
    case 6:
        cout<<"\t \t \t NOTE : Enter the angle to be measured in Radian "<<"    \t----> : ";
        cin>>radian;
        cout<<"\t \t \t You chose COTANGENT function "<<endl;
        cout<<" \t \t \t \t  COT(radian) : "<<endl<<"\t \t \t \t ANSWER = "<<1/tan(radian)<<endl;
        break;
    default:
        cout<<"ERROR, INVALID ENTRY !!! ";
    }
break;
case 3:
    {
    float num;
    cout<<endl<<endl;
    cout<<" ***************************Enter a Positive Number to take the log of that number **************************"<<endl;
    cout<<"   \t \t \t----> : ";
    cin>>num;
    cout<<endl<<endl<<endl<<endl;
    if (num>=0)
    {
        cout<<" \t \t \t \t log of "<<num<<" : " <<endl<<"\t \t \t \t ANSWER = " <<log(num)<<endl;
    }
    else
    {
            cout<<"MATH ERROR";
    }
  cout<<endl<<endl;
  cout<<" ----------------------------------------------------------------------------------------------------------------------";
  cout<<endl<<endl;

    break;

 case 4:
    {

    int base_num, exp_num;
    cout<<"ENTER A NUMBER YOU WANT TO RAISE:"<<endl;
    cin>>base_num;
    cout<<endl;
    cout<<"ENTER EXPONENT YOU WANT TO RAISE THE BASE UPTO :"<<endl;
    cout<<"\t \t  ";
    cin>>exp_num;
    cout<<endl;

    cout<<base_num<<" raised to "<<exp_num<<" = "<<pow(base_num,exp_num);
    cout<<endl<<endl<<endl;


   }
   break;
case 5:
    int num5;
    //USER WANTED TO CLOSE THE CALCULATOR
    cout<<"SHUKRIA CALCULATOR USER KRNY KY LIAY EXIT K LIAY KOI BH KEY PRESS KRAIN.";
    cout<<endl<<endl;
    cout<<"\t \t --->  ";
    cin>>num5;
    cout<<endl;
    exit(0);
break;
case 6:
    //if user perform any other inout without these 5 cases than it will prompt error message
     if(trig_ope!=1)
        cout<<"ERROR INVALID INSERTION BY USER";
     else if(trig_ope!=2)
        cout<<"ERROR INVALID INSERTION BY USER";
     else if(trig_ope!=3)
        cout<<"ERROR INVALID INSERTION BY USER";
     else if(trig_ope!=4)
        cout<<"ERROR INVALID INSERTION BY USER";
     else if(trig_ope!=5)
        cout<<"ERROR INVALID INSERTION BY USER";
     else
        cout<<"THANKS FOR USING CALCULATOR BY MUHAMMAD ARSALAN 20-SE-56";
break;
 default:
    cout<<"CALCULATOR BY MUHAMMAD ARSALAN 20-SE-56"<<endl;

 }}
  cout<<endl<<endl<<endl<<endl;
  cout<<" ----------------------------------------------------------------------------------------------------------------------";
  cout<<endl<<endl<<endl<<endl;
 goto start_programm;
  cout<<endl<<endl<<endl<<endl;
  cout<<" ----------------------------------------------------------------------------------------------------------------------";
  cout<<endl<<endl;

    cout<<endl<<endl<<endl<<endl<<endl;
    return 0;
    }

