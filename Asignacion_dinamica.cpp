#include <iostream>
 using namespace std;
 
class Punto

{
 public:
  Punto(int X=0,int Y=0)

    {
      establecer(X,Y);
    }
  void establecer(int x1,int y1)

  {
    x = x1;
    y = y1;

  }
  void imprimir(void)
  {
    cout << "(" << x << "," << y << ")" << endl;

  }
 private:
  int x;
  int y;

};

int main()
{
  //declaracion e inicializacion
  Punto J(45,-12);

  Punto *ptrQ;
  ptrQ = new Punto(5,7);

  Punto *arreglodePuntos;
  arreglodePuntos = new Punto[10];

  //imprimimos
  cout << "J";
  J.imprimir();

  cout << "ptrQ";
  ptrQ->imprimir();
  for (int i = 0 ; i < 10 ; i++)

    {
      cout << "arreglodePuntos[" << i <<"]";
      arreglodePuntos[i].imprimir();

    }
  //liberamos
  delete ptrQ;
  delete [] arreglodePuntos;

  //fin
  return 0;
}
