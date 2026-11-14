# tpp6

EXERCICE1

<img width="359" height="308" alt="image" src="https://github.com/user-attachments/assets/c9a72e0a-223d-47c1-b5aa-357ba9b17872" />

Dans cet exercice, j’ai créé une classe `Contact` représentant un contact dans un carnet d’adresses, avec les attributs `nom`, `telephone` et `email`. J’ai utilisé la surcharge de constructeurs pour permettre la création d’un contact avec un nom uniquement, avec un nom et un numéro de téléphone, ou avec les trois informations. J’ai également ajouté une méthode `afficher()` pour afficher les informations de chaque contact. Cet exercice m’a permis de comprendre la surcharge de constructeurs et la possibilité d’initialiser les objets de différentes manières selon les paramètres disponibles.

EXERCICE2


<img width="385" height="332" alt="image" src="https://github.com/user-attachments/assets/5ca162c6-374a-467c-8a67-bfafaa704c06" />

Dans cet exercice, j’ai créé une classe `Facture` contenant un tableau dynamique d’articles à l’aide de `std::vector`. Chaque article possède un nom, un prix, une quantité et un taux de TVA. J’ai utilisé la surcharge de méthodes en créant trois versions de `ajouterArticle()` avec des paramètres différents : la première prend le nom et le prix, la deuxième ajoute la quantité et la troisième ajoute également le taux de TVA. J’ai ensuite créé la méthode `afficherTotal()` pour afficher les détails des articles et calculer le montant total de la facture en tenant compte de la TVA. Cet exercice m’a permis de comprendre la surcharge de méthodes et l’utilisation d’un tableau dynamique avec `std::vector`.

EXERCICE3

<img width="314" height="269" alt="image" src="https://github.com/user-attachments/assets/b70620e6-a8d0-4473-8166-20e6254c9c01" />

Dans cet exercice, j’ai créé une classe `CompteBancaire` contenant les attributs `solde` et `codeSecurite`. J’ai utilisé la surcharge de constructeurs pour permettre l’ouverture d’un compte avec un solde initial ou sans solde. J’ai également créé deux versions de la méthode `retrait()` : une première qui effectue un retrait avec le montant uniquement et une deuxième qui exige un code de sécurité. J’ai ajouté des vérifications pour contrôler la validité du montant, vérifier le solde disponible et garantir la sécurité des opérations. Enfin, j’ai utilisé la méthode `afficherSolde()` pour consulter le solde après chaque opération. Cet exercice m’a permis de comprendre comment utiliser la surcharge pour adapter le comportement des méthodes selon les paramètres fournis.
