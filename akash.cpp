#include <iostream>
using namespace std;
int sum(int a,int b) // function example
{
   // int c;
  //  c=a+b;
   // return c;

}



int main()


{
    // cout<<"hello world";
    // short sa=40;
    // cout<<sa;

    /*camelcase notation
     int marksInMaths=85;
     cout<<"the marks in maths of student rahul "<<marksInMaths;*/
    
   /*int a; // sum , difference , multiply and divide of two numbers
    float b;
    cout<<"enter a number"<<endl;
    cin>>a;
     cout<<"enter b number"<<endl;
     cin>>b;
     cout<<"a+b "<< a+b<<endl;
     cout<<"a-b "<< a-b<<endl;
     cout<<"a*b "<< a*b<<endl;
     cout<<"a/b "<< a/b<<endl; */

    /* int age; // if else if statement example 
     cout<<"enter your age"<<endl;
     cin>>age;
    if (age>150 || age<1)        
    {
        cout<<"invalid age"<<endl;

    } else if (age>=18)
    {
       cout<<" you are elligable for vote"<<endl;
    }
    
    
    else{
        cout<<"you are not elligable for vote"<<endl;
    }*/

    /* int age ; switch case statement example
     cout<<"enter your age"<<endl;
     cin>>age;
     switch (age)  
     {
     case 12:
         cout<<"you are 12 year old";
        break;
        case 18:
         cout<<"you are 18 year old";
        break;
        case 20:
         cout<<"you are 20 year old";
        break;
        case 25:
         cout<<"you are 25 year old";
        break;
     
     default:
     cout<<"age not mentiond";
        break;
     } */   
    
// loops exampla
   /* int  a,b=1;// multiplication table any table like 2,4,8....etc
    cout<<"enter a number "<<endl;
     cin>>a;
     cout<<endl;

     
    do
    {
        cout<< a*b <<endl;
        b=b+1;


    } while (b<=10);*/

   /* int a; // counting start user need to 100 (under 100)
    cout<<"enter a number"<<endl;
    cin>>a;
    cout<<endl;
    
    while(a<=100)
    {
        cout<<a+1<<endl;
        a=a+1;
    }*/
    
     /*int a,b=0;// counting start with 0 to user need 
    cout<<"enter a number"<<endl;
    cin>>a;
    cout<<endl;
    do
    {
        cout<<b<<endl;
        b=b+1;
    } while (b<=a);*/
    
  /*  int a; // using foor loop print a table
    cout<<"enter a number"<<endl;
    cin>>a;


    for ( int i=1;i<=10; i++)
    {
        cout<<a*i<<endl;
    }
        */
    
//int a,b; // function program 
//cout<<"enter a number"<<endl;
//cin>>a;
//cout<<"enter b number"<<endl;
//cin>>b;
//cout<<"the function return is "<<sum(a,b);
  
  
   // int arr[5]={1 ,5, 7 ,4 ,6};
// array index={0  1  2  3   4 }
//cout<<arr[4];
/*int marks[7];
for (int i = 1; i <=6; i++)
{
    cout<<"enter the marks of"<<i<<"th student"<<endl;
    cin>>marks[i];

}
for (int i = 1; i <=6; i++){
cout<<" marks is"<<i<<"th student is "<<marks[i]<<endl;}




       return 0;*/


      /* int a,sum; // sum od digits code
       sum=0;
       cout<<"enter a number";
       cin>>a;
       while (a>0)
       {
        sum=sum+(a%10);
        a=a/10;
       }
       cout<<"sum of digits" <<sum; */
       

     /*  int a,b,c; // factorial of a number 
       a=1;
       b=1;
       cout<<"enter a number =";
       cin>>c;
       while ( b<=c)
       {
        a=a*b;
        b=b+1;
       }
       cout<<"factorial is "<<a; */
     
       
   /* int a,b,c,n; // fibonacci series
    a=0;
    b=1;
    cout<< "enter number of terms";
    cin>>n;
    for (int i = 0; i<n; i++)
    {
         cout<<a<<" ";
        c=a+b;
    a=b;
    b=c;
    
 } */
    

/* char ch; // FIND CHARACTER IS UPPER CASR OR LOWER CASE // (A-Z = 67-90) (a-z = 97-122) =ASCII VALUE
 cout<<"enter character";
 cin>>ch;
 if (ch>=67&& ch<=90) // implicit type conversion
 {
    cout<<"the character is UPER  case";
 }else
 cout<<"the character is LOWER  case"; */
 

 /*int n; // print a number positive or negative
 cout<<"enter a number";
 cin>>n;
 cout<<(n>=0? "positive":"negative"); // ternary statement */

// square star pattern :
/*int a;
cout<<"enter the number of line";
cin>>a;
for ( int i = 1; i <=a; i++){
    int b=5;
    for ( int j= 1; j <=b; j++)
    {
        cout<<"*"<<" ";
    }
     cout<<endl;
}
return 0;*/
 
// Square pattern 
/*int n=4;

for (int i = 1; i <=n; i++){

    for (int j = 1; j<=n; j++){
        cout<<j<<" ";
         }
    cout<<endl;
    }
return 0;*/

/*int n=4;
// OR
for (int i = 0; i <n; i++){
    char ch='A'; 
    for (int j = 0; j<n; j++){
        cout<<ch<<" ";
         ch=ch+1;
         }
    cout<<endl;
    }
return 0;*/


/*int n=3,num=1;
for (int i = 0; i <n; i++){

    for (int j = 0; j < n; j++)
    {
        cout<<num<<" ";
        num++;
    }
    
    
    cout<<endl;
}
return 0;*/

/*int n=5;
char ch='A';
for (int i = 0; i <n; i++){

    for (int j = 0; j < n; j++)
    {
        cout<<ch<<" ";
        ch++;
    }
    
    
    cout<<endl;
}
return 0;*/

// right triangle pattern
/*int n=4;
for (int i = 0; i < n; i++){
    
    for (int j = 0; j <i+1; j++)
    {
        cout<<"*"<<" ";
    }
    cout<<endl;
    
}
return 0;*/
//   OR
/*int n=4;
for (int i = 0; i < n; i++){
    
    for (int j = 0; j <i+1; j++)
    {
        cout<<i+1<<" ";
    }
    cout<<endl;
    
}
return 0;*/

// OR
/*int n=5;

    for (int i = 0; i < n; i++){
        
        for (int j = 0; j < i+1; j++){
    
        // char ch='A';
         cout<<char('A'+i)<<" ";
        

        }
        cout<<endl;

    }

return 0;*/
}







    