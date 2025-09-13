#include <iostream>
#include <string>
using namespace std;

struct Carta {
    string estado;
    string codigo;
    string cidade;
    int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
};

int main() {
    Carta c1, c2;
    string atributo;

    cout << "Super Trunfo - Paises (Nivel Novato)\n";

    // Carta 1
    cout << "\nDigite o estado da primeira carta: ";
    cin >> c1.estado;
    cout << "Codigo: ";
    cin >> c1.codigo;
    cout << "Cidade: ";
    cin.ignore();
    getline(cin, c1.cidade);
    cout << "Populacao: ";
    cin >> c1.populacao;
    cout << "Area: ";
    cin >> c1.area;
    cout << "PIB: ";
    cin >> c1.pib;
    cout << "Pontos turisticos: ";
    cin >> c1.pontos;
    c1.densidade = c1.populacao / c1.area;

    // Carta 2
    cout << "\nDigite o estado da segunda carta: ";
    cin >> c2.estado;
    cout << "Codigo: ";
    cin >> c2.codigo;
    cout << "Cidade: ";
    cin.ignore();
    getline(cin, c2.cidade);
    cout << "Populacao: ";
    cin >> c2.populacao;
    cout << "Area: ";
    cin >> c2.area;
    cout << "PIB: ";
    cin >> c2.pib;
    cout << "Pontos turisticos: ";
    cin >> c2.pontos;
    c2.densidade = c2.populacao / c2.area;

    // Mostrar cartas simples
    cout << "\nCarta 1: " << c1.cidade << " - Pop: " << c1.populacao << " - Area: " << c1.area << endl;
    cout << "Carta 2: " << c2.cidade << " - Pop: " << c2.populacao << " - Area: " << c2.area << endl;

    // Escolher atributo
    cout << "\nEscolha o atributo para comparar (populacao, area, pib, pontos, densidade): ";
    cin >> atributo;

    // Comparar
    if (atributo == "densidade") {
        if (c1.densidade < c2.densidade)
            cout << "\nVencedor: " << c1.cidade << endl;
        else
            cout << "\nVencedor: " << c2.cidade << endl;
    } else if (atributo == "populacao") {
        if (c1.populacao > c2.populacao)
            cout << "\nVencedor: " << c1.cidade << endl;
        else
            cout << "\nVencedor: " << c2.cidade << endl;
    } else if (atributo == "area") {
        if (c1.area > c2.area)
            cout << "\nVencedor: " << c1.cidade << endl;
        else
            cout << "\nVencedor: " << c2.cidade << endl;
    } else if (atributo == "pib") {
        if (c1.pib > c2.pib)
            cout << "\nVencedor: " << c1.cidade << endl;
        else
            cout << "\nVencedor: " << c2.cidade << endl;
    } else if (atributo == "pontos") {
        if (c1.pontos > c2.pontos)
            cout << "\nVencedor: " << c1.cidade << endl;
        else
            cout << "\nVencedor: " << c2.cidade << endl;
    } else {
        cout << "Atributo invalido!" << endl;
    }

    return 0;
}
