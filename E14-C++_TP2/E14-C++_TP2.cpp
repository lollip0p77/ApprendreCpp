
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <cstdlib>

using namespace std;
//Constantes

//Intoduction
const string intro_Texte = "                                                  APPRENDRE LE C++\n\n\n\n"
"Vous trouverez a travers ce petit programme quelques que petites notions sur la synthaxe de base du C++.\n\n"
"       Par la suite, nous procederons a un petit quizz interactif pour evaluer nos competences.          \n\n\n\n\n\n";

//Variables Section
const string variable_Int = "int a = 0;";
const string variable_Constante = "const int a = 23;";
const string variable_Global = "Les constantes sont declare apres les includes et avant le main comme dans tout autre language.";

//Input/Output
const string inputOutput_Output = "cout << \"Message\";";//Output
const string inputOutput_Input = "cin >> NomVariable;";//Input

//Operateurs
const string operateurs_All = "&& = Et logique\n"
"|| = Ou logique\n"
"++ = incrementation\n"
"-- = decrementation\n"
"% = modulo\n"
"* = multiple\n"
"/ = division\n"
"+ = addition\n"
"- = soustraction\n"
"+= = valeur + 1\n"
"-= = valeur - 1\n"
"> = plus grand\n"
"< = plus petit\n"
"= = assignation de valeur\n"
"== = validation de valeur\n";

//Conditions
const string condition_If = "if (a < 3){\n"//If
"    //Code\n"
"};\n";
const string condition_Else = "if (a < 3){\n"//Else
"    //Code;\n"
"} else {\n"
"      //Code;\n"
"};\n";

//Boucles Section
const string boucle_For = "For (int i = 0; i < 3; i++)\n "//For
"   {\n"
"      //Code;\n"
"    }\n";
const string boucle_While = "while (a < 3){\n"//While
"   Code;\n"
"}\n";
const string boucle_Do_While = "Do {\n"//Do While
"    //Code\n"
"} while (a < 3);\n";

//Fonction et Methode
const string fonction_Methode = "void NomMethode() {\n"//Methode
"    //Code;\n"
"}\n";
const string fonction_Fonction = "int NomFonction(int a, int b) {\n"
"    //Code;\n"
"    return c;\n"
"}\n";

//Tableaux
const string tableaux_Boucle = "int mon_Tableau[20]\n"
"int i;\n"
"for (i = 0; i < 20; i++) {\n"
"    int a = i;\n"
"    mon_Tableau[i] = a;\n"
"    cout << mon_Tableau[i];\n"
"}\n";

//Globales
int Menu_Choix;
string variables = "1) Variables";
string input_Output = "2) Input/Output";
string operateurs = "3) Operateurs";
string conditions = "4) Conditions";
string boucles = "5) Boucles";
string fonctions = "6) Fonctions";
string tableaux = "7) Tableaux";
string statistiques = "8) Statistiques";
string quitter = "9) Quitter";

