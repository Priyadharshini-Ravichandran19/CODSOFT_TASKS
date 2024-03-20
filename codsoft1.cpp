#include<bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int rn=0;
     rn=rand()%100 + 1;//generate a number between 1 to 100(i.e)1 and 100 are inclusive
    int chances=5;
    int c1=0;
    int a=1;

    do
    {
      int n;
      cout<<"Enter the number you guessed between 1 to 100: "<<endl;
      cin>>n;
      cout<<"Chances left: "<<chances<<endl;
      chances--;
      if(n<rn)
      
      {
          cout<<"Your guess is too low . Try with a little larger number"<<endl;
          cout<<endl;
         c1++;
      }
      else if(n>rn)
      {
          cout<<"Your guess is too high . Try with a little lesser number"<<endl;
          cout<<endl;
          c1++;
        }
      else if(rn==n)
      {
      cout<<"Congratulations!! on your correct guess"<<endl;
      cout<<endl;
      a=0;
      }
      if(c1==5&&chances==0)
      {
          cout<<"The random number was"<<" "<<rn<<endl;
          cout<<"Sorry you run out of chances"<<endl;
          cout<<"Better luck next time."<<endl;
          break;
      }
      }while(a==1);
      cout<<"Hope you enjoyed the game!.Thankyou for playing"<<endl;
      cout<<"Exit.";
}

