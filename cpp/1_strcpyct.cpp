#include<iostream>
#include<cstring>
using namespace std;
class my_string{
   private:
           char str[30];
   public:
          void getdata();
          void display();
          void operator=(my_string str1);
          void operator+ (my_string str1);
         };
void my_string::getdata()
{
  cout<<"\nEnter the string : ";
  cin>>str;
}
void my_string::display()
{
   cout<<"\n"<<str;
}

void my_string::operator= (my_string str1)
{
   strcpy(str1.str,str);
   cout<<"\n\tCopied String is : "<<str1.str;
}
void my_string::operator+ (my_string str1)
{
   strcat(str,str1.str);
   cout<<"\n\t--String After Concat is : "<<str;
}
int main()
{
    int opt,opt1=1;
    my_string a,b;
	
    while(opt1==1 && opt!=3)
	{
    cout<<"\n\t\t\t---MainMenu---\n\t1.String Copy\n\t2.Concat";
    cout<<"\n\t3.Exit\n\t\t--Enter your choice-->";
    cin>>opt;
     switch(opt)
       {
            case 1:
                       a.getdata();
                       a=b;
                       break;
             case 2:  
                      cout<<"\nEnter the 1st string-\n";
                      a.getdata();
                      cout<<"\nEnter the 2nd string-\n";
                      b.getdata();					 
                     a+b;  
                     break;
    
              case 3: return 0;
			 
			 default: cout<<"Invalid choice..try again\n";
      } 
      if(opt!=3)
      {
       cout<<"\n\n\tDo you want to continue(Press 1 to continue)";
       cin>>opt1; 
      }
     }

    return 0;
}