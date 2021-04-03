//
//  Poligono.cpp
//  OpenGLTest
//
//  Created by Márcio Sarroglia Pinho on 18/08/20.
//  Copyright © 2020 Márcio Sarroglia Pinho. All rights reserved.
//

#include "Poligono.h"

Poligono::Poligono()
{
    
}

void Poligono::insereVertice(Ponto p)
{
    Vertices.push_back(p);
}

void Poligono::insereVertice(Ponto p, int pos)
{
    if ((pos < 0) || (pos>Vertices.size()))
    {
        cout << "Metodo " << __FUNCTION__ << ". Posicao Invalida. Vertice nao inserido." << endl;
        return;
    }
    Vertices.insert(Vertices.begin()+pos, p);
}

Ponto Poligono::getVertice(int i)
{
    return Vertices[i];
}
void Poligono::desenhaPoligono()
{
    glBegin(GL_LINE_LOOP);
    for (int i=0; i<Vertices.size(); i++)
        glVertex3f(Vertices[i].x,Vertices[i].y,Vertices[i].z);
    glEnd();
}
void Poligono::desenhaVertices()
{
    glBegin(GL_POINTS);
    for (int i=0; i<Vertices.size(); i++)
        glVertex3f(Vertices[i].x,Vertices[i].y,Vertices[i].z);
    glEnd();
}
void Poligono::imprime()
{
    for (int i=0; i<Vertices.size(); i++)
        Vertices[i].imprime();
}
unsigned long Poligono::getNVertices()
{
    return Vertices.size();
}

void Poligono::obtemLimites(Ponto &Min, Ponto &Max)
{
    Max = Min = Vertices[0];
    
    for (int i=0; i<Vertices.size(); i++)
    {
        Min = ObtemMinimo (Vertices[i], Min);
        Max = ObtemMaximo (Vertices[i], Max);
    }
}
