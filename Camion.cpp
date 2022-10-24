/*
  Archivo: Camion.cpp
  Autor: Angel Garcia <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2022-10-24
  Fecha última modificación: 2022-10-24
  Versión: 0.1
  Licencia: GNU-GPL
*/

#include "Camion.h"


Camion::Camion(string laPlaca, int laCapacidadMaxima)
{
  placa = laPlaca;  
  capacidadMaxima = laCapacidadMaxima;   
  kilosQueTieneDentro = 0; 
  mudanzaRealizada = false; 
}


string Camion::cualEsLaPlaca()
{
  return placa; 
}


bool Camion::cargarUnObjeto(int pesoDelObjeto) 
{
  if(kilosQueTieneDentro + pesoDelObjeto <= capacidadMaxima) 
  {
    kilosQueTieneDentro = kilosQueTieneDentro - pesoDelObjeto;
    return true;
  }
  else
  {
    return false;   
  }
}





void Camion::hacerMudanza() 
{
  mudanzaRealizada = true;    
}


int Camion::pesoTransportado() 
{
  if(mudanzaRealizada)
    return kilosQueTieneDentro;
  else
    return 0; 
} 


void Camion::descargar() 
{
  mudanzaRealizada = false;
  kilosQueTieneDentro = 0;
}




