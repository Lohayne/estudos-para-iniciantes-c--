#include<iostream>
#include<conio.h>
using namespace std;
main()
{
      float p1,p2,p3,media,final,exame;
      cout<<"Valor da prova 1:"<<endl;cin>>p1;cout<<endl;
      cout<<"Valor da prova 2:"<<endl;cin>>p2;cout<<endl;
      cout<<"Valor da prova 3:"<<endl;cin>>p3;cout<<endl;
      cout<<endl;
      media=(p1+p2+p3)/3;
      
      if (media<3)
      	{
	  		cout<<"Reprovado.";
	  	}
		  	
        else if (media>=3 && media<7)
        {
	    	cout<<"Você fez exame de Recuperação:"<<endl<<endl;
       	   	cout<<"Nota do exame:";cin>>exame;cout<<endl;;
        	final=media+exame/2;
	    
	  
      	  	if (final<5)
     	   	{
	  	    	cout<<"Reprovado.";
	  	   	}
	  
    	   	else if (final>=5)
     	    {
	  	    	cout<<"Aprovado.";
	       	}
	       	
	    }
	       	
	    else if (media>=7)
      {
	  	cout<<"Aprovado.";
	  }
	   
	 
      getch();
      
      }
