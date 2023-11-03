#ifndef __ARRAY_SET__
#define __ARRAY_SET__

class array_set{
    private:
        int *data;
        unsigned int tamanho_, capacidade_;
        void incrementar(){ // Método para aumentar a capacidade do vetor. Desempenho O(n).
            int *nova_data = new int[capacidade_*2];
            for (int i = 0; i < tamanho_; i++){
                nova_data[i] = this->data[i];
            }
            delete [] this->data;
            this->data = nova_data;
            capacidade_ = capacidade_*2;
        };
    public:
        array_set(){ // Construtor do vetor. Desempenho O(1).
            this->tamanho_ = 0;
            this->capacidade_ = 2;
            this->data = new int[2];
        }
        ~array_set(){ // Destrutro do vetor. Ainda estou em dúvida se seu desempenho é O(1) ou O(n).
            delete [] this->data;
        }
        unsigned int tamanho(){ // Retorna a quantidade de dados que estão presentes no vetor. Desempenho O(1).
            return tamanho_;
        }
        unsigned int capacidade(){ // Retorna a capacidade total do vetor. Desempenho O(1).
            return capacidade_;
        }
        double porcentagem_ocupada(){ // Retorna a relação entre tamanho e capacidade do vetor, exibindo sua porcentagem ocupada. Desempenho O(1).
            double porcentagem = tamanho_/capacidade_;
            return porcentagem;
        }

        bool inserir_em(unsigned int index, int valor){ // Insere um valor no vetor em um índice específio. Desempenho O(n).
            if (tamanho_ == capacidade_) incrementar();
            if (index < tamanho_){
                for (int i = tamanho_; i > index; i--){
                    data[i] = data[i-1];
                }
                data[index] = valor;
                tamanho_++;
                return true;
            }
            return false;
        }
        bool remover_em(unsigned int index){ // Remove um valor de índice específico. Desempenho O(n).
            if (index < tamanho_){
                for (int i = index; i < tamanho_; i++){
                    data[i] = data[i+1];
                }
                tamanho_--;
                return true;
            }
            return false;
        }
        int get_em(unsigned int index){ // Retorna um valor presente em um índice. Caso o índice não exista, retorna -1. Desempenho O(1).
            if (index < tamanho_) return data[index];
            return -1;
        }

        void limpar(){ // Limpa todos os valores do vetor. Seu desempenho é O(1).
            tamanho_ = 0;
        }
        void inserir_final(int valor){ // Insere um valor ao final do vetor. Desempenho O(n), já que pode haver a necessidade de incrementar mais capacidade.
            if (tamanho_ == capacidade_) incrementar();
            data[tamanho_] = valor;
            tamanho_++;
        }
        void inserir_inicio(int valor){ // Insere um valor no início do vetor. Desempenho O(n).
            if (tamanho_ == capacidade_) incrementar();
            for (int i = tamanho_; i > 0; i--)
                data[i] = data[i-1];           
            data[0] = valor;
            tamanho_++; 
        }
        bool apagar_final(){ // Apagar o último elemento do vetor. Desempenho O(1).
            if (tamanho_ > 0){
                tamanho_--;
                return true;
            }
            return false;
        }
        bool apagar_inicio(){ // Apaga o primeiro elemento do vetor. Desempenho O(n).
            if (tamanho_ > 0){
                for(int i = 0; i < tamanho_-1; i++){
                    data[i] = data[i+1];
                }
                tamanho_--;
                return true;
            }
            return false;
        }
        int final(){ // Retorna o último elemento. Desempenho O(1).
            return data[tamanho_-1];
        }
        int inicio(){ // Retorna o primeiro elemento do vetor. Desempenho O(1).
            return data[0];
        }
        bool remover(int valor){ // Remove um elemento do vetor. Desempenho O(n).
            for(int i = 0; i < tamanho_; i++){
                if (valor == data[i]){
                    for(int j = i; j <tamanho_-1; j++){
                        data[j] = data[j+1];
                    }
                    tamanho_--;
                    return true;
                }
            }
            return false;
        }
        int encontrar(int valor){ // Encontra um valor no vetor e retorna seu índice. Desempenho O(n).
            for (int i = 0; i<tamanho_; i++){
                if (valor == this->data[i]) return i;
            }
            return -1;
        }
        int contar(int valor){ // Conta a quantidade de vezes que um valor aparece no array. Desempenho O(n).
            int quant = 0;
            for (int i = 0; i < tamanho_; i++){
                if (data[i] == valor) quant++;
            }
            return quant;
        }
        int soma(){ // Soma todos os elementos do vetor. Desempenho O(n).
            int soma = 0;
            for (int i = 0; i < tamanho_; i++){
                soma += data[i];
            }
            return soma;
        }
};

#endif // __ARRAY_SET__