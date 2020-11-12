

#include "camino.h"
#include "inicio.h"

camino:: camino(FILE*FP, QWidget * parent): QWidget(parent)
{


	setGeometry(400,200,550,150);
	setFixedSize(550,350);
	setWindowTitle("Field Service");



	accion=new QLabel("Degradacion de imagen y pixelacion ",this);
	accion->setGeometry(150,100,350,80);
	accion->setFont(QFont("Arial",14));


	pregunta=new QLabel(this);
	pregunta->setGeometry(185,200,200,20);
	pregunta->setText("¿surge en todas las bocas?");
	pregunta->setFont(QFont("Arial",11));




	si=new QPushButton("Si",this);
	si->setGeometry(450, 300, 80, 30);

	no=new QPushButton("no",this);
	no->setGeometry(50, 300, 80, 30);

	FPP=FP;
	connect(no,SIGNAL(clicked()),this,SLOT(refrescarventana()));

}

void camino::refrescarventana()
{
	accion->setText("Comprobar el estado de los divisores \n          y o recablear bocas");
	accion->setFont(QFont("Arial",14));

	pregunta->setGeometry(260,200,200,20);
	pregunta->setText("¿Persiste?");

	connect(no,SIGNAL(clicked()),this,SLOT(ventana3()));
	connect(si,SIGNAL(clicked()),this,SLOT(ventana4()));
}


//Inicio de Camino 1
void camino::final1()
{
	struct visita_tecnica_s vt;
	fread(&vt,sizeof(vt),1,FPP);

	char anadir [80]=("\Se reemplazo(fuente de alimentacion y/o decodificador");	//Agrago trabajo
	strcat(vt.trabajo_realizado,anadir); //

	fseek(FPP,sizeof(vt)*-1,SEEK_CUR);
	fseek(FPP,0,SEEK_CUR);
	fwrite(&vt,sizeof(vt),1,FPP);



	fseek(FPP,sizeof(vt)*-1,SEEK_CUR);
	close();

}

void camino::final2()
{
	struct visita_tecnica_s vt;
	fread(&vt,sizeof(vt),1,FPP);

	char anadir [90]=("Se cambio la fuente y el decodificar, aun persiste , se dejo asentado en despacho");	//Agrago trabajo
	strcat(vt.trabajo_realizado,anadir); //

	fseek(FPP,sizeof(vt)*-1,SEEK_CUR);
	fseek(FPP,0,SEEK_CUR);
	fwrite(&vt,sizeof(vt),1,FPP);

	fseek(FPP,sizeof(vt)*-1,SEEK_CUR);
	close();

}

void camino::ventana3()
{
	struct visita_tecnica_s vt;
	fread(&vt,sizeof(vt),1,FPP);

	char anadir [80]=(" :Se Comprobo el estado de divisores y se recableo \n");	//Agrago trabajo
	strcat(vt.trabajo_realizado,anadir); //

	fseek(FPP,sizeof(vt)*-1,SEEK_CUR);
	fseek(FPP,0,SEEK_CUR);
	fwrite(&vt,sizeof(vt),1,FPP);


	printf("\ntecnico :%s",vt.tecnico);
	printf("\nTrabajo: %s",vt.trabajo_realizado);

	fseek(FPP,sizeof(vt)*-1,SEEK_CUR);
	close();
}

void camino::ventana4()
{


//fin de Camino 1
	accion->setText("Cambiar fuente y si persiste cambiar el decodificador");
	accion->setGeometry(100,100,350,80);
	accion->setFont(QFont("Arial",14));

	pregunta->setGeometry(260,200,200,20);
	pregunta->setText("¿Persiste?");

	si->setText("Si llamar a cast y finalizar");
	si->setGeometry(400, 300, 150, 30);

	no->setText("No, Finalizar");
	no->setGeometry(50, 300, 150, 30);

	connect(no,SIGNAL(clicked()),this,SLOT(final1()));
	connect(si,SIGNAL(clicked()),this,SLOT(final2()));
}
