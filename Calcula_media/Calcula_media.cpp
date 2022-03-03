#include <iostream>

using namespace std;

class Aluno
{
public:
    Aluno (string nome, float nota1, float nota2)                   // Construtor
    {
        set_nome(nome);
        set_media(nota1, nota2);
    }

    void set_nome(string nome)                                      // Setter de nome
    {
        this->nome = nome;
    }

    void set_media(float nota1, float nota2)                        // Setter de média
    {
        this->media = ((nota1 + nota2) / 2);
    }

    string retorna_nome()                                           // Getter de nome
    {
        return nome;
    }

    float retorna_media()                                           // Getter de média
    {
        return media;
    }
private:
    string nome;
    float media;
};

int main()
{
    string nome;
    float n1, n2;

    cout << "Informe o nome do aluno:\n";
    cin >> nome;
    cout << "Informe a primeira nota de " << nome<<" ";
    cin >> n1;
    cout << "Informe a segunda nota de " << nome<<" ";
    cin >> n2;

    Aluno media_notas(nome, n1, n2);

    cout << "A média das notas de "<<media_notas.retorna_nome() <<" e " << media_notas.retorna_media();
}
