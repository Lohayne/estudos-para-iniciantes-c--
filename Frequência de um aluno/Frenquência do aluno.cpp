#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
main()
{char nome[30]; float media; int freq;

cout<<"Informe seu Nome:"<<endl;
cin>>nome;

cout<<"Informe sua M�dia:"<<endl;
cin>>media;

cout<<"Informe sua Frenqu�ncia:"<<endl;
cin>>freq;

cout<<endl; cout<<endl;


 if ((freq>=75) && (media>=6))
   {
   	cout<<nome <<" Voc� est� Aprovado!"<<endl;
   }
   
 else if ((freq<75) && (media<6))
  {
  	cout<<endl;
    cout<<nome<<" Voc� est� Reprovado!"<<endl;
    cout<<"M�dia abaixo 6:"<<media<<endl;
    cout<<"Frenqu�ncia abaixo 75%:"<<freq<<endl;
  }
  
 else if ((freq>=75) && (media<6))
  {
  	cout<<nome <<" Voc� est� Reprovado!"<<endl;
    cout<<"M�dia abaixo de 6:"<<media<<endl;
  }
  
  else if ((freq<75) && (media>=6))
  {
  	cout<<"Voc� est� Reprovado!"<<endl;
  	cout<<"Frequ�ncia abaixo de 45%.";
  }
  

getch;}
