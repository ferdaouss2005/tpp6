
#include <iostream>
using namespace std;

class CompteBancaire {
private:
    double solde;
    int codeSecurite;

public:
    // Constructeur sans solde initial
    CompteBancaire(int code) {
        solde = 0;
        codeSecurite = code;
    }

    // Constructeur avec solde initial
    CompteBancaire(double s, int code) {
        solde = s;
        codeSecurite = code;
    }

    void afficherSolde() {
        cout << "Solde actuel : " << solde << " DH" << endl;
    }

    // Retrait avec montant uniquement
    void retrait(double montant) {
        if (montant <= 0) {
            cout << "Montant invalide !" << endl;
        }
        else if (montant > solde) {
            cout << "Solde insuffisant !" << endl;
        }
        else {
            solde -= montant;
            cout << "Retrait effectue avec succes." << endl;
        }
    }

    // Retrait avec montant et code de securite
    void retrait(double montant, int code) {
        if (code != codeSecurite) {
            cout << "Code de securite incorrect !" << endl;
        }
        else if (montant <= 0) {
            cout << "Montant invalide !" << endl;
        }
        else if (montant > solde) {
            cout << "Solde insuffisant !" << endl;
        }
        else {
            solde -= montant;
            cout << "Retrait securise effectue avec succes." << endl;
        }
    }
};

int main() {
    CompteBancaire c1(1000, 1234);
    CompteBancaire c2(5678);

    cout << "===== COMPTE 1 =====" << endl;
    c1.afficherSolde();

    c1.retrait(200);
    c1.afficherSolde();

    c1.retrait(300, 1234);
    c1.afficherSolde();

    c1.retrait(100, 9999);
    c1.afficherSolde();

    cout << "\n===== COMPTE 2 =====" << endl;
    c2.afficherSolde();

    return 0;
}
