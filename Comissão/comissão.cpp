#include<iostream>
#include<conio.h>
using namespace std;
 main()
 {
       float sf,vendas,co;
       cout<<"Qual e o seu salario fixo?"<<endl;
       cin>>sf;
       cout<<"Valor das vendas efetuadas:"<<endl;
       cin>>vendas;
        if (vendas<=1500)
        { 
         co=vendas*3/100;
           cout<<"Sua comiss�o:"<<co<<endl;
        }
         else if (vendas>1500)
         {
         	co=vendas*5/100;
              cout<<"Sua comiss�o:"<<co<<endl;
         }
         
         
         cout<<"Sal�rio total:"<<co+sf<<endl;
         
         getch();     
  }
         
       
