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
		cout<<"Este � um Tri�ngulo: "<<endl;
	
		if ((L1==L2) && (L1==L3) && (L2==L3))
		{
			cout<<"Tri�ngulo Equil�tero."<<endl;
			cout<<" Ou seja, possui todos os lados iguais.";
		}
	
		else if ((L1==L2) || (L1==L3) || (L2==L3))
		{
			cout<<"Tri�ngulo Is�sceles."<<endl;
				cout<<" Ou seja, possui apenas dois lados iguais.";
		}
	
		else 
		{
			cout<<"Tri�ngulo Escaleno."<<endl;
			cout<<" Ou seja, possui todos os lados diferentes.";
		}
	}
	else
	{cout<<"Este n�o � um tri�ngulo.";}
	getch();}

