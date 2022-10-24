/*
  Archivo: Camion.h
  Autor: Angel Garcia <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2022-10-24
  Fecha última modificación: 2022-10-24
  Versión: 0.1
  Licencia: GNU-GPL
*/

/**
  CLASE: Camion
  INTENCIÓN: Estoy modelando un camión con una placa, que puede transportar una cierta carga en kilos, y que tiene una capacidad máxima en kilos. Se le puede pedir que me diga su placa, que cargue un objeto, que transporte toda la carga y que me diga cuanto transportó y que descargue todo.
  RELACIONES: ninguna
*/

#ifndef CAMION_H
#define CAMION_H

#include <string>
#include <iostream>  // Para depurar. Luego hay que borrarlo
using namespace std;


class Camion
{
  private:
  string placa;
  int capacidadMaxima;    
  int kilosQueTieneDentro;
  bool mudanzaRealizada;
       
  public:
  /**
  Construye un Camion con una placa y una capacidad máxima dadas. Su carga inicial es cero.
  */
  Camion(string laPlaca, int laCapacidadMaxima);
  /**
  Retorna la placa delCamion
  */
  virtual string cualEsLaPlaca(); 
  /** 
  Carga un objeto al camion. Retorna true si se pudo hacer y false si no se pudo  
  */
  virtual bool cargarUnObjeto(int pesoDelObjeto); 
  /**
  Hace la mudanza de los objetos cargados
  */
  virtual void hacerMudanza();
  /** Retorna la carga que transportó */
  virtual int pesoTransportado();  
  /**
  Descargar los objetos transportados, y asi termina la mudanza
  */
  virtual void descargar();
};

#else
class Camion;
#endif
