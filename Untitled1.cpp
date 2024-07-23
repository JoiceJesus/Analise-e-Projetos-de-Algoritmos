#include <iostream>
#include <vector>
#include <algorithm>
//Aula Analise Asintotica
using namespace std;

int main()
{
    //preenche o vetor/lista com os valores da tabela do brasileirão
    vector<int> pts {39, 36, 34, 32, 31, 30, 29, 25, 25, 25, 23, 21, 19, 18, 17, 17, 15, 14, 11, 11};
    for (const auto& num : pts) {
        cout << num << " ";
    }
    cout << endl;
    //Ordena os valores do menor para o maior
    sort(pts.begin(), pts.end());
    for (const auto& num : pts) {
        cout << num << " ";
    }
    cout << endl;
    //Ordena de forma crecente a lista
    std::sort(pts.begin(), pts.end(), std::greater<int>());
    for (const auto& num : pts) {
        cout << num << " ";
    }
    return 0;
}
