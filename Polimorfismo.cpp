
class Habitante {

private:

	char *nombre;
	
	int edad;

public: 

	Habitante();
	
	virtual ~Habitante();

	Habitante(const Habitante &);

	virtual void dormir();

	// setter/getter o accessors
	virtual char *getNombre() const { return this->nombre;} 

	// inline
	virtual void setNombre(char *nombre) { this->nombre = nombre; } // inline

	virtual int getEdad() const { return this->edad;} // inline

	virtual void setEdad(int edad) { this->edad = edad; } // inline

};
// Constructor
Habitante::Habitante() {
	
	cout << "-clase habitante- Habitante construido."<< endl;

}

// Destructor
Habitante::~Habitante() {

	cout << "-clase habitante- Habitante "<< this->getNombre() << " destruido."<< endl;

}


// constructor copia
Habitante::Habitante(const Habitante & original) {
	
	nombre = new char;
	original.getNombre();

}


// metodo dormir
void Habitante::dormir() {
	
	cout << "-clase habitante- zzzzzZZZZzzzzz zzz" << endl;

}

class Humano : public Habitante {

private:

	char *idioma;

public: 

	Humano();
	
	virtual ~Humano();

	Humano(const Humano &);

	virtual void hablar(char *bla) const;

	// setter/getter o accessors
	virtual char *getIdioma() const { return this->idioma;} // inline

	virtual void setIdioma(char *idioma) { this->idioma = idioma; } // inline

};
// Constructor
Humano::Humano() {

	cout << "-clase Humano- Humano construido."<< endl;

}

// Destructor
Humano::~Humano() {
	
	cout << "-clase Humano- Humano "<< this->getNombre() << " destruido."<< endl;

}

// constructor copia
Humano::Humano(const Humano & original) {

	idioma = new char;
	idioma = original.getIdioma();

}


// metodo hablar
void Humano::hablar(char *bla) const {

	cout << "-clase Humano-" << this->getNombre() << " dice: " << bla << endl;

}

