#ifndef M22_H
#define M22_H

void addition(float m1[2][2], float m2[2][2], float M2[2][2]);
void soustraction(float m1[2][2], float m2[2][2], float M2[2][2]);
void multiplication(float m1[2][2], float m2[2][2], float M2[2][2]);
void transposee(float m1[2][2], float M3[2][2]);
float determinant(float m1[2][2]);
float trace(float m1[2][2]);
void inverse(float m1[2][2], float M2[2][2]);

#endif
