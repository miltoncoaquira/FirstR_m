#include <iostream>
#include <string>
#include <array>

#include <cstdlib>
#include <ctime>

template < typename T >
using Operador= T(*)(T[],size_t) ;

template < typename T >
void ordenar ( T vec[], size_t n ){
    for( size_t i = 0; i < n - 1 ; i++){
        for( size_t j = 0; j < n - i - 1; j++){
            if( vec[j] > vec[j+1]){
                T temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }
}

template < typename T >
void mostrar( const T vec[], size_t n ){
    
    std::cout << "[ ";
    for( size_t i = 0; i < n; i++ ){
        std::cout << vec[i] << " ";
    }
    std::cout << "]" << std::endl;
}

template <typename T, size_t N>
void mostrarA(std::array<T,N> arreglo){
    std::cout << "[ ";
    for( auto x : arreglo ){
        std::cout << x << " ";
    }
    std::cout << "]" << std::endl;
}


template < typename T >

T max( T vec[], size_t n ){
    T max = vec[0];
    for( size_t i = 1; i < n; i++ ){
        if(vec[i] > max)
            max = vec[i];
    }
return max;    
}






template < typename T >
void procesar( T vec[], size_t n, T (*f)(T[], size_t) ){
    std::cout << f(vec,n) << std::endl;
}

template <size_t N>
void generarArregloAleatorio( std::array<int,N>& arreglo, int mod){
    static srand(time(0));
    for( int& x : arreglo ){
        x = rand() % mod;
    }
}


int main(){

    std::cout << "zzzzzzzzzzz" << std::endl;

    void (*f)(int[], size_t) = ordenar;
    
    int vec[]= {1,5,5,7,1,-8};

    ordenar( vec, 6 );

    mostrar( vec, 6);

    float vec1[]= {5.1, 5.2, -0.1, -2.1, 0};

    ordenar( vec1, 5);

    mostrar( vec1, 5);

    std::string vec2[] ={ "zz", "aaa", "az", "zzz", "zza"};
    
    ordenar<std::string>( vec2, 5);

    mostrar( vec2, 5);

    const size_t tamanio = 20;
    std::array<int, tamanio> vec5{};
    int mod = 50;

    mostrarA( vec5 ); 
    generarArregloAleatorio( vec5, mod );
    mostrarA( vec5 );

    std::cout << max(vec2, 5) << std::endl;

    int vec9[tamanio];
    for( size_t i=0; i<tamanio; i++){
        vec9[i] = vec5[i];
    }

    std::cout << max(vec9, tamanio) << std::endl;

    vec9[10] = 47;

    procesar( vec9, tamanio, max );

    Operador<int> op= max;

    procesar( vec9, tamanio, op);


    
return 0;    
}