#include<iostream>
using namespace std;
//we declared a function named ReverseIt
int ReverseIt(int p);

int main()
{
cout<<"           20-SE-56 MUHAMMAD ARSALAN                "<<endl<<endl;
        //declared and initialized two variables with 0 value
        int num=0, out_put=0;

            cout<<"PLEASE ENTER THE NUMBER YOU WANT TO REVERSE: ";
                cin>>num;
//passing value to main function form other function
                out_put=ReverseIt(num);
            cout<<"OUR REQUIRED REVERSE NUMBER IS : " <<out_put <<endl;

}
//defining the function
            int ReverseIt(int p)
{

 int x=0, reverse=0;

 while(p!=0)
 {
     //program to reverse the number
     x=p%10;
     reverse=(reverse*10)+x;
     p=p/10;
 }
 //returning reverse to main function

 return reverse;
}
