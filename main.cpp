#include <iostream>
#include "M22.h"
#include "M33.h"

int main(int argc, char** argv) {
    int choice;
    std::cout << "Choisissez le type de matrice :\n";
    std::cout << "1. Matrice 2x2\n";
    std::cout << "2. Matrice 3x3\n";
    std::cout << "Votre choix : ";
    std::cin >> choice;

    if (choice == 1) {
        float matA[2][2], matB[2][2], result[2][2];
        std::cout << "Entrez les elements de la premiere matrice 2x2 :\n";
        std::cin >> matA[0][0] >> matA[0][1] >> matA[1][0] >> matA[1][1];
        
        std::cout << "Entrez les elements de la deuxieme matrice 2x2 :\n";
        std::cin >> matB[0][0] >> matB[0][1] >> matB[1][0] >> matB[1][1];

        int operation;
        std::cout << "Choisissez une operation :\n";
        std::cout << "1. Addition\n2. Soustraction\n3. Multiplication\n4. Trace\n5. Determinant\n6. Transposee\n";
        std::cin >> operation;

        switch(operation) {
            case 1:
                addition(matA, matB, result);
                std::cout << "Resultat de l'addition :\n";
                std::cout << result[0][0] << " " << result[0][1] << "\n" << result[1][0] << " " << result[1][1] << "\n";
                break;
            case 2:
                soustraction(matA, matB, result);
                std::cout << "Resultat de la soustraction :\n";
                std::cout << result[0][0] << " " << result[0][1] << "\n" << result[1][0] << " " << result[1][1] << "\n";
                break;
            case 3:
                multiplication(matA, matB, result);
                std::cout << "Resultat de la multiplication :\n";
                std::cout << result[0][0] << " " << result[0][1] << "\n" << result[1][0] << " " << result[1][1] << "\n";
                break;
            case 4:
                std::cout << "Trace : " << trace(matA) << "\n";
                break;
            case 5:
                std::cout << "Determinant : " << determinant(matA) << "\n";
                break;
            case 6:
                transposee(matA, result);
                std::cout << "Transposee :\n";
                std::cout << result[0][0] << " " << result[0][1] << "\n" << result[1][0] << " " << result[1][1] << "\n";
                break;
            default:
                std::cout << "Operation non valide.\n";
        }
    } else if (choice == 2) {
        float matA[3][3], matB[3][3], result[3][3];
        std::cout << "Entrez les elements de la premiere matrice 3x3 :\n";
        std::cin >> matA[0][0] >> matA[0][1] >> matA[0][2]
                 >> matA[1][0] >> matA[1][1] >> matA[1][2]
                 >> matA[2][0] >> matA[2][1] >> matA[2][2];

        std::cout << "Entrez les elements de la deuxieme matrice 3x3 :\n";
        std::cin >> matB[0][0] >> matB[0][1] >> matB[0][2]
                 >> matB[1][0] >> matB[1][1] >> matB[1][2]
                 >> matB[2][0] >> matB[2][1] >> matB[2][2];

        int operation;
        std::cout << "Choisissez une operation :\n";
        std::cout << "1. Addition\n2. Soustraction\n3. Multiplication\n4. Trace\n5. Déterminant\n6. Transposée\n";
        std::cin >> operation;

        switch(operation) {
            case 1:
                addition(matA, matB, result);
                std::cout << "Resultat de l'addition :\n";
                std::cout << result[0][0] << " " << result[0][1] << " " << result[0][2] << "\n";
                std::cout << result[1][0] << " " << result[1][1] << " " << result[1][2] << "\n";
                std::cout << result[2][0] << " " << result[2][1] << " " << result[2][2] << "\n";
                break;
            case 2:
                soustraction(matA, matB, result);
                std::cout << "Resultat de la soustraction :\n";
                std::cout << result[0][0] << " " << result[0][1] << " " << result[0][2] << "\n";
                std::cout << result[1][0] << " " << result[1][1] << " " << result[1][2] << "\n";
                std::cout << result[2][0] << " " << result[2][1] << " " << result[2][2] << "\n";
                break;
            case 3:
                multiplication(matA, matB, result);
                std::cout << "Resultat de la multiplication :\n";
                std::cout << result[0][0] << " " << result[0][1] << " " << result[0][2] << "\n";
                std::cout << result[1][0] << " " << result[1][1] << " " << result[1][2] << "\n";
                std::cout << result[2][0] << " " << result[2][1] << " " << result[2][2] << "\n";
                break;
            case 4:
                std::cout << "Trace : " << trace(matA) << "\n";
                break;
            case 5:
                std::cout << "Déterminant : " << determinant(matA) << "\n";
                break;
            case 6:
                transposee(matA, result);
                std::cout << "Transposee :\n";
                std::cout << result[0][0] << " " << result[0][1] << " " << result[0][2] << "\n";
                std::cout << result[1][0] << " " << result[1][1] << " " << result[1][2] << "\n";
                std::cout << result[2][0] << " " << result[2][1] << " " << result[2][2] << "\n";
                break;
            default:
                std::cout << "Operation non valide.\n";
        }
    } else {
        std::cout << "Choix non valide.\n";
    }

    return 0;
}
