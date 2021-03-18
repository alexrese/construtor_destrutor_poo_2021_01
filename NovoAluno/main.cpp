#include <QCoreApplication>
#include "aluno.h";

int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);

    Aluno b = Aluno();
    b.setCodigo(1);
    b.setNome("Alex");

    Aluno c = Aluno(2, "Luciano");

    cout << "Nome:" << b.getNome() << " Cod:" << b.getCodigo() << endl;
    cout << "Nome:" << c.getNome() << " Cod:" << c.getCodigo() << endl;

    b.setCodigo(3);

    cout << "Nome:" << b.getNome() << " Cod:" << b.getCodigo() << endl;

    return 0;
}
