
#include "iostream"
#include "stdio.h"
using namespace std;
class persona 
{
private:       //atributos de la clase:
  char nombre [30];
  int edad;

public: 
persona();  //constructor: persona (mismo nombre que clase)

            //funciones o METODOS:
    char meter();  
    char escribir();
    void comer();
};


            // inicializar a cero: ------------------------------
persona::persona()
{
    edad=0;  
}


     //funcion 1------------------------------------------
char persona::meter()
{
    printf("\n Mete tu Nombre: ");
    scanf("%s" ,nombre); //meter en la variable nombre, declarada arriba
    printf("\n Mete la Edad: ");
    scanf("%d" ,&edad); //poner & para recojer contenido de int (o float tb)
}
  //funcion 2------------------------------------------
char persona::escribir()
{
    printf("\n Me llamo: %s y mi Edad es: %d \n" ,nombre, edad); //sacar de la variable nombre
}


  //funcion 3------------------------------------------
void persona::comer()
{
    printf("\n Come tu Nombre! \n" );
}


int main()
{
persona p;
p.meter();
p.escribir();
p.comer();

}
