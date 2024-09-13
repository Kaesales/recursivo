# Funções Recursivas

## O que é uma Função Recursiva?

Uma função recursiva é uma função que se chama a si mesma. A recursão é uma técnica de programação onde um problema é dividido em subproblemas menores e semelhantes, resolvendo-os repetidamente até alcançar uma solução final.

## Como Funciona?

1. **Caso Base**: É a condição que termina a recursão. Sem o caso base, a função se chamaria indefinidamente, causando um erro de estouro de pilha. O caso base define quando a função deve parar de chamar a si mesma e começar a retornar os resultados.

2. **Chamada Recursiva**: A função se chama a si mesma com um problema menor ou diferente a cada chamada. Esta chamada é feita até que o caso base seja alcançado.

## Exemplo de Aplicação

Imagine que você precisa calcular o fatorial de um número, que é o produto de todos os números inteiros positivos menores ou iguais a esse número. A solução recursiva para isso envolve:

- **Caso Base**: O fatorial de 0 ou 1 é 1. Este é o ponto onde a função para de chamar a si mesma.
- **Chamada Recursiva**: A função calcula o fatorial de um número `n` multiplicando `n` pelo fatorial de `n-1`.

## Por que Usar Recursão?

A recursão pode simplificar a solução de problemas complexos que podem ser divididos em problemas menores e semelhantes. Ela é especialmente útil em situações como:

- **Árvores e Estruturas de Dados Hierárquicas**: Navegação em estruturas de árvore, como diretórios de arquivos ou árvores binárias.
- **Problemas de Divisão e Conquista**: Algoritmos que dividem o problema em subproblemas menores, como a ordenação e a busca.
- **Solução de Problemas Matemáticos**: Problemas como cálculo de fatorial, sequência de Fibonacci, entre outros.

## Considerações

Embora a recursão possa tornar o código mais limpo e intuitivo, ela deve ser usada com cuidado:

- **Eficiência**: A recursão pode ser menos eficiente que a iteração em alguns casos, devido ao overhead de chamadas de função e ao uso da pilha de chamadas.
- **Caso Base**: Sempre defina um caso base claro para evitar chamadas recursivas infinitas.

## Conclusão

Funções recursivas são uma ferramenta poderosa na programação, permitindo soluções elegantes para problemas complexos. Entender como e quando usá-las é crucial para aproveitar ao máximo essa técnica.

