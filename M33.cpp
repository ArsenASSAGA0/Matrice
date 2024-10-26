#include "M33.h"
#include <iostream>

void addition(float m1[3][3], float m2[3][3], float M3[3][3]) {
    M3[0][0] = m1[0][0] + m2[0][0];
    M3[0][1] = m1[0][1] + m2[0][1];
    M3[0][2] = m1[0][2] + m2[0][2];
    
    M3[1][0] = m1[1][0] + m2[1][0];
    M3[1][1] = m1[1][1] + m2[1][1];
    M3[1][2] = m1[1][2] + m2[1][2];
    
    M3[2][0] = m1[2][0] + m2[2][0];
    M3[2][1] = m1[2][1] + m2[2][1];
    M3[2][2] = m1[2][2] + m2[2][2];
}

void soustraction(float m1[3][3], float m2[3][3], float M3[3][3]) {
    M3[0][0] = m1[0][0] - m2[0][0];
    M3[0][1] = m1[0][1] - m2[0][1];
    M3[0][2] = m1[0][2] - m2[0][2];
    
    M3[1][0] = m1[1][0] - m2[1][0];
    M3[1][1] = m1[1][1] - m2[1][1];
    M3[1][2] = m1[1][2] - m2[1][2];
    
    M3[2][0] = m1[2][0] - m2[2][0];
    M3[2][1] = m1[2][1] - m2[2][1];
    M3[2][2] = m1[2][2] - m2[2][2];
}

void multiplication(float m1[3][3], float m2[3][3], float M3[3][3]) {
    M3[0][0] = m1[0][0] * m2[0][0] + m1[0][1] * m2[1][0] + m1[0][2] * m2[2][0];
    M3[0][1] = m1[0][0] * m2[0][1] + m1[0][1] * m2[1][1] + m1[0][2] * m2[2][1];
    M3[0][2] = m1[0][0] * m2[0][2] + m1[0][1] * m2[1][2] + m1[0][2] * m2[2][2];
    
    M3[1][0] = m1[1][0] * m2[0][0] + m1[1][1] * m2[1][0] + m1[1][2] * m2[2][0];
    M3[1][1] = m1[1][0] * m2[0][1] + m1[1][1] * m2[1][1] + m1[1][2] * m2[2][1];
    M3[1][2] = m1[1][0] * m2[0][2] + m1[1][1] * m2[1][2] + m1[1][2] * m2[2][2];
    
    M3[2][0] = m1[2][0] * m2[0][0] + m1[2][1] * m2[1][0] + m1[2][2] * m2[2][0];
    M3[2][1] = m1[2][0] * m2[0][1] + m1[2][1] * m2[1][1] + m1[2][2] * m2[2][1];
    M3[2][2] = m1[2][0] * m2[0][2] + m1[2][1] * m2[1][2] + m1[2][2] * m2[2][2];
}

void transposee(float m1[3][3], float M3[3][3]) {
    M3[0][0] = m1[0][0];
    M3[0][1] = m1[1][0];
    M3[0][2] = m1[2][0];
    
    M3[1][0] = m1[0][1];
    M3[1][1] = m1[1][1];
    M3[1][2] = m1[2][1];
    
    M3[2][0] = m1[0][2];
    M3[2][1] = m1[1][2];
    M3[2][2] = m1[2][2];
}

float determinant(float m[3][3]) {
    return m[0][0] * (m[1][1] * m[2][2] - m[1][2] * m[2][1]) -
           m[0][1] * (m[1][0] * m[2][2] - m[1][2] * m[2][0]) +
           m[0][2] * (m[1][0] * m[2][1] - m[1][1] * m[2][0]);
}

float trace(float m[3][3]) {
    return m[0][0] + m[1][1] + m[2][2];
}

void inverse(float m[3][3], float M3[3][3]) {
    float det = determinant(m);
    if (det != 0) {
        M3[0][0] = (m[1][1] * m[2][2] - m[1][2] * m[2][1]) / det;
        M3[0][1] = (m[0][2] * m[2][1] - m[0][1] * m[2][2]) / det;
        M3[0][2] = (m[0][1] * m[1][2] - m[0][2] * m[1][1]) / det;
        
        M3[1][0] = (m[1][2] * m[2][0] - m[1][0] * m[2][2]) / det;
        M3[1][1] = (m[0][0] * m[2][2] - m[0][2] * m[2][0]) / det;
        M3[1][2] = (m[0][2] * m[1][0] - m[0][0] * m[1][2]) / det;
        
        M3[2][0] = (m[1][0] * m[2][1] - m[1][1] * m[2][0]) / det;
        M3[2][1] = (m[0][1] * m[2][0] - m[0][0] * m[2][1]) / det;
        M3[2][2] = (m[0][0] * m[1][1] - m[0][1] * m[1][0]) / det;
    } else {
        std::cout << "Erreur : la matrice n'est pas inversible.\n";
    }
}
