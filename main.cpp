    /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: johnm
 *
 * Created on 29 de marzo de 2021, 10:16
 */

#include <cstdlib>
#include <iostream>
#include <string>


/**
 *@brief Estructura Vehiculo
 * @param Marca
 * @param Modelo
 * @param Matricula
 * @param AnioFabricacion
 * @param Precio
 */
struct Vehiculo{
    std::string Marca;
    std::string Modelo;
    std::string Matricula;
    int AnioFabricacion;
    float Precio;

};
/**
 * @brief Funcion leePorTeclado que introduce los datos de un vehiculo por teclado
 * @param coche
 */

void leePorTeclado(Vehiculo &coche){
    std::cout << "Introduzca los nuevos datos sobre el vehiculo" << std::endl;
    std::cout << "Marca: ";
    std::cin >> coche.Marca;
    std::cout << "Modelo: ";
    std::cin >> coche.Modelo;
    std::cout << "Matricula: ";
    std::cin >> coche.Matricula;
    std::cout << "AnioFabricacion: ";
    std::cin >> coche.AnioFabricacion;
    std::cout << "Precio: ";
    std::cin >> coche.Precio;
}
/**
 * @brief Funcion leePorTecladoSobrecargada version sobrecargada de la funcion leePorTeclado
 * @param coche
 */
void leePorTecladoSobrecargada(Vehiculo *coche){
    std::cout << "Introduzca los nuevos datos sobre el vehiculo" << std::endl;
    std::cout << "Marca: ";
    std::cin >> coche->Marca;
    std::cout << "Modelo: ";
    std::cin >> coche->Modelo;
    std::cout << "Matricula: ";
    std::cin >> coche->Matricula;
    std::cout << "AnioFabricacion: ";
    std::cin >> coche->AnioFabricacion;
    std::cout << "Precio: ";
    std::cin >> coche->Precio;
}
/**
 * @brief Funcion muestraEnPantalla muestra los datos del vehiculo
 * @param coche
 */
void muestraEnPantalla(Vehiculo &coche){
    std::cout << "Marca: " << coche.Marca << " Modelo: " << coche.Modelo << " Matricula: " << coche.Matricula 
            << " AnioFabricacion: " << coche.AnioFabricacion << " Precio: " << coche.Precio; 
}

/**
 * @brief Funcion muestraEnPantallaSobrecargada version sobrecargada de la funcion muestraEnPantalla
 * @param coche
 */

void muestraEnPantallaSobrecargada(Vehiculo *coche){
    std::cout << "Marca: " << coche->Marca << " Modelo: " << coche->Modelo << " Matricula: " << coche->Matricula 
            << " AnioFabricacion: " << coche->AnioFabricacion << " Precio: " << coche->Precio; 
}

int main(int argc, char** argv) {
    int MAX_VEHICULOS = 3; 
    Vehiculo vectorDeVehiculos[MAX_VEHICULOS];
    /*
   for( int i = 0; i < MAX_VEHICULOS; i++ ){ 
    leePorTeclado( vectorDeVehiculos[i] );
   }
     */
    Vehiculo* PunteroDeVehiculos=nullptr;
    PunteroDeVehiculos=new Vehiculo[MAX_VEHICULOS];
   for( int i = 0; i < MAX_VEHICULOS; i++ ){ 
    leePorTecladoSobrecargada( vectorDeVehiculos );
   } 
    return 0;
}

