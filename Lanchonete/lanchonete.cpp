#include<iostream>
#include<conio.h>
using namespace std;
main(){
int cod;
float qtde;
cout<<"----------Menu-----------"<<endl;
cout << "100 - Cachorro quente"<<endl;
cout << "101 - Bauru simples"<<endl;
cout << "102 - Bauru com ovo"<<endl;
cout << "103 - Hamb�rguer"<<endl;
cout << "104 - Cheeseburguer"<<endl;
cout << "105 - Refrigerante lata"<<endl;
cout << "106 - Refrigerante 2,0 Litros"<<endl;
cout<<"----------Menu-----------"<<endl<<endl;
cout<<"Digite c�digo que deseja: "<<endl;
cin>>cod;
cout<<endl;

switch(cod){
case 100: cout << "Pre�o: R$ 05,50"<<endl;break;
case 101: cout << "Pre�o: R$ 10,50"<<endl;break;
case 102: cout << "Pre�o: R$ 12,50"<<endl;break;
case 103: cout << "Pre�o: R$ 06,50"<<endl;break;
case 104: cout << "Pre�o: R$ 07,50"<<endl;break;
case 105: cout << "Pre�o: R$ 03,50"<<endl;break;
case 106: cout << "Pre�o: R$ 06,50"<<endl;break;
default:cout<<"Plano n�o existente";break;}
cout<<endl;
cout<<"Digite Quantidade: ";
cin>>qtde;
cout<<endl;

switch(cod){
case 100: cout << "Valor a ser pago :"<<endl<<" R$ "<<qtde*5.50<<endl;break;
case 101: cout << "Valor a ser pago :"<<endl<<" R$ "<<qtde*10.50<<endl;break;
case 102: cout << "Valor a ser pago :"<<endl<<" R$ "<<qtde*12.50<<endl;break;
case 103: cout << "Valor a ser pago :"<<endl<<" R$ "<<qtde*6.50<<endl;break;
case 104: cout << "Valor a ser pago :"<<endl<<" R$ "<<qtde*7.30<<endl;break;
case 105: cout << "Valor a ser pago :"<<endl<<" R$ "<<qtde*3.50<<endl;break;
case 106: cout << "Valor a ser pago :"<<endl<<" R$ "<<qtde*06.50<<endl;break;
default:cout<<"Plano n�o existente";break;}
cout<<endl;
cout<<"Obrigado, volte sempre!";
getch();
}

