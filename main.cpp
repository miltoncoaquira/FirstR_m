#include <iostream>
#include "Complejo.h"


int main(){

    Complejo a, z1(-1,-1);
    // Complejo c = a;
    std::cout << "z1: " << z1.getReal() << " + " << z1.getImaginario() << "i" << std::endl;
    // a = z1; 
    // //std::cout << z;
    Complejo z3(-1,1);
    z1 += z3;   
    std::cout << z3 <<"\n " << z1 << std::endl;
    Complejo z5(1,1); 
    std::cout << (z1*z3) << std::endl;
    std::cout << (z1*z3)*z5 << std::endl;
    // z3 = z1 * z2;
    // z3 = z1 / z2;
    Complejo z7(2,-2);
    if( z7 == z1*z3)
    std::cout << "Pichulaaaaaaaaaaaaaaaaa" << std::endl;
    // z5 += z3;
    // z5 /= z3;

    // z3 == z5;
    
    // //conmutatividad 
    
}