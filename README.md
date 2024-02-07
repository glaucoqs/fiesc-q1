O FreeRTOS é um sistema operacional de tempo real voltado para microcontroladores e pequenos microprocessadores. Distribuído gratuitamente sob licença aberta do MIT, possui larga utilização em aplicações com necessidade de múltiplas tarefas a serem executadas e aplicações com criticidade de tempo real [1]. Utilizando a versão do FreeRTOS para computadores (Windows ou Linux), implemente uma aplicação que execute as seguintes tarefas, onde ambas compartilham uma mesma variável do tipo float simulando um valor de temperatura:

Tarefa 1 - leia a variável compartilhada, adicione 1.5 °C ao seu valor, imprima o resultado na serial com uma frequência de 1 Hz e salve a variável com seu novo valor;

Tarefa 2 - leia a variável compartilhada, converta seu valor para Fahrenheit, imprima o resultado na serial com uma frequência de 2 Hz e salve a variável com seu novo valor.

Resolução:

Código desenvolvido e necessário compilação e execução. 

A primeira tarefa, executa a função Tarefa 1 onde acrescenta 1,5 graus Celsius na variável global e persiste seu valor.

A tarefa 2, não exije que o valor final retorne de Fahrenheit para Celsius. Ao ser executada, converte o valor inicial da variavel global e converte para Fahrenheit. 
Ao realizar a tarefa novamente, o valor será convertido e assim por diante, resultando em valores muito altos. Ao final da Tarefa 2, o código para retornar o valor para Celsius está comentado.

Para realizar as Tarafas individualmente, é necessário comentar as linhas 11 ou 12 do arquivo main.c.
