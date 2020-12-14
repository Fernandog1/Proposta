#include <iostream>
using namespace std;

int main()
{
    float hora_entra, hora_trab, hora_saida, salario, min_entrada, min_saida, min_trab;
    string nome;
    cout << "Digite seu primeiro nome: ";
    cin >> nome;
    cout << "Digite a hora em que voce entrou: ";
    cin >> hora_entra;
    cout << "Digite o minuto em que voce entrou: ";
    cin >> min_entrada;
    cout << "Digite a hora em que voce saiu: ";
    cin >> hora_saida;
    cout << "Digite o minuto em que voce saiu: ";
    cin >> min_saida;

    if ((min_entrada > 60 || min_saida > 60) || (min_entrada < 0 || min_saida < 0)) {
        cout << "Algo deu errado, digite novamente.";

        return 0;
    }

    if ((hora_entra > 23 || hora_saida > 23) || (hora_entra < 0 || hora_saida < 0)) {
        cout << "Algo deu errado, digite novamente.";

        return 0;
    }

    hora_trab = hora_saida - hora_entra;
    min_trab = min_saida - min_entrada;

    if (hora_trab < 0 && hora_trab > 12)
    {
        hora_trab += 12;
    }
    else if (hora_trab <= -12 && hora_trab >= -24)
    {
        hora_trab += 24;
    }
    if (min_trab < 0) {
        hora_trab--;
        min_trab += 60;

    }
    salario = 4.54 * (hora_trab - 1);
    cout << nome << ", voce trabalhou por " << hora_trab - 1 << " horas e " << min_trab << " minutos e ganhara uma media de " << salario * 22 << '\n' << "ao fim do mes, caso trabalhe a mesma quantidade de horas diariamente";

}