#ifndef __LISTA_LIGADA__
#define __LISTA_LIGADA__

class lista_ligada{
    private:
        struct no_int{
            int valor;
            struct no_int  *proximo, *anterior;
        };
        no_int *primeiro, *ultimo;
        unsigned int tamanho_;
    public:
        lista_ligada(){ // Construtor do vetor. Desempenho O(1).
            this->primeiro = nullptr;
            this->ultimo = nullptr;
            this->tamanho_ = 0;
        }
        ~lista_ligada(){ // Destrutor do vetor. Desempenho O(n).
            limpar();
        }
        unsigned int tamanho(){ // Retorna o tamanho do vetor. Desempenho O(1).
            return tamanho_;
        }
        unsigned int capacidade(){ 
            return tamanho_;
        }
        double porcentagem_ocupada(){
            if (tamanho_ == 0) return 0.0;
            return 1.0;
        }

        bool inserir_em(unsigned int index, int valor){ // Insere um valor em um índice específico. Desempenho O(n).
            if (index < tamanho_){ 
                no_int *novo_no = new no_int;
                novo_no->valor = valor;
                no_int *inserir_valor;
                inserir_valor = this->primeiro;
                for (int i = 0; i < index; i++){
                    inserir_valor = inserir_valor->proximo;
                }
                no_int *ant = inserir_valor->anterior;
                ant->proximo = novo_no;
                novo_no->anterior = ant;
                novo_no->proximo = inserir_valor;
                inserir_valor->anterior = novo_no;
                tamanho_++;
                return true;
            }
            return false;
        }
        bool remover_em(unsigned int index){ // Remove um valor em um índice específico. Desempenho O(n).
            if(index < tamanho_){
                no_int *atual = new no_int;
                atual = this->primeiro;
                for (int i = 0; i < index; i++){
                    atual = atual->proximo;
                }
                no_int *ant = atual->anterior;
                no_int *prox = atual->proximo;
                ant->proximo = prox;
                prox->anterior = ant;
                tamanho_--;
                delete atual;
                return true;
            }
            return false;
        }
        int get_em(unsigned int index){ // Retorna um valor de um índice. Desempenho O(n).
            if (index < tamanho_){
                no_int *atual;
                atual = this->primeiro;
                int i = 0;
                while(i != index){
                    atual = atual->proximo;
                    i++;
                }
                return atual->valor;
            }
            else return -1;
        }

        void limpar(){ // Limpa todos os elementos do vetor. Desempenho O(n).
            no_int *atual = this->primeiro;
            while(atual != nullptr){
                no_int *remover = atual;
                atual = atual->proximo;
                delete remover;
            }
            primeiro = nullptr;
            ultimo = nullptr;
            tamanho_ = 0;
        }
        void inserir_final(int valor){ // Insere um valor ao final da lista. Desempenho O(1).
            no_int *novo_valor = new no_int;
            novo_valor->valor = valor;
            novo_valor->proximo = nullptr;
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
        void inserir_inicio(int valor){ // Insere um valor ao inicio da lista. Desempenho O(1).
            no_int *novo_valor = new no_int;
            novo_valor->valor = valor;
            novo_valor->proximo = this->primeiro;
            novo_valor->anterior = nullptr;
            if(this->ultimo == nullptr){
                this->ultimo = novo_valor;
            }
            else{
                this->primeiro->anterior = novo_valor;
            }
            this->primeiro = novo_valor;
            this->tamanho_++;
        }
        bool apagar_final(){ // Apaga o último elemento do vetor. Desempenho O(1).
            if (tamanho_ > 1){
                no_int *apagar;
                apagar = this->ultimo;
                this->ultimo = this->ultimo->anterior;
                delete apagar;
                this->ultimo->proximo = nullptr;
                tamanho_--;
                return true;
            }
            if (primeiro == ultimo){
                delete primeiro;
                primeiro = nullptr;
                ultimo = nullptr;
                tamanho_ = 0;
                return true;
            }
            return false;
        }
        bool apagar_inicio(){ // Apaga o primeiro elemento do vetor. Desempenho O(1).
            if (tamanho_ > 1){
                no_int *apagar;
                apagar = this->primeiro;
                this->primeiro = this->primeiro->proximo;
                delete apagar;
                this->primeiro->anterior = nullptr;
                tamanho_--;
                return true;
            }
            if (primeiro == ultimo){
                delete primeiro;
                primeiro = nullptr;
                ultimo = nullptr;
                tamanho_ = 0;
                return true;
            }
            return false;
        }
        int final(){ // Retorna o valor do último elemento. Desempenho O(1).
            return this->ultimo->valor;
        }
        int inicio(){ // Retorna o valor do primeiro elemento. Desempenho O(1).
            return this->primeiro->valor;
        }
        bool remover(int valor){ // Remove um elemento do vetor. Desempenho O(n).
            no_int *percorrer;
            percorrer = this->primeiro;
            for (int i = 0; i < tamanho_; i++){
                if (percorrer->valor == valor){
                    no_int *ant = percorrer->anterior;
                    no_int *prox = percorrer->proximo;
                    ant->proximo = prox;
                    prox->anterior = ant;
                    tamanho_--;
                    delete percorrer;
                    return true;
                }
                percorrer = percorrer->proximo;
            }
            return false;
        }
        int encontrar(int valor){ // Encontra o índice de um elemento do vetor. Desempenho O(n).
            no_int *valor_no = this->primeiro;
            for (int i = 0; i < tamanho_; i++){
                if (valor_no->valor == valor) return i;
                valor_no = valor_no->proximo;
            }
            return -1;
        }
        int contar(int valor){ // Retorna a quantidade de vezes que um elemento se repete no vetor. Desempenho O(n).
            int quant = 0;
            no_int *no = this->primeiro;
            for (int i = 0; i < tamanho_; i++){
                if (no->valor == valor) quant++;
                no = no->proximo;
            }
            return quant;
        }
        int soma(){ // Retorna a soma de todos os elementos do vetor. Desempenho O(n).
            int total = 0;
            no_int *percorrer;
            percorrer = this->primeiro;
            for (int i = 0; i < tamanho_; i++){
                total += percorrer->valor;
                percorrer = percorrer->proximo;
            }
            return total;
        }
};

#endif // __LISTA_LIGADA__