//Variables
string variable_reponse1; string variable_reponse2; string variable_reponse3;
//Input/Output
string input_Output_reponse1; string input_Output_reponse2;
//Opérateurs
string operateur_reponse1; string operateur_reponse2;
//Conditions
char conditions_reponse1; char conditions_reponse2;
//Boucles
char boucle_reponse1; char boucle_reponse2;
//Fonctions
char fonction_reponse1; char fonction_reponse2;
//Tableaux
char tableau_reponse;
//Statistiques
int Variables_Resultat = 0; int Input_Output_Resultat = 0; int Operateurs_Resultat = 0; int Conditions_Resultat = 0;
int Boucles_Resultat = 0; int Fonctions_Resultat = 0; int Tableaux_Resultat = 0; float NoteGlobale_Pourcentage = 0.00f;
int Nbr_Bonne_Reponses;
//Variables
void Variables_Section() {
    cout << "****************************** VARIABLES ******************************\n\n\n";
    cout << "Voici comment nous declarons une variable de type int:\n";
    cout << variable_Int << "\n\n";
    cout << "Voici comment nous declarons une constante:\n";
    cout << variable_Constante << "\n\n";
    cout << "Voici comment nous declarons une variable globale:\n";
    cout << variable_Global << "\n\n";
    system("PAUSE");
    system("CLS");
        
    cout << "Declarez moi une variable de type int, de valeur 5 et portant a comme nom? \n";
    cin >> variable_reponse1;
    cin.ignore(numeric_limits <streamsize>::max(), '\n');
    if (variable_reponse1 == "int a = 5;") {
        Variables_Resultat = Variables_Resultat + 1;
    }
    else { Variables_Resultat = Variables_Resultat; };
    system("PAUSE");
    system("CLS");
       
    cout << "Declarez moi une constante de type int, de valeur 5 et portant a comme nom? \n";
    cin >> variable_reponse2;
    cin.ignore(numeric_limits <streamsize>::max(), '\n');
    if (variable_reponse2 == "const int a = 5;") {
        Variables_Resultat = Variables_Resultat + 1;
    }
    else { Variables_Resultat = Variables_Resultat; };
    system("PAUSE");
    system("CLS");

    cout << "Vrai ou Faux: Une constante se declare sous le main? (Entrez V pour vrai ou F pour faux)\n";
    cin >> variable_reponse3;
    cin.ignore(numeric_limits <streamsize>::max(), '\n');
    if (variable_reponse3 == "F") {
        Variables_Resultat = Variables_Resultat + 1;
    }
    else { Variables_Resultat = Variables_Resultat; };
    variables = "1) Variables*";
    system("PAUSE");
    system("CLS");
}
//Input/Output
void Input_Output_Section() {
    cout << "***************************** INPUT/OUTPUT *****************************\n\n\n";
    cout << "Voici comment utiliser le output pour afficher:\n";
    cout << inputOutput_Output << "\n\n";
    cout << "Voici comment utiliser le input pour recuperer la valeur:\n";
    cout << inputOutput_Input << "\n\n";
    system("PAUSE");
    system("CLS");

    cout << "Comment afficheriez-vous hello world? \n";
    cin >> input_Output_reponse1;
    cin.ignore(numeric_limits <streamsize>::max(), '\n');
    if (input_Output_reponse1 == "cout << \"hello world\";") {
        Input_Output_Resultat = Input_Output_Resultat + 1;
    }else { Input_Output_Resultat = Input_Output_Resultat; }
    system("PAUSE");
    system("CLS");

    cout << "Comment vous metteriez le resultat saisi dans la variable se nommant resultat? \n";
    cin >> input_Output_reponse2;
    cin.ignore(numeric_limits <streamsize>::max(), '\n');
    if (input_Output_reponse2 == "cin >> resultat;") {
        Input_Output_Resultat = Input_Output_Resultat + 1;
    }
    else { Input_Output_Resultat = Input_Output_Resultat; }
    input_Output = "2) Input/Output*";
    system("PAUSE");
    system("CLS");
}
//Opérateurs
void Operateurs_Section() {
    cout << "****************************** OPERATEURS ******************************\n\n\n";
    cout << "Voici une breve liste des operateurs:\n";
    cout << operateurs_All << "\n\n";
    system("PAUSE");
    system("CLS");

    cout << "Quel est l'operateur d'incrementation? \n";
    cin >> operateur_reponse1;
    cin.ignore(numeric_limits <streamsize>::max(), '\n');
    if (operateur_reponse1 == "++") {
        Operateurs_Resultat = Operateurs_Resultat + 1;
    }else { Operateurs_Resultat = Operateurs_Resultat; }
    system("PAUSE");
    system("CLS");

    cout << "Quel est l'operateur modulo? \n";
    cin >> operateur_reponse2;
    cin.ignore(numeric_limits <streamsize>::max(), '\n');
    if (operateur_reponse2 == "%") {
        Operateurs_Resultat = Operateurs_Resultat + 1;
    }else { Operateurs_Resultat = Operateurs_Resultat; }
    operateurs = "3) Operateurs*";
    system("PAUSE");
    system("CLS");
}
//Conditions
void Conditions_Section() {
    cout << "****************************** CONDITIONS ******************************\n\n\n";
    cout << "Voici comment utiliser la condition \"if\":\n";
    cout << condition_If << "\n\n";
    cout << "Voici comment utiliser la condition \"else\":\n";
    cout << condition_Else << "\n\n";
    system("PAUSE");
    system("CLS");

    cout << "Vrai ou Faux: Ceci est la bonne synthaxe pour utiliser un \"if\"? \n";
    cout << condition_If << "\n";
    cout << "Entrez V pour vrai ou F pour faux \n";
    cin >> conditions_reponse1;
    cin.ignore(numeric_limits <streamsize>::max(), '\n');
    if (conditions_reponse1 == 'V') {
        Conditions_Resultat = Conditions_Resultat + 1;
    }else { Conditions_Resultat = Conditions_Resultat; }
    system("PAUSE");
    system("CLS");

    cout << "Vrai ou Faux: Ceci est la bonne synthaxe pour utiliser un \"else\"? \n";
    cout << condition_Else << "\n";
    cout << "Entrez V pour vrai ou F pour faux \n";
    cin >> conditions_reponse2;
    cin.ignore(numeric_limits <streamsize>::max(), '\n');
    if (conditions_reponse2 == 'V') {
        Conditions_Resultat = Conditions_Resultat + 1;
    }else { Conditions_Resultat = Conditions_Resultat; }
    conditions = "4) Conditions*";
    system("PAUSE");
    system("CLS");
}
//Boucles
void Boucles_Section() {
    cout << "******************************** BOUCLES ********************************\n\n\n";
    cout << "Voici comment utiliser la boucle \"for\":\n";
    cout << boucle_For << "\n\n";
    cout << "Voici comment utiliser la boucle \"do while\":\n";
    cout << boucle_Do_While << "\n\n";
    cout << "Voici comment utiliser la boucle \"while\":\n";
    cout << boucle_While << "\n\n";
    system("PAUSE");
    system("CLS");

    cout << "Vrai ou Faux: Ceci est la bonne synthaxe pour utiliser une boucle \"for\"? \n";
    cout << boucle_For << "\n";
    cout << "Entrez V pour vrai ou F pour faux \n";
    cin >> boucle_reponse1;
    cin.ignore(numeric_limits <streamsize>::max(), '\n');
    if (boucle_reponse1 == 'V') {
        Boucles_Resultat = Boucles_Resultat + 1;
    }
    else { Boucles_Resultat = Boucles_Resultat;  }
    system("PAUSE");
    system("CLS");

    cout << "Vrai ou Faux: Ceci est la bonne synthaxe pour utiliser une boucle \"do while\"? \n";
    cout << boucle_Do_While << "\n";
    cout << "Entrez V pour vrai ou F pour faux \n";
    cin >> boucle_reponse2;
    cin.ignore(numeric_limits <streamsize>::max(), '\n');
    if (boucle_reponse2 == 'V') {
        Boucles_Resultat = Boucles_Resultat + 1;
    }
    else { Boucles_Resultat = Boucles_Resultat; }
    boucles = "5) Boucles*";
    system("PAUSE");
    system("CLS");
}
//Fonctions
void Fonctions_Section() {
    cout << "******************************* FONCTIONS *******************************\n\n\n";
    cout << "Voici comment utiliser une fonction:\n";
    cout << fonction_Fonction << "\n\n";
    cout << "Voici comment utiliser une methode:\n";
    cout << fonction_Methode << "\n\n";
    system("PAUSE");
    system("CLS");

    cout << "Vrai ou Faux: Ceci est la bonne synthaxe pour utiliser une fonction? \n";
    cout << fonction_Fonction << "\n";
    cout << "Entrez V pour vrai ou F pour faux \n";
    cin >> fonction_reponse1;
    cin.ignore(numeric_limits <streamsize>::max(), '\n');
    if (fonction_reponse1 == 'V') {
        Fonctions_Resultat = Fonctions_Resultat + 1;
    }
    else { Fonctions_Resultat = Fonctions_Resultat; }
    system("PAUSE");
    system("CLS");

    cout << "Vrai ou Faux: Ceci est la bonne synthaxe pour utiliser une methode? \n";
    cout << fonction_Methode << "\n";
    cout << "Entrez V pour vrai ou F pour faux \n";
    cin >> fonction_reponse2;
    cin.ignore(numeric_limits <streamsize>::max(), '\n');
    if (fonction_reponse2 == 'V') {
        Fonctions_Resultat = Fonctions_Resultat + 1;
    }
    else { Fonctions_Resultat = Fonctions_Resultat; }
    fonctions = "6) Fonctions*";
    system("PAUSE");
    system("CLS");
}
//Tableaux
void Tableaux_Section() {
    cout << "******************************* TABLEAUX *******************************\n\n\n";
    cout << "Voici comment utiliser un tableau avec une boucle:\n";
    cout << tableaux_Boucle << "\n\n";
    system("PAUSE");
    system("CLS");

    cout << "Vrai ou Faux: Ceci est la bonne synthaxe pour initialiser un tableau? \n";
    cout << tableaux_Boucle << "\n";
    cout << "Entrez V pour vrai ou F pour faux \n";
    cin >> tableau_reponse;
    cin.ignore(numeric_limits <streamsize>::max(), '\n');
    if (tableau_reponse == 'V') {
        Tableaux_Resultat = Tableaux_Resultat + 1;
    }
    else { Tableaux_Resultat = Tableaux_Resultat; }
    tableaux = "7) Tableaux*";
    system("PAUSE");
    system("CLS");
}
//Statistiques
void Statistiques_Section() {
    cout << "***************************** STATISTIQUES *****************************\n\n\n";
    cout << "Pour la section \"Variables\", vous avez obtenue " << Variables_Resultat << " " << "bonnes reponse sur 3. \n\n";
    cout << "Pour la section \"Input/Output\", vous avez obtenue " << Input_Output_Resultat << " " << "bonnes reponse sur 2. \n\n";
    cout << "Pour la section \"Operateurs\", vous avez obtenue " << Operateurs_Resultat << " " << "bonnes reponse sur 2. \n\n";
    cout << "Pour la section \"Conditions\", vous avez obtenue " << Conditions_Resultat << " " << "bonnes reponse sur 2. \n\n";
    cout << "Pour la section \"Boucles\", vous avez obtenue " << Boucles_Resultat << " " << "bonnes reponse sur 2. \n\n";
    cout << "Pour la section \"Fonctions\", vous avez obtenue " << Fonctions_Resultat << " " << "bonnes reponse sur 2. \n\n";
    cout << "Pour la section \"Tableaux\", vous avez obtenue " << Tableaux_Resultat << " " << "bonnes reponse sur 1. \n\n";
    Nbr_Bonne_Reponses = Variables_Resultat + Input_Output_Resultat + Operateurs_Resultat + Conditions_Resultat + Boucles_Resultat + Fonctions_Resultat + Tableaux_Resultat;
    cout << "Vous avez obtenue " << Nbr_Bonne_Reponses << " " << "bonnes reponses sur 14\n\n";
    NoteGlobale_Pourcentage = Nbr_Bonne_Reponses * 100 / 14;
    cout << "Votre pourcentage final est de: " << NoteGlobale_Pourcentage << "%\n\n";
    system("PAUSE");
    system("CLS");
}
//Menu
void Menu_Section() {
    system("CLS");
    cout << "********************************* MENU *********************************\n\n\n";
    //Menu
    cout << variables << "\n";
    cout << input_Output << "\n";
    cout << operateurs << "\n";
    cout << conditions << "\n";
    cout << boucles << "\n";
    cout << fonctions << "\n";
    cout << tableaux << "\n";
    cout << statistiques << "\n";
    cout << quitter << "\n\n";
    
    cout << "Veuillez selectionner la matiere en entrant le numero de celle-ci: ";
    cin >> Menu_Choix;
    cin.ignore(numeric_limits <streamsize>::max(), '\n');
    if (Menu_Choix != 1 && Menu_Choix != 2 && Menu_Choix != 3 && Menu_Choix != 4 && Menu_Choix != 5 && Menu_Choix != 6 && Menu_Choix != 7 && Menu_Choix != 8 && Menu_Choix != 9) {
        system("CLS");
        cout << "Entrez un nombre de 1 a 9 en lien avec la matiere choisis..";
        system("PAUSE");
        Menu_Section();
    }
    else {
        switch (Menu_Choix) {
        case 1:system("CLS"); Variables_Section(); Menu_Section(); break;
        case 2:system("CLS"); Input_Output_Section(); Menu_Section(); break;
        case 3:system("CLS"); Operateurs_Section(); Menu_Section(); break;
        case 4:system("CLS"); Conditions_Section(); Menu_Section(); break;
        case 5:system("CLS"); Boucles_Section(); Menu_Section(); break;
        case 6:system("CLS"); Fonctions_Section(); Menu_Section(); break;
        case 7:system("CLS"); Tableaux_Section(); Menu_Section(); break;
        case 8:system("CLS"); Statistiques_Section(); Menu_Section(); break;
        case 9:system("EXIT");
        }
    }
}
//Introduction
void Intro_Section() {
    cout << intro_Texte;
    system("PAUSE");
    Menu_Section();
}
int main()
{
    Intro_Section();
    return 0;
}
