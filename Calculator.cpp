#include <iostream>                  // header file
using namespace std;                 // so we dont have to use std::
int main()                           //allocating main body
{
 int a,b;                            //declaring a,b
 char c;                             //declearing c
 cout<<"add two numbers"<<endl;      //asking value for two numbers
 cin>>a>>b;                          //taking in answer
 cout<<"what function(+,-)"<<endl;   //asking what program do you want to do
 cin>>c;                             //taking in answer
 switch (c)                          //taking switch case for different answer
 {
  case (+):                         // +case
  {
     cout<<a+b;
  }
  case (-):                         // -case
  {
      cout<<a-b;
  }
  case (/):                        // /case
  {
      cout<<a/b;
  }
  case (*):
  {
       cout<<a*b;                  // *case
  }
 }
}
