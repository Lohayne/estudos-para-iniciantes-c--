#include<iostream>
#include<conio.h>
using namespace std;
main()
{float trab,ava,exame,media;
cout<<"Valor do trabalho de laboratório: 10 pontos."<<endl;
cout<<"Valor da Avaliação semestral: 10 pontos."<<endl;
cout<<"Valor do Exame final: 10 pontos."<<endl;
cout<<endl; /*Para pular uma linha*/
cout<<"Sua nota do trabalho de laboratório:"<<endl;
cin>>trab;

if (trab<0 || trab>10)
{
	cout<<"Nota inválida!";
}

cout<<"Sua nota da avaliação semestral:"<<endl;
cin>>ava;

if (ava<0 || ava>10)
{
	cout<<"Nota inválida!";
}

cout<<"Sua nota do Exame final:"<<endl;
cin>>exame;

if (exame<0 || exame>10)
{
	cout<<"Nota inválida!";
}

media=(trab+ava+exame)/3;

 if (media<5)
  {
 	 cout<<"Conceito E!"<<endl;
  }
  
  else if ((media>=5) && (media<6))
  {
  	cout<<"Conceito D!"<<endl;
  }
  
 else if ((media>=6) && (media<7))
  {
  	cout<<"Conceito C!"<<endl;
  }
  
 else if ((media>=7) && (media<8))
  {
  	cout<<"Conceito B!"<<endl;
  }
  
 else if ((media>=8) && (media<=10))
  {
  	cout<<"Conceito A!"<<endl;
  }
  
  cout<<endl;
  
  cout<<"Média:"<<media<<" pontos.";
  
getch();} 
