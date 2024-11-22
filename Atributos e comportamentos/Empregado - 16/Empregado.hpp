#include <string>

using std::string;

class Empregado {
public:

    Empregado(string nome, string sobrenome, double salario);

    string getNome() const;
    
    void setNome(string nome);
    
    string getSobrenome() const;
    
    void setSobrenome(string sobrenome); 
    
    double getSalario() const;
    
    void setSalario(double salario); 
    

private:

    string n_nome;
    string n_sobrenome;
    double n_salario;
};