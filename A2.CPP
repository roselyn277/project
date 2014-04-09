#include<iostream.h>
#include<conio.h>
jayson monforte vacaro ;alksjdf;lkajsd;klfjasd
void evenOdd(int num[]);

void main()
{clrscr();
 int array1[10];
  for(int i=0;i<10;i++)
   {
    cout<<"Enter Number "<<i+1<<": ";
    cin>>array1[i];
   }

  evenOdd(array1);
getch();
}

void evenOdd(int num[])
{
 int odd=0, even=0;
  for(int x=0;x<10;x++)
  {
    if(num[x]%2==0)
    {
    even++;
    }
    else if(num[x]%2==1)
    {
    odd++;
    }
    else
    {
    cout<<"Invalid Input";
    }

  }
  cout<<"\n\n**************************\n";
  cout<<"\nNumber of Even Numbers: "<<even;
  cout<<"\nNumber of Odd Numbers:  "<<odd;
}
