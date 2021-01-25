LISTA-11: (POO)


1 Crie uma classe para representar uma pessoa, com os atributos privados de nome, idade e altura. Crie os métodos públicos necessários para sets e gets e também um método para imprimir os dados de uma pessoa.


2 Crie uma classe denominada Elevador para armazenar as informações de um elevador dentro de um prédio. A classe deve armazenar o andar atual (0=térreo), total de andares no prédio, excluindo o térreo, capacidade do elevador, e quantas pessoas estão presentes nele. 

 A classe deve também disponibilizar os seguintes métodos:
inicializa: que deve receber como parâmetros: a capacidade do elevador e o total de andares no prédio (os elevadores sempre começam no térreo e vazios);
entrada: para acrescentar uma pessoa no elevador (só deve acrescentar se ainda houver espaço);
saida: para remover uma pessoa do elevador (só deve remover se houver alguém dentro dele);
sobe: para subir um andar (não deve subir se já estiver no último andar);
desce: para descer um andar (não deve descer se já estiver no térreo);
get....: métodos para obter cada um dos os dados armazenados.


3 Crie uma classe em C++ chamada Relogio para armazenar um horário, composto por hora, minuto e segundo. A classe deve representar esses componentes de horário e deve apresentar os métodos descritos a seguir:
um método chamado setHora, que deve receber o horário desejado por parâmetro (hora, minuto e segundo);
um método chamado getHora para retornar o horário atual, através de 3 variáveis passadas por referência;
um método para avançar o horário para o próximo segundo (lembre-se de atualizar o minuto e a hora, quando for o caso).


4 Definir uma classe que represente um círculo.
Esta classe deve possuir métodos Privados para:
calcular a área do círculo;
calcular a distância entre os centros de 2 círculos;
calcular a circunferência do círculo.
E métodos Públicos para:
definir o raio do círculo, dado um número real;
aumentar o raio do círculo, dado um percentual de aumento;
definir o centro do círculo, dada uma posição (X,Y);
imprimir o valor do raio;
imprimir o centro do círculo.
imprimir a área do círculo.
Criar um programa principal para testar a classe.


5 Implemente uma televisão. A televisão tem um controle de volume do som e um controle de seleção de canal.
O controle de volume permite aumentar ou diminuir a potência do volume de som em uma unidade de cada vez.
O controle de canal também permite aumentar e diminuir o número do canal em uma unidade, porém, também possibilita trocar para um canal indicado.
Também devem existir métodos para consultar o valor do volume de som e o canal selecionado.
No programa principal, crie uma televisão e troque de canal algumas vezes. Aumente um pouco o volume, e exiba o valor de ambos os atributos.


6 Implemente um condicionador de ar. O condicionador possui 10 potências diferentes. Cada unidade da potência do condicionador diminui a temperatura do ambiente em 1.8oC. A variação que o condicionador consegue causar está no intervalo [0oC - 18oC], ou seja, zero graus de variação quando desligado e dezoito graus de variação quando ligado na potência máxima.
Através de um sensor, o condicionador é informado da temperatura externa. Dada essa temperatura e a potência selecionada, o condicionador calcula e retorna a temperatura do ambiente.
No programa principal, crie dois condicionadores. Informe duas temperaturas externas diferentes para cada um (ex: 25oC e 31o), ajuste o segundo em potência máxima (10) e o primeiro em potência média (5). Finalmente, exiba a temperatura resultante de cada ambiente.


7 Implemente um carro. O tanque de combustível do carro armazena no máximo 50 litros de gasolina. O carro consome 15 km/litro. Deve ser possível:
Abastecer o carro com uma certa quantidade de gasolina;
Mover o carro em uma determinada distância (medida em km);
Retornar a quantidade de combustível e a distância total percorrida.
No programa principal, crie 2 carros. Abasteça 20 litros no primeiro e 30 litros no segundo. Desloque o primeiro em 200 km e o segundo em 400 km. Exiba na tela a distância percorrida e o total de combustível restante para cada um.


8 Faça um programa em C++ que contenha uma classe que representa um funcionário, registrando seu nome, salário e data de admissão. Crie por último uma classe que representa uma empresa, registrando seu nome e CNPJ. Em todas as classes defina os atributos como privados e crie métodos públicos para acessar e modificar os atributos.


9 Finalmente, faça um programa que:
Crie uma empresa;
Adicione a empresa alguns funcionários (solicitar no início quantos);
Dê aumento de 10% a todos os funcionários de um determinado departamento.


10 Modifique o programa anterior para admitir novos tipos de funcionários, os quais serão definidos a partir de novas classes que herdarão da classe original que representa o funcionário. Serão definidas as subclasses para funcionários do tipo Gerente, Analista e Técnico, os quais deverão sobrecarregar os métodos para recuperação de atributos de forma que exibam qual o cargo do usuário consultado (ex. método que recupera nome deve exibir o cargo e depois o nome). O programa anterior deve ser alterado para:
Solicitar o cargo do funcionário adicionado;
Aumentar o salário dos gerentes em 15%
Exibir ao final do cadastro todos os funcionários e suas informações – utilizar técnicas de polimorfismo (funções virtuais).






DESAFIOS:


1 Escreva uma função que, dado duas filas, concatene as duas filas. Retorne a fila concatenada em F1. F2 deve ficar vazia.

.
2 Desenvolva uma operação para transferir elementos de uma pilha P1 para uma pilha P2 (cópia)