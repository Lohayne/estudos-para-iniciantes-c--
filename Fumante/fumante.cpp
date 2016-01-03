#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
 main()
 {
       string sn, MA;
       float anos,dias,preco,qgasta,totalmaco,totalcig;
       int cig,maco,meses;
       cout<<"Voce fuma?"<<endl;
       cout<<"Sim ou Não:"<<endl<<endl;
       cin>>sn;
       
        if (sn=="Sim"||sn=="sim")
        {
          cout<<"Você fuma a anos ou meses?"<<endl<<endl;
          cout<<"Digite a letra M para meses."<<endl;
          cout<<"           ou               "<<endl;
          cout<<"Digite a letra A para anos."<<endl<<endl;
          cin>>MA;
          
            if (MA=="M")
            {
            	cout<<"Ha quantos meses você fuma?"<<endl;
            	cin>>meses;
				cout<<"Quantos cigarros você fuma por dia?"<<endl;
          		cin>>cig;
          		cout<<"Qual é o preço do maço do cigarro que voce fuma?"<<endl;
          		cin>>preco; 
          		
          		dias=meses*30;/*Tranforma os meses em dias*/
          		totalcig=dias*cig;/*Multiplica os dias pela quantidade de cigarros que ja fumou na vida*/
          		maco=20;/*Define que um maço tem 20 unidades de cigarro*/
          		totalmaco=totalcig/maco;/*Divide o total de cigarros pela quantidade do maço e 
				                           define o total de maços fumados em todos esses dias*/
          		qgasta=totalmaco*preco;/*Multiplica o total desses maços pelo valor do maço que 
				            a pessoa geralmente fuma e define a quantidade gasta em todos esses dias.*/
          		cout<<"Quantidade de dinheiro gasto com cigarros:"<<qgasta<<endl;
			}
			else
		 	{
          		cout<<"Ha quantos anos voce fuma?"<<endl;
          		cin>>anos;
          		cout<<"Quantos cigarros você fuma por dia?"<<endl;
          		cin>>cig;
          		cout<<"Qual é o preço do maço do cigarro que voce fuma?"<<endl;
          		cin>>preco;
          		
          		dias=anos*365;/*Tranforma os anos em dias*/
          		totalcig=dias*cig;/*Multiplica o+s dias pela quantidade de cigarros que ja fumou na vida*/
          		maco=20;/*Define que um maço tem 20 unidades de cigarro*/
          		totalmaco=totalcig/maco;/*Divide o total de cigarros pela quantidade do maço e 
				                           define o total de maços fumados em todos esses dias*/
          		qgasta=totalmaco*preco;/*Multiplica o total desses maços pelo valor do maço que 
				            a pessoa geralmente fuma e define a quantidade gasta em todos esses dias.*/
				            
          		cout<<"Quantidade de dinheiro gasto com cigarros:"<<qgasta<<endl;
          	 }
          }  
          
          else
            {
				cout<<"Parabéns!"<<endl;
            	cout<<"Você tem um pulmão super saudável! :D"<<endl;
			 
            }
            	getch();
				
}
