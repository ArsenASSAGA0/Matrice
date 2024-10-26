#ifndef M33_H
#define M33_H

void addition(float m1[3][3], float m2[3][3], float M3[3][3]);
void soustraction(float m1[3][3], float m2[3][3], float M3[3][3]);
void multiplication(float m1[3][3], float m2[3][3], float M3[3][3]);
void transposee(float m1[3][3], float M3[3][3]);
float determinant(float m[3][3]);
float trace(float m[3][3]);
void inverse(float m[3][3], float M3[3][3]);

#endif
