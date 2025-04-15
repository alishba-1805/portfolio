// assignment 5
// Alishba inam
// 24i-2036
// question 7
#include <iostream>
using namespace std;
int sum(int a, int b)
{
 int result=a+b;
 return result;
}
int diff(int a, int b)
{
 int result=a-b;
 return result;
}
int mul(int a, int b)
{
 int result=a*b;
 return result;
}
int divide(int a, int b)
{
 int result;  
 {  if(b==0)
     {cout<<"error"; 
       return 0; }
    result=a/b;
 }
 return result;
}
int Power(int a, int b) {
   int result = 1;
    for (int i = 0; i < b; i++) 
    {
        result = result * a;
    }
    return result;
}
float sum(float a, float b)
{
 float result=a+b;
 return result;
}
float diff(float a, float b)
{
 float result=a-b;
 return result;
}
float mul(float a, float b)
{
 float result=a*b;
 return result;
}
float divide(float a, float b)
{
 float result;  
 {  if(b==0.0f)
     {cout<<"error";  }
       result=a/b;
       return result;
 }
 
}
float power(float a, int b) {
   float result = 1.0f;
    for (int i = 0; i < b; i++) 
    {
        result = result * a;
    }
    return result;
}
double sum(double a, double b)
{
 double result=a+b;
 return result;
}
double diff(double a, double b)
{
 double result=a-b;
 return result;
}
double mul(double a, double b)
{
 double result=a*b;
 return result;
}
double divide(double a, double b)
{
 double result;  
 {  if(b==0.0)
     {cout<<"error";  }
       result=a/b;
       return result;
 }
 
}
double pow(double a, double b) {
   double result = 1.0;
    for (int i = 0; i < b; i++) 
    {
        result = result * a;
    }
    return result;
}

void calculatorMenu()
{
   cout<<"Menu"<<endl;
   cout<<"---------------------------------------"<<endl;
   cout<<"1. Addition"<<endl;
   cout<<"2. Subtraction"<<endl;
   cout<<"3. Multiply"<<endl;
   cout<<"4. Division"<<endl;
   cout<<"5. Power"<<endl;
   cout<<"----------------------------------------"<<endl;
   int choice, dataType;
   cout<<"Enter your choice: ";
   cin>>choice;
   if(choice<1 || choice >5)
    {
      cout<<" invalid choice "<<endl; 
      return;
    }
   cout<<"\nSelect data type:\n";
   cout<<"1. Integer\n2. Float\n3. Double\n";
   cout<<"Enter data type choice: ";
   cin>>dataType;
   if(dataType == 1){
      int n1, n2 , result;
   cout<<"Enter number 1 :";
   cin>>n1;
   cout<<"Enter number 2 :";
   cin>>n2;
   if (choice==5)
    {  
      int intexp;
      cout<<"Enter exponent: ";
      cin>>intexp;
      result= Power(n1, intexp);
   }
   
   else
   { switch(choice)
   {
    case 1:
    result=sum(n1,n2);
   break;
   case 2:
    result=diff(n1,n2);
   break;
   case 3:
    result=mul(n1,n2);
    break;
    case 4:
    result=divide(n1,n2);
    break;
   
     default: 
         cout<<"Error: invalid output";
         break;
    }  
    }
   cout<<"result of N1 and N2 is "<< result ; }
   else if(dataType == 2)
   { 
      float n1,n2 ,result;
   cout<<"Enter number 1 :";
   cin>>n1;
   cout<<"Enter number 2 :";
   cin>>n2;
   if (choice==5)
   {  
      int intexp;
      cout<<"Enter exponent: ";
      cin>>intexp;
      cout<<"Result: "<<power(n1, intexp)<<endl;
   }
   else
   {  switch(choice){
      case 1:
    result=sum(n1,n2);
   break;
   case 2:
    result=diff(n1,n2);
   break;
   case 3:
    result=mul(n1,n2);
   break;
   case 4:
    result=divide(n1,n2);
       break;
     default: 
         cout<<"Error: invalid output";
         break;
   }   
    
     cout<<"result of N1 and N2 is "<< result ; 
     }
   }
   
   else  if(dataType == 3){
      double n1, n2, result;
   cout<<"Enter number 1 :";
   cin>>n1;
   cout<<"Enter number 2 :";
   cin>>n2;
   if (choice==5)
   {
     int intExp;
      cout<<"Enter exponent: ";
      cin>>intExp;
      cout<<"Result: "<<pow(n1, intExp)<<endl;
   }
   else
   {  switch(choice){
      case 1:
    result=sum(n1,n2); 
     break;
   case 2:
    result=diff(n1,n2);
    break;
   case 3:
    result=mul(n1,n2);
   break;
   case 4:
    result=divide(n1,n2);
       break;
     default: 
         cout<<"Error: invalid output";
         break;
    } 
   
     cout<<"result of N1 and N2 is "<< result ;
   }
   }     
   else {
        cout << "Invalid data type selection!" << endl;
    }   
}
int main()
{  
   calculatorMenu();
   return 0;
}
