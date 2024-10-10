#include<stdio.h>
#include<conio.h>
//##########################
//#                        #
//#                        #
//#                        #
//#                        #
//#      x                 #
//#                        #
//#                        #
//#         @****          #
//#                        #
//#                        #
//#                        #
//#                        #
//##########################

#define LINHA 10
#define COLUNA 20

//não entendi porque de multiplicar
char mapa_jogo[COLUNA*LINHA];

//função permite que o mapa começe vazio,
//para depois preencher e imprimir as bordas

void incializando_mapa()
{
    int i;
    for (i=0; i<COLUNA*LINHA;i++)
    {
        mapa_jogo[i] = ' ';
    }
}

//montando função para delimitar as bordas do mapa
void montar_bordas()
{
   int x, y;

   for (y=0; y<LINHA;y++)
    {
     for (x=0; x<COLUNA; x++)
     {
        if (x ==0||y ==0||x ==COLUNA-1||y ==LINHA-1)
        {
            mapa_jogo[y*COLUNA + x] = '#';
        }
     }
   }
}
//imprimindo as bordas
void imprimir_bordas()
{
  int x, y;

   for (y=0; y<LINHA;y++)
   {
     for (x=0; x<COLUNA; x++)
     {
       putch(mapa_jogo[y*COLUNA + x]); //estudar função putch
     }
     putch('\n');
   }

}



int main (int argc, char **argv)
{
    incializando_mapa();
    montar_bordas();
    imprimir_bordas();

    return 0;
}
