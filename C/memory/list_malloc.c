#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //malloc way to create an array
    int *list; //criando uma variável cujo valor é o endereço de um inteiro

    list = malloc(3*sizeof(int));//(back to back) //atribuindo o endereço de uma alocação tripla à variável list
    //note: array is actually a point for the first element address (the '[0]')
    if (list == NULL) // se a lista não possui um endereço para apontar, então deu errado a alocação
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        //limpar sempre dps de usar o malloc e antes de terminar (return) a função
        free(list);
        return 1;
    }

    if (tmp == list)
    {

        for (int i = 0; i < 3; i++)
        {
            printf("if %i %i\n", list[i], tmp[i]);
        }

        list = NULL;
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            printf("else %i %i\n", list[i], tmp[i]);
        }
        free(list);
    }

    tmp[3] = 4;



    //printf("%i\n", list[i]);

    // Se você realocou a lista para tmp e limpou a lista, mas ainda está usando
    // o ponteiro "list" em um printf, é possível que o código esteja acessando a
    // posição de memória que "list" aponta, mesmo que essa posição de memória tenha
    // sido liberada ou sobrescrita pelo realloc.

    // Isso é um comportamento inesperado e pode causar problemas de segurança e estabilidade,
    // porque você estaria acessando uma posição de memória que não tem acesso e talvez possa
    // conter lixo ou até mesmo uma informação que pode danificar a execução do programa.

    // Para evitar esse problema, uma boa prática é garantir que você esteja sempre usando o
    // ponteiro correto e atualizado após qualquer operação de alocação de memória. Neste caso
    // você deveria estar usando tmp e não list para acessar o valor que foi alocado recentemente.



    for (int i = 0; i < 4; i++)
    {
        printf("IGNORE%i\n", tmp[i]);
    }
    //free(list);

}
