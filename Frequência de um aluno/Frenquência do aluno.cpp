#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
main()
{char nome[30]; float media; int freq;

cout<<"Informe seu Nome:"<<endl;
cin>>nome;

cout<<"Informe sua Média:"<<endl;
cin>>media;

cout<<"Informe sua Frenquência:"<<endl;
cin>>freq;

cout<<endl; cout<<endl;


 if ((freq>=75) && (media>=6))
   {
   	cout<<nome <<" Você está Aprovado!"<<endl;
   }
   
 else if ((freq<75) && (media<6))
  {
  	cout<<endl;
    cout<<nome<<" Você está Reprovado!"<<endl;
    cout<<"Média abaixo 6:"<<media<<endl;
    cout<<"Frenquência abaixo 75%:"<<freq<<endl;
  }
  
 else if ((freq>=75) && (media<6))
  {
  	cout<<nome <<" Você está Reprovado!"<<endl;
    cout<<"Média abaixo de 6:"<<media<<endl;
  }
  
  else if ((freq<75) && (media>=6))
  {
  	cout<<"Você está Reprovado!"<<endl;
  	cout<<"Frequência abaixo de 45%.";
  }
  

getch;}
