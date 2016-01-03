##Triângulos

É pedido os 3 lados de um triângulo e feito o teste dizendo se o triângulo é Equilátero, Isósceles ou Escaleno.

Primeiro é solicitado os 3 lados e testado se ele é um triângulo, da seguinte forma:

  Lado2 - Lado3 < Lado1  E  Lado1 < Lado2 +Lado3   OU   Lado3 - Lado1 < Lado2  E  Lado2 < Lado3 + Lado1   OU   Lado1 - Lado2 < Lado3  E  Lado3 < Lado2 + Lado1

Se essa condição for verdadeira são feitos os seguintes testes:

* Se Lado1==Lado2 E Lado1==L3 E Lado2==Lado3  <- Equilátero;

* Se Lado1==Lado2 OU Lado1==Lado3 OU Lado2==Lado3  <- Isósceles;

* Se os testes anteriores derem falso o triângulo terá todos os lados diferentes, sendo então um Escaleno.

E se a primeira condição do programa der falso, o mesmo não é um triângulo.