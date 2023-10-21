#ifndef __ARRAY_SET__
#define __ARRAY_SET__

class array_set{
    private:
        int *data;
        unsigned int tamanho_, capacidade_;
        void incrementar(){
            int *nova_data = new int[capacidade_*2];
            for (int i = 0; i < tamanho_; i++){
                nova_data[i] = this->data[i];
            }
            delete [] this->data;
            this->data = nova_data;
            capacidade_ = capacidade_*2;
        };
    public:
        array_set(){
            this->tamanho_ = 0;
            this->capacidade_ = 2;
            this->data = new int[2];
        }
        ~array_set(){
            delete [] this->data;
        }
        unsigned int tamanho(){
            return tamanho_;
        }
        unsigned int capacidade(){
            return capacidade_;
        }
        double porcentagem_ocupada(){
            double porcentagem = tamanho_/capacidade_;
            return porcentagem;
        }

        bool inserir_em(unsigned int index, int valor){
            if (index < tamanho_ && !encontrar(valor)){
                for (int i = tamanho_; i > index; i--){
                    data[i] = data[i-1];
                }
                data[index] = valor;
                tamanho_++;
                return true;
            }
            return false;
        }
        bool remover_em(unsigned int index){
            if (index <= tamanho_){
                for (int i = index; i < tamanho_; i++){
                    data[i] = data[i+1];
                }
                return true;
            }
            return false;
        }
        int get_em(unsigned int index){
            if (encontrar(data[index])) return data[index];
            else return -1;
        }

        void limpar(){
            tamanho_ = 0;
        }
        void inserir_final(int valor){
           if (tamanho_ == capacidade_) incrementar();
           if (!encontrar(valor)){
                data[tamanho_] = valor;
                tamanho_++;
           }
        }
        void inserir_inicio(int valor){
            if (tamanho_ == capacidade_) incrementar();
            if (!encontrar(valor)){
                for (int i = tamanho_; i > 0; i--)
                    data[i] = data[i-1];           
            }
            data[0] = valor;
            tamanho_++; 
        }
        bool apagar_final(){
            tamanho_--;
        }
        bool apagar_inicio(){
            for(int i = 0; i < tamanho_-1; i++){
                data[i] = data[i+1];
            }
            tamanho_--;
        }
        int final(){
            return data[tamanho_-1];
        }
        int inicio(){
            return data[0];
        }
        bool remover(int valor){
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
        bool encontrar(int valor){
            for (int i = 0; i<tamanho_; i++){
                if (valor == this->data[i]) return true;
            }
            return false;
        }
        int contar(int valor){
            int quant = 0;
            for (int i = 0; i <tamanho_; i++){
                if(encontrar(valor)) quant++;
            }
            return quant;
        }
        int soma(){
            int soma = 0;
            for (int i = 0; i < tamanho_; i++){
                soma += data[i];
            }
            return soma;
        }
};

#endif // __ARRAY_SET__