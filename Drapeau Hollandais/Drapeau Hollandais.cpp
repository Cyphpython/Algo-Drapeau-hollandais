#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Tri(vector <int> & arr)
{
    enum color { bleu = 0, blanc = 1, rouge = 2 };
    int b = 0;
    int w = 0;
    int r = arr.size() - 1;
    // Boucle principale, tant qu'on n'a pas parcouru tous les éléments
    while (w <= r) {
        if (arr[w] == blanc) {
            // Si l'élément courant est blanc, on avance simplement
            w++;
        }
        else if (arr[w] == bleu) {
            // Si l'élément courant est bleu, on l'échange avec l'élément à l'index b
            swap(arr[b], arr[w]);
            b++; // On avance l'index bleu
            w++; // On avance l'index blanc également
        }
        else if (arr[w] == rouge) {
            // Si l'élément courant est rouge, on l'échange avec l'élément à l'index r
            swap(arr[w], arr[r]);
            r--; // On recule l'index rouge
            // On ne fait pas avancer w ici car l'élément échangé doit être vérifié
        }
    }
}

int main()
{
    // Exemple d'utilisation avec un tableau contenant des valeurs 0, 1, et 2
    vector<int> arr = { 2, 0, 1, 2, 1, 0, 0, 1, 2 };

    cout << "Tableau avant tri: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    Tri(arr);

    cout << "Tableau apres tri: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}