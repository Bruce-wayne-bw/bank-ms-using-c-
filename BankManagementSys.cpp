
#include<iostream>
#include<string>
#include<list>
using namespace std;

struct Bank{
      string name;
     double account_No;
      int aadhar_no;
      float balance=0;
};

int num=0;
list <Bank> i;
 void createAc(){
  Bank j;
  cout<<"\t\tEnter Ac Holder Name : ";
  cin>>j.name;
  j.account_No=431700+num;
  num++;
  cout<<"\t\tEnter Aadhar No : ";
  cin>>j.aadhar_no;
  i.push_back(j);
  cout<<"\t\tAccount Successful Created"<<endl;
}

void Deposite(){
  int res,n=0;
  float deposit;
  cout<<"\t\tEnter Aadhar No"<<endl;
  cin>>res;
  for(Bank &ac: i)
  {
     if(res==ac.aadhar_no)
     {
      n++;
      cout<<"\t\tEnter Money To Deposite"<<endl;
      cin>>deposit;
      ac.balance+=deposit;
      cout<<"\t\tMoney Deposited"<<endl;
     }
  }
  if(n==0)
  {
 cout<<"\t\tAccount Not Matched"<<endl;
  }
}

void Withdraw(){
  int res,n=0;
  float withdraw;
  cout<<"\t\tEnter Aadhar No : ";
  cin>>res;
  for(Bank &ac: i){
     if(res==ac.aadhar_no)  {
      n++;
      if(ac.balance<=100)  {
         cout<<"\t\tYou Have Incuiffect Balance "<<ac.balance<<endl;
      }
      else{
        cout<<"\t\tEnter Money To Withdraw"<<endl;
       cin>>withdraw;
       ac.balance-=withdraw;
        cout<<"\t\tMoney Withdraw"<<endl;
      }
     }
  }
    if(n==0)
  {
 cout<<"\t\tAccount Not Matched"<<endl;
  }
}
void Checkbal()
{
   int res,n=0;
  cout<<"\t\tEnter Aadhar No : ";
  cin>>res;
  cout<<"\t\t----------Account Details----------"<<endl;
  for(Bank &ac: i)
  {
     if(res==ac.aadhar_no)
     {
      n++;
      cout<<"\t\tAc Holder Name : "<<ac.name<<endl;
      cout<<"\t\tAccount No : "<<ac.account_No<<endl;
      cout<<"\t\tAadhar No : "<<ac.aadhar_no<<endl;
      cout<<"\t\tBalance : "<<ac.balance<<endl;
     }
  }
    if(n==0)
  {
 cout<<"\t\tAccount Not Matched"<<endl;
  }
}
void printall()
{
   int n=0,r=0;
  cout<<"\t\t----------All Users Account Details----------"<<endl;
  for(Bank &ac: i)
  {
    n++;
    cout<<"-------- "<<r++<<"th Account Details "<<" --------"<<endl;
      cout<<"Ac Holder Name : "<<ac.name<<endl;
      cout<<"Account No : "<<ac.account_No<<endl;
      cout<<"Aadhar No : "<<ac.aadhar_no<<endl;
      cout<<"Balance : "<<ac.balance<<endl;
  }
  if(n==0)
  {
  cout<<"Account Not Matched"<<endl;
  }
}

int main()
{
          int n;
          cout<<endl;
          cout<<"\t\t-------------Welcome To Bank Management System------------"<<endl<<endl;
          do{
              cout<<"\t\t1. Create A Account"<<endl;
              cout<<"\t\t2. Deposite Money "<<endl;
               cout<<"\t\t3. Withdraw Money "<<endl;
               cout<<"\t\t4. Check Balance"<<endl;
               cout<<"\t\t5. Check All Users Ac Details"<<endl;
              cout<<"\t\t6. Exit"<<endl;
                    cin>>n;
                    switch(n)
                    {
                       case 1: createAc(); break;
                       case 2: Deposite(); break;
                       case 3: Withdraw(); break;
                       case 4: Checkbal(); break;
                       case 5: printall(); break;
                       case 6: return 0; break;
                      default : cout<<"Wrong Key"<<endl;
                      break;
                    }
          }while(n!=0);
}