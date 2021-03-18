#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>

using namespace std;

class Aluno
{
private:
       int codigo;
       string nome;
public:
    Aluno();
    Aluno(int c, string n);
    int getCodigo() const;
    void setCodigo(int value);
    string getNome() const;
    void setNome(const string &value);

    ~Aluno();
};

#endif // ALUNO_H
