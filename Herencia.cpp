#include <iostream>
using namespace std;
//herencia simple
class Vehiculo {
public:
  void avanza() {}
};

class Coche : public Vehiculo {
public:
  void avanza(void)
     { cout << "Avanza coche." << endl; }
};//Hereda su funcion avanza de vehiculo

class Moto: public Vehiculo {
public:
  void avanza(void)
     { cout << "Avanza moto." << endl; }
};//hereda su funcion avanza de vehiculo

//herencia multiple
class ClaseA {
   public:
     ClaseA() : valorA(10) {}
     int LeerValor() const { return valorA; }
   protected:
     int valorA;
};

class ClaseB {
   public:
     ClaseB() : valorB(20) {}
     int LeerValor() const { return valorB; }
   protected:
     int valorB;
};

class ClaseC : public ClaseA, public ClaseB {
   public://hereda de clase a y b donde podria utilizar las funciones de cualquiera de los dos 
    int LeerValor() const { return ClaseA::LeerValor(); }//en este caso usa la funcion de A
    
};

int main()
{
  //Herencia simple
  Moto t;
  Coche c;

  t.avanza();
  c.avanza();
  
  //herencia multiple
  ClaseC CC;

   cout << CC.LeerValor() << endl;

  return 0;
}


