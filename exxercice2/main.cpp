
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Facture {
private:
    struct Article {
        string nom;
        float prix;
        int quantite;
        float tauxTVA;
    };

    vector<Article> articles;

public:
    // Version 1 : nom et prix
    void ajouterArticle(string nom, float prix) {
        articles.push_back({nom, prix, 1, 0});
    }

    // Version 2 : nom, prix et quantite
    void ajouterArticle(string nom, float prix, int quantite) {
        articles.push_back({nom, prix, quantite, 0});
    }

    // Version 3 : nom, prix, quantite et taux TVA
    void ajouterArticle(string nom, float prix, int quantite, float tauxTVA) {
        articles.push_back({nom, prix, quantite, tauxTVA});
    }

    void afficherTotal() {
        float total = 0;

        cout << "===== DETAILS DE LA FACTURE =====" << endl;

        for (int i = 0; i < articles.size(); i++) {
            float sousTotal = articles[i].prix * articles[i].quantite;
            float montantTVA = sousTotal * articles[i].tauxTVA / 100;
            float totalArticle = sousTotal + montantTVA;

            cout << "Article : " << articles[i].nom << endl;
            cout << "Prix unitaire : " << articles[i].prix << " DH" << endl;
            cout << "Quantite : " << articles[i].quantite << endl;
            cout << "TVA : " << articles[i].tauxTVA << "%" << endl;
            cout << "Total article : " << totalArticle << " DH" << endl;
            cout << "------------------------" << endl;

            total += totalArticle;
        }

        cout << "Total de la facture : " << total << " DH" << endl;
    }
};

int main() {
    Facture f1;

    f1.ajouterArticle("Stylo", 5);
    f1.ajouterArticle("Cahier", 20, 3);
    f1.ajouterArticle("Ordinateur", 5000, 2, 20);

    f1.afficherTotal();

    return 0;
}
