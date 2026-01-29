#ifndef COMPLEJO_H
#define COMPLEJO_H


#include <ostream>

//template
class Complejo {
    private:
        double m_real;
        double m_imaginario;
    public:
        Complejo ();
        Complejo (double, double);
        ~Complejo ();

        void setReal(double);
        void setImaginario(double);

        double getReal() const;
        double getImaginario() const;

        Complejo& operator+=( const Complejo& );
        Complejo& operator-=( const Complejo& );
        Complejo& operator*=( const Complejo& );
        // Complejo& operator/=( const Complejo& );

        // Complejo operator/=( Complejo );

        // Complejo operator=( Complejo );
    bool operator==( const Complejo& );
        
};

std::ostream& operator<<(std::ostream&, const Complejo& );
Complejo operator*( Complejo, const Complejo& );
#endif