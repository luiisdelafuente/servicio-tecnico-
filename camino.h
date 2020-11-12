
#pragma once

#include "inicio.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


class camino: public QWidget
{
	Q_OBJECT

private:
	QLabel *accion;
	QLabel *pregunta;
	QLabel *otracosa;
	QPushButton * si;
	QPushButton * no;

public:
	camino(FILE*FP,QWidget * parent=0);
	FILE *FPP;

public slots:
	void refrescarventana();

	//Camino 1
	void ventana3();
	void ventana4();
	void final1();
	void final2();

	//Camino 2
};


