#ifndef __LISTA_LIGADA__
#define __LISTA_LIGADA__

class lista_ligada{
    private:
        struct no_int{
            int valor;
            no_int  *proximo, *anterior;
        };
        no_int *primeiro, *ultimo;
        unsigned int tamanho_;
    public:
        lista_ligada(){
            this->primeiro = nullptr;
            this->ultimo = nullptr;
            this->tamanho_ = 0;
        }
        ~lista_ligada(){
            limpar();
        }
        unsigned int tamanho(){
            return tamanho_;
        }
        unsigned int capacidade(){}
        double porcentagem_ocupada(){}

        bool inserir_em(unsigned int index, int valor){}
        bool remover_em(unsigned int index){}
        int get_em(unsigned int index){}

        void limpar(){
            no_int *atual, *remover;
            atual = this->primeiro;
            while(atual != nullptr){
                remover = atual;
                atual = atual->proximo;
                delete remover;
            }
        }
        void inserir_final(int valor){
            no_int *novo_valor = new no_int;
            novo_valor->valor = valor;
            novo_valor->anterior = this->ultimo;
            if(this->primeiro == nullptr){
                this->primeiro = novo_valor;
            }
            else{
                this->ultimo->proximo = novo_valor;
            }
            this->ultimo = novo_valor;
            this->tamanho_++;
        }
        void inserir_inicio(int valor){
            no_int *novo_valor = new no_int;
            novo_valor->valor = valor;
            novo_valor->proximo = this->primeiro;
            if(this->ultimo == nullptr){
                this->ultimo = novo_valor;
            }
            else{
                this->primeiro->anterior = novo_valor;
            }
            this->primeiro = novo_valor;
            this->tamanho_++;
        }
        bool apagar_final(){}
        bool apagar_inicio(){}
        int final(){
            return this->ultimo->valor;
        }
        int inicio(){
            return this->primeiro->valor;
        }
        bool remover(int valor){}
        int encontrar(int valor){}
        int contar(int valor){}
        int soma(){}
};

#endif // __LISTA_LIGADA__