#ifndef __LISTA_LIGADA__
#define __LISTA_LIGADA__
#include <iostream>
class set{
    private:
        struct no_int{
            int valor;
            struct no_int *prox, *ant;
        };
        no_int *primeiro, *ultimo;
        unsigned int size;
    public:
        set(){
            this->primeiro = nullptr;
            this->ultimo = nullptr;
            this->size = 0;
        }
        ~set(){
            apagartodos();
        }
        bool inserir(int valor){
            if(encontrar(valor)){
                return false;
            }  
            else{
                no_int *novo_no = new no_int;
                novo_no->valor = valor;
                novo_no->prox = nullptr;
                novo_no->ant = this->ultimo;
                if(this->primeiro == nullptr){
                    this->primeiro = novo_no;
                }
                else this->ultimo->prox = novo_no;
                this->ultimo = novo_no;
                this->size++;
                return true;
            }
        }
        // inserir = O(1)

        bool apagar(int valor){
            no_int *apague = new no_int;
            int contador = 1;
            apague = this->primeiro;
            while(apague != nullptr){
                contador += 1;
                if(apague->valor == valor){
                    no_int *aux1 = apague->prox;
                    aux1->ant = apague->ant;
                    no_int *aux2 = apague->ant;
                    aux2->prox = aux1;
                    delete apague;
                    this->size--;
                    return true;
                    break;
                }
                apague = apague->prox;
            }
            return false;
        }
        // apagar = O(n)

        bool encontrar(int valor){
            no_int *encontre = new no_int;
            encontre = this->primeiro;
            while(encontre != nullptr){
                if(encontre->valor == valor){
                    return true;
                    break;
                }
                else{
                    encontre = encontre->prox;
                }
            }
            return false;
        }
        // encontrar = O(n)

        bool vazio(){
            if(this->size == 0) return true;
            else return false;
        }
        // vazio = O(1)

        void apagartodos(){
            no_int *atual, *remover;
            atual = this->primeiro;
            while (atual != nullptr){
                remover = atual;
                atual = atual->prox;
                delete remover;
            }
        }
        // apagartodos = O(n)

        unsigned int tamanho(){
            return this->size;
        }
        //tamanho = O(1)
        
};

#endif // __LISTA_LIGADA__