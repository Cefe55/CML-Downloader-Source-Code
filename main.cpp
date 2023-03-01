//Header Files
#include<SFML/Network.hpp>
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<windows.h>
#include<ctime>
#include"Header/ConsoleColor.h"
#include"Header/Server_ Information.h"
#include"Header/code.h"
using namespace std;

void codecrate()
{
  
    int max = 25;
    int min = 1;

    char Alfabe[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    
    srand(time(0));
        harf1=Alfabe[rand() %(max-min+1)+min];
        harf2=Alfabe[rand() %(max-min+1)+min];
        harf3=Alfabe[rand() %(max-min+1)+min];
        harf4=Alfabe[rand() %(max-min+1)+min];
        let1=harf1+harf2+harf3+harf4;
        
       Sleep(1000);
        srand(time(0));
        harf1=Alfabe[rand() %(max-min+1)+min];
        harf2=Alfabe[rand() %(max-min+1)+min];
        harf3=Alfabe[rand() %(max-min+1)+min];
        harf4=Alfabe[rand() %(max-min+1)+min];
        let2=harf1+harf2+harf3+harf4;
        
       Sleep(1000);

         srand(time(0));
        harf1=Alfabe[rand() %(max-min+1)+min];
        harf2=Alfabe[rand() %(max-min+1)+min];
        harf3=Alfabe[rand() %(max-min+1)+min];
        harf4=Alfabe[rand() %(max-min+1)+min];
        let3=harf1+harf2+harf3+harf4;
        
        Sleep(1000);

         srand(time(0));
        harf1=Alfabe[rand() %(max-min+1)+min];
        harf2=Alfabe[rand() %(max-min+1)+min];
        harf3=Alfabe[rand() %(max-min+1)+min];
        harf4=Alfabe[rand() %(max-min+1)+min];
        let4=harf1+harf2+harf3+harf4;
        
        givencode = let1+"-"+let2+"-"+let3+"-"+let4;
}


int main()
{
  string code;
    system("title <Your App Name>");//Rename Console
    sf::Ftp ftp;
    string Process="";
    cout<<"Connecting..."<<endl;


    ftp.connect(Server_IP,port,sf::seconds(5));//Connection Code

    
    if(ftp.login().isOk())//Checking Connection Success
    {
        cout<<green<<"Connected"<<endl;//Message to Show If Connection Is Successful
          
          
          
          for(int a=0;a<5;a++)
          {
            cout<<" "<<endl;
          }
              cout<<"Please Select The Action You Want To Take:"<<endl;
               
               
               
               cout<<"File Download"<<endl;
               cout<<"File Upload"<<endl;
               cin>>Process;
                   
                   if(Process == "Download"||Process == "download"||Process =="DOWNLOAD")
                   {
                      cout<<"Please Enter Code:"<<endl;
                      cin>>code;
                   }
                   else
                   {
                      if(Process == "Upload"||Process == "upload"||Process == "UPLOAD")
                      {

                      }
                      else
                      {
                        cout<<red<<"We're Sorry, But You May Have Selected a Transaction That Doesn't Exist"<<endl;
                      }
                   }








    }
    else
    { 
       cout<<red<<"Connect Error"<<endl;//Message to Display If Connection Failed
    }
    
    getch();
    return 0;
}