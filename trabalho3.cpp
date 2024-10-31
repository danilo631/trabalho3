#include <iostream>

using namespace std;

// Função Insertion Sort para até 20 elementos
void insertionSort(int arr[], int tamanho)
{
    for (int i = 1; i < tamanho; ++i)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Função Bubble Sort para 21 a 30 elementos
void bubbleSort(int arr[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; ++i)
    {
        for (int j = 0; j < tamanho - i - 1; ++j) // Correção: ++j
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Função Selection Sort para mais de 30 elementos
void selectionSort(int arr[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < tamanho; ++j)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    int tamanho;

    // Solicita o número de elementos
    do
    {
        cout << "Digite o número de elementos na lista (positivo): ";
        cin >> tamanho;

        if (tamanho <= 0)
        {
            cout << "Valor incorreto. Digite um número positivo." << endl;
        }
    } while (tamanho <= 0);

    // Cria a lista com o número de elementos informado
    int* arr = new int[tamanho];

    // Entrada dos valores no vetor
    for (int i = 0; i < tamanho; ++i)
    {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Mostra a lista original
    cout << "Lista original: ";
    for (int i = 0; i < tamanho; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Escolhe o algoritmo com base no tamanho da lista
    if (tamanho <= 20)
    {
        cout << "Aplicando Insertion Sort..." << endl;
        insertionSort(arr, tamanho);
    }
    else if (tamanho <= 30)
    {
        cout << "Aplicando Bubble Sort..." << endl;
        bubbleSort(arr, tamanho);
    }
    else
    {
        cout << "Aplicando Selection Sort..." << endl;
        selectionSort(arr, tamanho);
    }

    // Mostra a lista ordenada
    cout << "Lista ordenada: ";
    for (int i = 0; i < tamanho; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // Libera a memória alocada
    return 0;
}
