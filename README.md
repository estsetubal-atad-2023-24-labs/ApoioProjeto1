# Apoio Projeto \#1

Enunciado de apoio à entrega do *Checkpoint \#1*:

## Checkpoint \#1 - 📅 15 de abril, 2ª-feira, 16H

**Deliverable:**

- Repositório Git Classroom criado e grupo associado; Grupo inscrito no Moodle;
- Implementação do interpretador de comandos;
    - Deverá aceitar qualquer comando previsto, ignorando a capitulação. O output destes comandos será uma mensagem “Not implemented yet”.
    - Deverá sinalizar comandos desconhecidos com “Unknown command”;
    - Deverá conter uma opção adicional “HELP” que mostra os comandos disponíveis.
- Definição dos tipos Athlete, Medal e Host em módulos apropriados;
- Documentação doxygen e respetiva geração da mesma na pasta “html”.

**Submissão ZIP (conteúdo):**  Projeto VS Code (cópia do repositório).

## Versionamento de código

Todo o trabalho desenvolvido deve estar versionado no repositório do grupo.

## Interpretador de comandos

Um interpretador de comandos simula uma *linha de comandos* onde o utilizador pode inserir comandos pré-definidos que são executados pelo programa. Estes comandos correspondem aos descritos no enunciado do projeto. 

Nesta fase do projeto pretende-se que seja implementada a lógica geral deste interpretador e a estrutura de seleção posterior (`if-else`) para tratar os diferentes comandos.

Exemplo:

```console
PROMPT> LOAD_A
Not implemented yet 

PROMPT> load_m
Not implemented yet

PROMPT> show_medals
Unknown command

PROMPT> QUIT
Bye!
```

Recomenda-se que interpretador de comandos esteja implementado diretamente na função `main()`.

Sugere-se a seguinte estrutura de código para a implementação do interpretador (utiliza o módulo `input` para leitura de informação):

```cpp
bool quit = false;
char command[20];
while(!quit) {

    printf("\nPROMPT> ");

    readString(command, 20);

    if( /* command is LOAD_A */) {
        printf("Not implemented yet");
    } 
    ...
    else if ( /* command is HELP */ ) {
        // TODO: print HELP using a function
    } else if ( /* command is QUIT */ ) {
        quit = true;
    } else {
        printf("Unknown command");
    }    
}

printf("Bye!\n");
```

## Definição de tipos de dados e modularidade

Os tipos de dados `Athlete`, `Medal` e `Host` estão descritos no enunciado do projeto. Recomenda-se que seja utilizada *modularidade* para a definição destes tipos de dados e funções correspondentes.

:bulb: Veja o repositório de apoio <https://github.com/estsetubal-atad/Students_Template>

:bulb: Veja um exemplo no ficheiros `example.h`,  `example.c` e `main.c` deste repositório.

## Documentação *doxygen*

Deve existir documentação:

- nos cabeçalhos de cada ficheiro; 
- em todas as funções definidas nos *header files*
- em todas as funções no `main.c`.

:bulb: Veja um exemplo no ficheiros `example.h`,  `example.c` e `main.c` deste repositório.


