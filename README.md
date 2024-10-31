# Algoritmos de Ordenação em C++

Este repositório contém implementações de algoritmos de ordenação em C++: Insertion Sort, Bubble Sort e Selection Sort. O programa permite que o usuário insira uma lista de números e escolhe o algoritmo adequado com base no tamanho da lista.

## Algoritmos Implementados

- **Insertion Sort**: Utilizado para listas pequenas (até 20 elementos).
- **Bubble Sort**: Aplicado a listas de tamanho médio (21 a 30 elementos).
- **Selection Sort**: Utilizado para listas grandes (mais de 30 elementos).

## Funcionalidades

- Solicitação do número de elementos na lista.
- Entrada de valores pelo usuário.
- Exibição da lista original e da lista ordenada.

## Como Compilar e Executar

1. **Compilação**:
   - Certifique-se de ter um compilador C++ (como g++) instalado.
   - Compile o código usando o comando:
     ```bash
     g++ -o ordenacao algoritmos_ordenação.cpp
     ```

2. **Execução**:
   - Execute o programa compilado com:
     ```bash
     ./ordenacao
     ```


### Exemplo Interativo

1. **Entrada do Usuário**:
   - Suponha que o usuário insira `5` para o número de elementos.
   - O programa solicitará os valores um por um:


2. **Saída do Programa**:
   - O programa exibirá a lista original e o algoritmo que será aplicado:


### Observações

- O algoritmo de ordenação utilizado depende do número de elementos inseridos:
  - **Até 20 elementos**: Insertion Sort
  - **21 a 30 elementos**: Bubble Sort
  - **Mais de 30 elementos**: Selection Sort



## Contribuição

Sinta-se à vontade para abrir issues ou enviar pull requests para melhorias.

## Licença

Este projeto está licenciado sob a [MIT License](LICENSE).
