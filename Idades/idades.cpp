#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
 main()
 {int ct,du,id1,id2,id170=0,id270=0,id118=0,id218=0,id12=0;
  ct=1;
  du=1;
  while (ct<=10)
  {cout<<"Dupla "<<du<<":"<<endl;
   cout<<"Primeira idade:"<<endl;
   cin>>id1;
   cout<<"Segunda idade:"<<endl;
   cin>>id2;
   cout<<endl;
    if (id1>=70)
    {id170;}
    if (id2>=70)
    {id270;}
    if (id1<18)
    {id118;}
    if (id2<18)
    {id218;}
    if (id1>=id2)
    {id12;}
    ct++;
    du++;
}
    cout<<"Pessoas com mais de 70 anos:"<<id170+id270<<endl;
    cout<<"Menores de idade:"<<id118+id218<<endl;
    cout<<"Primeiras idades maiores que as segundas:"<<id12<<endl;
    getch(); 
 }
