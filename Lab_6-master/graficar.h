#ifndef GRAFICAR_H
#define GRAFICAR_H

#include <map>
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include "planeta.h"
#include <string.h>
#include <string>
#include <fstream>

class Graficar: public QGraphicsItem
{
public:
    Graficar(float x, float y, float vx, float vy, float m, float r);
    ~Graficar();
    void Actualizar();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void setEscala(float s);
    Planeta* getEsf();

private:
    Planeta* P;
    float escala;
};


#endif // GRAFICAR_H
