# Exercício 12

As respostas estão presentes nos tópicos:
- Exemplo

---

1. **Sobre a seguinte estrutura:**

    ```c
    typedef struct Aluno {
        char nome[100];
        int faltas;
        float nota;
    } aluno_t;
    ```

    Crie um programa em C que carregue dinamicamente (via malloc) um    novo aluno, carregue os dados dele e
    exiba em um printf. Apresente também se ele foi ou não aprovado.

    - Resposta em código

2. **Acerca de alocação dinâmica de memória**

    Responda:

    a) Qual o comportamento da função $free$?
    - A função free libera a memória previamente alocada dinamicamente. Isso torna o espaço de memória disponível novamente para o sistema operacional.

    b) Após chamar $free$, o ponteiro pode ser utilizado?
    - Após chamar free, o ponteiro torna-se NULL e não deve ser utilizado, pois a área de memória para a qual ele apontava já não é mais válida. 

    c) O que causa vazamentos de memória?
    - Vazamentos de memória ocorrem quando a memória alocada dinamicamente não é liberada.

    d) O que a instrução $malloc$ retorna quando não consegue realizar a alocação?
    - Quando a função malloc não consegue alocar memória ela retorna um ponteiro nulo (NULL).

    e) Explique a instrução $calloc$.
    - A função calloc é usada para alocar memória dinamicamente. Diferentemente de malloc, calloc inicializa todos os bytes da memória alocada com zero. Sua assinatura é:

    ```c
    void *calloc(size_t num, size_t size);
    ```

    f) Qual a diferença entre as instruções $malloc$ e $calloc$?
    - A diferença está na inicialização e nos argumentos. malloc aloca memória sem inicializar com algum valor, enquanto calloc aloca e inicializa os bytes com zero. Além disso, malloc usa um argumento (tamanho total em bytes), enquanto calloc usa dois (número de elementos e tamanho de cada elemento).

3. **Acerca de Manipulação de Arquivos**

    Responda:

    a) Explique os diferentes modos de abertura de arquivos.
    - "r": Abre o arquivo para leitura. O arquivo deve existir, caso contrário, retorna NULL.

    - "w": Abre o arquivo para escrita. Se o arquivo já existir, seu conteúdo será apagado. Se não existir, um novo arquivo será criado.

    - "a": Abre o arquivo para escrita no modo de anexação (append). O conteúdo existente é mantido, e os novos dados são adicionados ao final do arquivo. Cria o arquivo se não existir.

    - "r+": Abre o arquivo para leitura e escrita. O arquivo deve existir.

    - "w+": Abre o arquivo para leitura e escrita. Cria o arquivo se não existir e apaga o conteúdo existente.

    - "a+": Abre o arquivo para leitura e escrita no modo de anexação. Mantém o conteúdo existente, e novos dados são adicionados ao final.

    - Além disso, é possivel adicionar "b" ao final de cada modo de abertura para indicar que o arquivo será manipulado em binário. Exemplo: "wb", "rb"

    b) Explique o funcionamento das funções $fgets$, $fprintf$, $fread$, $fwrite$.

    - *fgets*: Lê uma linha (ou até um número máximo de caracteres) de um arquivo e armazena em uma string.

        Sintaxe:
        ```c
        char *fgets(char *str, int n, FILE *stream);
        ```

    - *fprintf*: Escreve dados formatados em um arquivo, similar ao printf para saída padrão.

        Sintaxe:
        ```c
        int fprintf(FILE *stream, const char *format-string, argument-list);
        ```

    - *fwrite*: Escreve dados binários de um bloco de memória para um arquivo.

        Sintaxe:
        ```c
        size_t fwrite(const void *ptr, size_t size, size_t count, FILE *stream
        ```

4. **Qual a saída do seguinte código?**

    ```c
    #include <stdio.h>

    int main() {
        int a = 5;
        int b = 11;
        float c;

        scanf("%d %d", &a, &b);

        if(a > b || !(a > 0)) {
        c = (float)(b / a);
        } else {
        c = (float)(a / b);
        }
        
        printf("%.2f\n", c);
        return 0;
    }
    ```

    - Se a entrada for "5 11", a saída será 0.00

5. **Analise o valor das variáveis após executar o seguinte código:**
    
    ```c
    #include <stdio.h>

    int main() {
        int a = 1, b = 2, c = 3, d = 4, e = 5;

        printf("a * b / c = %.3f\n", (float)a * b / c);
        printf("a * b %% c + 1 = %d\n", a * b % c + 1);
        printf("++a * b - c-- = %d\n", ++a * b - c--);
        printf("7 - - b * ++d = %d\n", 7 - - b * ++d);
        printf("a / b / c = %.3f\n", (float)a / b / c);
        printf("7 + c * --d / e = %.3f\n", 7 + c * --d / (float)e);
        printf("2 * a %% - b + c + 1 = %d\n", 2 * a % - b + c + 1);
        printf("39 / - ++e - + 29 %% c = %.3f\n", 39.0 / - ++e - + 29   % c)
        printf("7 - + ++a %% (3+b) = %d\n", 7 - + ++a % (3+b));

        return 0;
    }
    ```

    Analise o valor das variáveis em cada linha.

    - Resposta em código

6. **Qual o valor de $w$ após a execução do seguinte trecho código:**

    ```c
    #include <stdio.h>

    int main() {
        int y = 5;
        int z = 11;
        int w;

        w = y + z;
        if (y > z) {
            w = y * z;
        }

        printf("%d", w);
        return 0;
    }
    ```

    - $w$ terá o valor de 16 após a execução do código.

7.  **Crie um programa em C que receba os dados de um estudante e
avalie se este estudante é aprovado se ele obtiver nota mínima de $7$ e frequência mínima de $75%$. Adicione toda a lógica em um único $if$.**

    - Resposta em código

8. **O que é um vetor? Explique o funcionameno de um vetor e como ele é tratado no C.**

    - Um vetor é uma estrutura de dados que armazena múltiplos elementos do mesmo tipo em posições contíguas de memória. Em C, ele é declarado com um tamanho fixo (podendo mudar utilizando alocação dinâmica de memória), e os elementos são acessados por índices que começam em 0. O nome do vetor é tratado como o endereço do primeiro elemento, permitindo manipulação direta com ponteiros. Vetores são extremamente eficientes para armazenar e acessar dados sequenciais.