#include<iostream>
#include<conio.h>
using namespace std;
main()
{float trab,ava,exame,media;
cout<<"Valor do trabalho de laborat�rio: 10 pontos."<<endl;
cout<<"Valor da Avalia��o semestral: 10 pontos."<<endl;
cout<<"Valor do Exame final: 10 pontos."<<endl;
cout<<endl; /*Para pular uma linha*/
cout<<"Sua nota do trabalho de laborat�rio:"<<endl;
cin>>trab;

if (trab<0 || trab>10)
{
	cout<<"Nota inv�lida!";
}

cout<<"Sua nota da avalia��o semestral:"<<endl;
cin>>ava;

if (ava<0 || ava>10)
{
	cout<<"Nota inv�lida!";
}

cout<<"Sua nota do Exame final:"<<endl;
cin>>exame;

if (exame<0 || exame>10)
{
	cout<<"Nota inv�lida!";
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
  
  cout<<"M�dia:"<<media<<" pontos.";
  
getch();} 
