#include <stdio.h>
#include <stdlib.h>

typedef struct elem_lse t_elemento_lse; //ISso aqui é um apelido para o struct
//Definir como vai ser a lista
struct elem_lse{
    int cargautil;  // carga util
    struct elem_lse* prox;// endereço prox/ ponteiro para o proximo,
    // vai armazenar um endereço de memoria


};

//Criar 1 novo elemento
t_elemento_lse* criar_elemento_lse(int cargautil){
    t_elemento_lse* novo = malloc(sizeof(t_elemento_lse)); //Ctriar elemento
    novo->cargautil = cargautil;
    novo->prox = NULL;

    return novo;
}

//Definir a estrutura da lista
typedef struct LSE{//Typedef serve para ja dar o nome 
    t_elemento_lse* inicio;//Endereço do primeiro elemento
    //int tamanho;
    //int numero_inserir
    //int mnumero_deletar

}TLSE;

//Criar a lista
TLSE* criarLSE(){
    TLSE*/*struct LSE**/ nova = malloc(sizeof(struct LSE));
    nova->inicio = NULL;

    return nova;
}

/*Operações próxima aula
inserir_inicioLSE()
remover_LSE()
acessar_LSE()
inseriri_fincaLSE()
removerfincaLSE()*/
