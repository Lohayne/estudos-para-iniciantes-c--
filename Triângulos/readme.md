##Tri�ngulos

� pedido os 3 lados de um tri�ngulo e feito o teste dizendo se o tri�ngulo � Equil�tero, Is�sceles ou Escaleno.

Primeiro � solicitado os 3 lados e testado se ele � um tri�ngulo, da seguinte forma:

  Lado2 - Lado3 < Lado1  E  Lado1 < Lado2 +Lado3   OU   Lado3 - Lado1 < Lado2  E  Lado2 < Lado3 + Lado1   OU   Lado1 - Lado2 < Lado3  E  Lado3 < Lado2 + Lado1

Se essa condi��o for verdadeira s�o feitos os seguintes testes:

* Se Lado1==Lado2 E Lado1==L3 E Lado2==Lado3  <- Equil�tero;

* Se Lado1==Lado2 OU Lado1==Lado3 OU Lado2==Lado3  <- Is�sceles;

* Se os testes anteriores derem falso o tri�ngulo ter� todos os lados diferentes, sendo ent�o um Escaleno.

E se a primeira condi��o do programa der falso, o mesmo n�o � um tri�ngulo.