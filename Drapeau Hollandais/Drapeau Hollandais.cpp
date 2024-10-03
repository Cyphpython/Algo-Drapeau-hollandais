#include <iostream>
#include <string>

using namespace std;

void Tri()
{
    enum color { bleu, rouge, blanc };
    int b, w, r;
    int t;
    int tab[999999999] = {};
    int n = sizeof(tab) / sizeof(tab[0]);
    // Initialisation des index
    b = 0; // Index de la zone bleue
    w = 0; // Index du premier élément non trié
    r = n - 1; // Index de la zone rouge

    // Boucle principale, tant qu'on n'a pas parcouru tous les éléments
    while (w <= r) {
        if (tab[w] == blanc) {
            // Si l'élément courant est blanc, on avance simplement
            w++;
        }
        else if (tab[w] == bleu) {
            // Si l'élément courant est bleu, on l'échange avec l'élément à l'index b
            swap(tab[b], tab[w]);
            b++; // On avance l'index bleu
            w++; // On avance l'index blanc également
        }
        else if (tab[w] == rouge) {
            // Si l'élément courant est rouge, on l'échange avec l'élément à l'index r
            swap(tab[w], tab[r]);
            r--; // On recule l'index rouge
            // On ne fait pas avancer w ici car l'élément échangé doit être vérifié
        }
    }
}

int main() 
{
	Tri();
	return 0;
}