#include <iostream>
 char j;
 char k; 
 using namespace std;
 
 
  void sum() {

int sum = 0;
int n1,n2;
cout<<"[Addition]\n\n";
cout<<"Enter two numbers\n";
cout<<"input first number :";
	cin>>n1;
cout<<"input second number:";
	cin>>n2; 
  sum=n1+n2;
	cout<<"\nsum: "<< sum<<endl<<endl;
	system("pause");
}


void diff() { 
int diff; 
int n1,n2;
cout<<"[Subtraction]\n\n";
cout<<"Enter two numbers\n"; 
cout<<"\ninput first number:";
  cin>>n1; 
 cout<<"input second number:";
  cin>>n2; 
  
  diff=n1-n2; 
  cout<<"\ndifference :"<<diff<<endl<<endl; 
  system("pause");
  }


void pro()
{
 int pro=1;
 int n1,n2;
 cout<<"[Multiplication]\n\n";
 cout<<"Enter two numbers\n"; 
 cout<<"\ninput first number:";
	cin>>n1; 
 cout<<"input second number:";
  	cin>>n2; 

 pro=n1*n2;
    
 cout<<"\nproduct:"<<pro<<endl<<endl; 
   system("pause"); 
 }
 
 
 
void div() 
{ int div; 
int n1; 
int n2;
 
 cout<<"enter 2 numbers to find their quotient\n"; 
 cout<<"input numerator:";
 	cin>>n1;
 cout<<"input denominator:"; 
 	cin>>n2; div=n1/n2; 
 cout<<"\nquotient:"<<div<<endl<<endl;
 system("pause"); 
}



int main() {
char k;

do
{

                  
cout<<"-------CALCULATOR---------\n"
           "[0]-Exit\n"
           "[1]-Addition\n"
           "[2]-Subtraction\n"
           "[3]-Multiply\n"
           "[4]-Divide\n"
           "------------------\n";
          
          
cout<<"Choose number:";
cin>> j;

switch(j)
{
          case '1':
          sum();
          
          break;
          case '2':
          diff();
          break;
          case '3':
          pro();
          break;
          case '4':
          div();
          break;
          case '0':
          cout<<"programmed by:Kirvey Balansag"  ;
          exit(0);    
          default:
          cout<<"invalid input\n"  ;
          system("pause");
          system("cls");
} 

   system("cls");                                                                 
cout<<"Do you want to try again? Y / N ;";
    cin>> k;
    system("cls");
    if (k=='n'||k=='N')
{
cout<<"\n\n\nprogram,terminated.....";
}

}while(k=='y'||k=='Y');
                
            
}

