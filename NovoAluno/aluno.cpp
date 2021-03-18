#include "aluno.h"

int Aluno::getCodigo() const
{
    return codigo;
}

void Aluno::setCodigo(int value)
{
    codigo = value;
}

string Aluno::getNome() const
{
    return nome;
}

void Aluno::setNome(const string &value)
{
    nome = value;
}

Aluno::~Aluno()
{
   cout << "Destruido" << endl;
}

Aluno::Aluno()
{
    cout << "Construido" << endl;
}

Aluno::Aluno(int c, string n)
{
    this->codigo = c;
    this->nome = n;
    cout << "Construido 2" << endl;
}
