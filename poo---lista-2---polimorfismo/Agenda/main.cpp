#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <algorithm>

// Classe base Contato
class Contato {
protected:
    std::string nome;
    std::string endereco;
    std::string email;

public:
    Contato(const std::string& nome, const std::string& endereco, const std::string& email)
        : nome(nome), endereco(endereco), email(email) {}

    virtual ~Contato() {}

    virtual void exibirDados(std::ostream& os) const = 0;
    virtual std::string getIdentificador() const = 0;
};

// Classe PessoaFisica
class PessoaFisica : public Contato {
private:
    std::string cpf;
    std::string dataNascimento;
    std::string estadoCivil;

public:
    PessoaFisica(const std::string& nome, const std::string& endereco, const std::string& email,
                 const std::string& cpf, const std::string& dataNascimento, const std::string& estadoCivil)
        : Contato(nome, endereco, email), cpf(cpf), dataNascimento(dataNascimento), estadoCivil(estadoCivil) {}

    void exibirDados(std::ostream& os) const override {
        os << "Pessoa Física:\n"
           << "Nome: " << nome << "\n"
           << "CPF: " << cpf << "\n"
           << "Endereço: " << endereco << "\n"
           << "Email: " << email << "\n"
           << "Data de Nascimento: " << dataNascimento << "\n"
           << "Estado Civil: " << estadoCivil << "\n";
    }

    std::string getIdentificador() const override {
        return cpf;
    }
};

// Classe PessoaJuridica
class PessoaJuridica : public Contato {
private:
    std::string cnpj;
    std::string inscricaoEstadual;
    std::string razaoSocial;

public:
    PessoaJuridica(const std::string& nome, const std::string& endereco, const std::string& email,
                   const std::string& cnpj, const std::string& inscricaoEstadual, const std::string& razaoSocial)
        : Contato(nome, endereco, email), cnpj(cnpj), inscricaoEstadual(inscricaoEstadual), razaoSocial(razaoSocial) {}

    void exibirDados(std::ostream& os) const override {
        os << "Pessoa Jurídica:\n"
           << "Nome: " << nome << "\n"
           << "CNPJ: " << cnpj << "\n"
           << "Endereço: " << endereco << "\n"
           << "Email: " << email << "\n"
           << "Inscrição Estadual: " << inscricaoEstadual << "\n"
           << "Razão Social: " << razaoSocial << "\n";
    }

    std::string getIdentificador() const override {
        return cnpj;
    }
};

// Classe Agenda
class Agenda {
private:
    std::vector<std::shared_ptr<Contato>> contatos;

public:
    // Sobrecarga do operador << para adicionar um contato
    Agenda& operator<<(std::shared_ptr<Contato> contato) {
        contatos.push_back(contato);
        return *this;
    }

    // Sobrecarga do operador >> para remover um contato por identificador
    Agenda& operator>>(const std::string& identificador) {
        contatos.erase(std::remove_if(contatos.begin(), contatos.end(),
                                      [&identificador](const std::shared_ptr<Contato>& contato) {
                                          return contato->getIdentificador() == identificador;
                                      }),
                       contatos.end());
        return *this;
    }

    // Pesquisa de contato por identificador
    std::shared_ptr<Contato> pesquisar(const std::string& identificador) const {
        for (const auto& contato : contatos) {
            if (contato->getIdentificador() == identificador) {
                return contato;
            }
        }
        return nullptr;
    }

    // Sobrecarga do operador << para exibir todos os contatos
    friend std::ostream& operator<<(std::ostream& os, const Agenda& agenda) {
        for (const auto& contato : agenda.contatos) {
            contato->exibirDados(os);
            os << "-------------------\n";
        }
        return os;
    }
};

int main() {
    Agenda agenda;

    // Adicionando contatos
    agenda << std::make_shared<PessoaFisica>("João Silva", "Rua A, 123", "joao@email.com", "123.456.789-00", "01/01/1980", "Solteiro")
           << std::make_shared<PessoaJuridica>("Empresa X", "Avenida B, 456", "contato@empresax.com", "12.345.678/0001-99", "123456789", "Empresa X LTDA");

    // Exibindo todos os contatos
    std::cout << "--- Contatos na Agenda ---\n";
    std::cout << agenda;

    // Pesquisando um contato
    std::cout << "--- Pesquisa por CPF ---\n";
    auto contato = agenda.pesquisar("123.456.789-00");
    if (contato) {
        contato->exibirDados(std::cout);
    } else {
        std::cout << "Contato não encontrado.\n";
    }

    // Removendo um contato
    agenda >> "123.456.789-00";

    // Exibindo todos os contatos após remoção
    std::cout << "--- Contatos após remoção ---\n";
    std::cout << agenda;

    return 0;
}
