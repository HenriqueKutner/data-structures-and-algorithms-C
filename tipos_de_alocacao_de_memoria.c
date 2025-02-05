/*
Esquema de memória

 - Alocaçao estática

    O espaço para as variáveis sao reservados no início da execuçao

    O size of da stack é bem menor do que o size of da heap
    stack < heap
    heap > stack

    Na stack são guardados valores estáticos
    Toda variável declarada é alocada na memória stack.
    Após a FUNÇÃO terminar, o SO desaloca tudo.

- Alocação dinâmica

    O espaço é alocado dinamicamente durante a execuçao do programa.
    Pode ser criada ou eliminada durante a execucao do programa.
    Libraçao feita MANUALMENTE pelo programador.
    Sao alocadas na Heap (free store) da memória ram.
    Quando o programa acaba, tudo é desalocado (estática e dinamica)

    'Dar overflow' estourar a memória.

    -  malloc
        malloc = Memory allocation = malloc
        Aloca um bloco de bytes consecutivos na heap e devolve o 
        endereço base desse bloco alocado.
        n*sizeof(tipo): Quant. de elementos que quero alocar
                        multiplicado pelo tamanho do tipo.
        (tipo*) = Isso nao é necessário colocar e está aqui somente para 
                  demonstrar que isso aqui malloc(n*sizeof(tipo)) vai retornar
                  um endereço da base da posiçao, ou seja, vai retornar um
                  ponteiro
        tipo* v = (tipo*)malloc(n*sizeof(tipo));
                optional 
        float*v = (float*)malloc(5*sizeof*(float));
        Todas as vaiáveis sao alocadas na stack
        Digamos que esse `v` retornará o endereço de memória H200
        Esse H200 será armazenado em um endereço de momória na stack
        ex. S100[h200] e ele irá apontar para o endereco base de um bloco
        de memoria na heap

        O ponteiro é alocado na stack

    - calloc


    Memória dinamica é utilizada quando nao se sabe ao certo
    o quanto de memória será necessário para o armazenamento de 
    elementos. 
    Quando usamos por exemplo o scanf() que é uma funçao que le inputs, 
    esse valor sera armazenado dinamicamente pois esta sendo lido em 
    runtime

*/