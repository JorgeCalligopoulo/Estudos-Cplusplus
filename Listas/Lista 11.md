LISTA-11: (POO)


1 Crie uma classe para representar uma pessoa, com os atributos privados de nome, idade e altura. Crie os m�todos p�blicos necess�rios para sets e gets e tamb�m um m�todo para imprimir os dados de uma pessoa.


2 Crie uma classe denominada Elevador para armazenar as informa��es de um elevador dentro de um pr�dio. A classe deve armazenar o andar atual (0=t�rreo), total de andares no pr�dio, excluindo o t�rreo, capacidade do elevador, e quantas pessoas est�o presentes nele. 

 A classe deve tamb�m disponibilizar os seguintes m�todos:
inicializa: que deve receber como par�metros: a capacidade do elevador e o total de andares no pr�dio (os elevadores sempre come�am no t�rreo e vazios);
entrada: para acrescentar uma pessoa no elevador (s� deve acrescentar se ainda houver espa�o);
saida: para remover uma pessoa do elevador (s� deve remover se houver algu�m dentro dele);
sobe: para subir um andar (n�o deve subir se j� estiver no �ltimo andar);
desce: para descer um andar (n�o deve descer se j� estiver no t�rreo);
get....: m�todos para obter cada um dos os dados armazenados.


3 Crie uma classe em C++ chamada Relogio para armazenar um hor�rio, composto por hora, minuto e segundo. A classe deve representar esses componentes de hor�rio e deve apresentar os m�todos descritos a seguir:
um m�todo chamado setHora, que deve receber o hor�rio desejado por par�metro (hora, minuto e segundo);
um m�todo chamado getHora para retornar o hor�rio atual, atrav�s de 3 vari�veis passadas por refer�ncia;
um m�todo para avan�ar o hor�rio para o pr�ximo segundo (lembre-se de atualizar o minuto e a hora, quando for o caso).


4 Definir uma classe que represente um c�rculo.
Esta classe deve possuir m�todos Privados para:
calcular a �rea do c�rculo;
calcular a dist�ncia entre os centros de 2 c�rculos;
calcular a circunfer�ncia do c�rculo.
E m�todos P�blicos para:
definir o raio do c�rculo, dado um n�mero real;
aumentar o raio do c�rculo, dado um percentual de aumento;
definir o centro do c�rculo, dada uma posi��o (X,Y);
imprimir o valor do raio;
imprimir o centro do c�rculo.
imprimir a �rea do c�rculo.
Criar um programa principal para testar a classe.


5 Implemente uma televis�o. A televis�o tem um controle de volume do som e um controle de sele��o de canal.
O controle de volume permite aumentar ou diminuir a pot�ncia do volume de som em uma unidade de cada vez.
O controle de canal tamb�m permite aumentar e diminuir o n�mero do canal em uma unidade, por�m, tamb�m possibilita trocar para um canal indicado.
Tamb�m devem existir m�todos para consultar o valor do volume de som e o canal selecionado.
No programa principal, crie uma televis�o e troque de canal algumas vezes. Aumente um pouco o volume, e exiba o valor de ambos os atributos.


6 Implemente um condicionador de ar. O condicionador possui 10 pot�ncias diferentes. Cada unidade da pot�ncia do condicionador diminui a temperatura do ambiente em 1.8oC. A varia��o que o condicionador consegue causar est� no intervalo [0oC - 18oC], ou seja, zero graus de varia��o quando desligado e dezoito graus de varia��o quando ligado na pot�ncia m�xima.
Atrav�s de um sensor, o condicionador � informado da temperatura externa. Dada essa temperatura e a pot�ncia selecionada, o condicionador calcula e retorna a temperatura do ambiente.
No programa principal, crie dois condicionadores. Informe duas temperaturas externas diferentes para cada um (ex: 25oC e 31o), ajuste o segundo em pot�ncia m�xima (10) e o primeiro em pot�ncia m�dia (5). Finalmente, exiba a temperatura resultante de cada ambiente.


7 Implemente um carro. O tanque de combust�vel do carro armazena no m�ximo 50 litros de gasolina. O carro consome 15 km/litro. Deve ser poss�vel:
Abastecer o carro com uma certa quantidade de gasolina;
Mover o carro em uma determinada dist�ncia (medida em km);
Retornar a quantidade de combust�vel e a dist�ncia total percorrida.
No programa principal, crie 2 carros. Abaste�a 20 litros no primeiro e 30 litros no segundo. Desloque o primeiro em 200 km e o segundo em 400 km. Exiba na tela a dist�ncia percorrida e o total de combust�vel restante para cada um.


8 Fa�a um programa em C++ que contenha uma classe que representa um funcion�rio, registrando seu nome, sal�rio e data de admiss�o. Crie por �ltimo uma classe que representa uma empresa, registrando seu nome e CNPJ. Em todas as classes defina os atributos como privados e crie m�todos p�blicos para acessar e modificar os atributos.


9 Finalmente, fa�a um programa que:
Crie uma empresa;
Adicione a empresa alguns funcion�rios (solicitar no in�cio quantos);
D� aumento de 10% a todos os funcion�rios de um determinado departamento.


10 Modifique o programa anterior para admitir novos tipos de funcion�rios, os quais ser�o definidos a partir de novas classes que herdar�o da classe original que representa o funcion�rio. Ser�o definidas as subclasses para funcion�rios do tipo Gerente, Analista e T�cnico, os quais dever�o sobrecarregar os m�todos para recupera��o de atributos de forma que exibam qual o cargo do usu�rio consultado (ex. m�todo que recupera nome deve exibir o cargo e depois o nome). O programa anterior deve ser alterado para:
Solicitar o cargo do funcion�rio adicionado;
Aumentar o sal�rio dos gerentes em 15%
Exibir ao final do cadastro todos os funcion�rios e suas informa��es � utilizar t�cnicas de polimorfismo (fun��es virtuais).






DESAFIOS:


1 Escreva uma fun��o que, dado duas filas, concatene as duas filas. Retorne a fila concatenada em F1. F2 deve ficar vazia.

.
2 Desenvolva uma opera��o para transferir elementos de uma pilha P1 para uma pilha P2 (c�pia)