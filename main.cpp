#include <iostream>
#include <string>
#include <array>

#include <cstdlib>
#include <ctime>



template < typename T >
void ordenar ( T vec[], int n ){
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
void mostrar( const T vec[], int n ){
    
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

//void procesar( int vec, )

template <size_t N>
void generarArregloAleatorio( std::array<int,N>& arreglo, int mod){
    static srand(time(0));
    for( int& x : arreglo ){
        x = rand() % mod;
    }
}


int main(){

    std::cout << "zzzzzzzzzzz" << std::endl;

    void (*f)(int[], int) = ordenar;
    
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

    
return 0;    
}