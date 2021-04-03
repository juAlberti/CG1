//
//  Ponto.h
//  OpenGLTest
//
//  Created by Márcio Sarroglia Pinho on 18/08/20.
//  Copyright © 2020 Márcio Sarroglia Pinho. All rights reserved.
//

#ifndef Ponto_hpp
#define Ponto_hpp

#include <iostream>
using namespace std;

class Ponto {
    
public:
    float x,y,z;
    Ponto ();
    Ponto(float x, float y, float z=0);
    void set(float x, float y, float z=0);
    void imprime();
    void multiplica(double x, double y, double z);
    void soma(double x, double y, double z);
} ;


Ponto ObtemMinimo (Ponto P1, Ponto P2);

Ponto ObtemMaximo (Ponto P1, Ponto P2);

#endif /* Ponto_hpp */
