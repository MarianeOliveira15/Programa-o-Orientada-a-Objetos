#pragma once
using std::cout, std::endl;

class Retangulo{
    
    public:
    Retangulo(double altura = 1.0, double largura = 1.0);
    
    void setAltura(double altura);
    
    void setLargura(double largura);
    
    double getAltura() const;
    
    double getLargura() const;
    
    double perimetro();
    
    double area();
    
    private:
    double n_altura;
    double n_largura;
};
