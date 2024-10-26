#include "M22.h"
#include <iostream>

void addition(float m1[2][2], float m2[2][2], float M2[2][2]) {
    M2[0][0] = m1[0][0] + m2[0][0];
    M2[0][1] = m1[0][1] + m2[0][1];
    M2[1][0] = m1[1][0] + m2[1][0];
    M2[1][1] = m1[1][1] + m2[1][1];
}

void soustraction(float m1[2][2], float m2[2][2], float M2[2][2]) {
    M2[0][0] = m1[0][0] - m2[0][0];
    M2[0][1] = m1[0][1] - m2[0][1];
    M2[1][0] = m1[1][0] - m2[1][0];
    M2[1][1] = m1[1][1] - m2[1][1];
}

void multiplication(float m1[2][2], float m2[2][2], float M2[2][2]) {
    M2[0][0] = (m1[0][0] * m2[0][0]) + (m1[0][1] * m2[1][0]);
    M2[0][1] = (m1[0][0] * m2[0][1]) + (m1[0][1] * m2[1][1]);
    M2[1][0] = (m1[1][0] * m2[0][0]) + (m1[1][1] * m2[1][0]);
    M2[1][1] = (m1[1][0] * m2[0][1]) + (m1[1][1] * m2[1][1]);
}

void transposee(float m1[2][2], float M3[2][2]) {
    M3[0][0] = m1[0][0];
    M3[0][1] = m1[1][0];
    M3[1][0] = m1[0][1];
    M3[1][1] = m1[1][1];
}

float determinant(float m1[2][2]) {
    return (m1[0][0] * m1[1][1]) - (m1[1][0] * m1[0][1]);
}

float trace(float m1[2][2]) {
    return m1[0][0] + m1[1][1];
}

void inverse(float m1[2][2], float M2[2][2]) {
    float det = determinant(m1);
    if (det != 0) {
        M2[0][0] =  m1[1][1] / det;
        M2[0][1] = -m1[0][1] / det;
        M2[1][0] = -m1[1][0] / det;
        M2[1][1] =  m1[0][0] / det;
    } else {
        std::cout << "Erreur : la matrice n'est pas inversible.\n";
    }
}
