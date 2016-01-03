#include<iostream>
#include<conio.h>
using namespace std;
main()
{float L1,L2,L3;

	cout<<"Lado 1:"<<endl;
	cin>>L1;
	cout<<endl;
	cout<<"Lado2:"<<endl;
	cin>>L2;
	cout<<endl;
	cout<<"Lado 3:"<<endl;
	cin>>L3;
	cout<<endl;
	
	if (((L2-L3<L1) && (L1<L2+L3))||((L3-L1<L2) && (L2<L3+L1))||((L1-L2<L3) && (L3<L2+L1)))
	{
		cout<<"Este é um Triângulo: "<<endl;
	
		if ((L1==L2) && (L1==L3) && (L2==L3))
		{
			cout<<"Triângulo Equilátero."<<endl;
			cout<<" Ou seja, possui todos os lados iguais.";
		}
	
		else if ((L1==L2) || (L1==L3) || (L2==L3))
		{
			cout<<"Triângulo Isósceles."<<endl;
				cout<<" Ou seja, possui apenas dois lados iguais.";
		}
	
		else 
		{
			cout<<"Triângulo Escaleno."<<endl;
			cout<<" Ou seja, possui todos os lados diferentes.";
		}
	}
	else
	{cout<<"Este não é um triângulo.";}
	getch();}

