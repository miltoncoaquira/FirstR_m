#include "Complejo.h"
#include <ostream>


Complejo::Complejo (): m_real(0), m_imaginario(0) {}
Complejo::Complejo ( double real , double imaginario  ) : m_real(real), m_imaginario(imaginario) {}
Complejo::~Complejo () {}

void Complejo::setReal( double real){
    m_real = real;
}

void Complejo::setImaginario(double imaginario){
    m_imaginario = imaginario;
}
        
double Complejo::getReal() const{
    return m_real;
}

double Complejo::getImaginario() const{
    return m_imaginario;
}


Complejo& Complejo::operator+=( const Complejo& otro ) {
    m_real += otro.getReal();
    m_imaginario += otro.getImaginario();
    return *this;
}

Complejo& Complejo::operator-=( const Complejo& otro ) {
    m_real -= otro.getReal();  
    m_imaginario -= otro.getImaginario();
    return *this;
}

Complejo& Complejo::operator*=( const Complejo& otro ){
    double new_real = m_real*otro.m_real - m_imaginario*otro.m_imaginario;
    double new_imaginario = m_real*otro.m_imaginario + m_imaginario*otro.m_real;
    m_real = new_real;
    m_imaginario = new_imaginario;
    return *this;
}


        // Complejo operator+=( Complejo );
        // Complejo operator-=( Complejo );
        // Complejo operator*=( Complejo );
        // Complejo operator/=( Complejo );

        // Complejo operator=( Complejo );
        // Complejo operator==( Complejo );

std::ostream& operator<<(std::ostream& os, const Complejo& c){
    os << c.getReal() << " " << (c.getImaginario() >= 0 ? "+" : "-")
       << " " << (c.getImaginario() >= 0 ? c.getImaginario() : -c.getImaginario())
       << "i";
    return os;
}

Complejo operator*(Complejo a, const Complejo& c){
    return a*=c;
}

bool Complejo::operator==( const Complejo& otro){
    return m_real == otro.m_real && m_imaginario == otro.m_imaginario;
}
