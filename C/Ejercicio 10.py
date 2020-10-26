# -*- coding: utf-8 -*-
"""
Created on Sat Oct 17 20:24:37 2020

@author: PC2
"""

#Entrada de datos
KM=float(input('Dame el total de kilómetros por recorrer: '))
TI=str(input('Dame el tipo de autobús, A, B o C: '))
NPR=int(input('Dame el número de personas real: '))
#Procesos
if TI=="A":
    CK=2
else:
    if TI=="B":
        CK=2.50
    else:
        CK=3
        if NPR==20:
            NP=20
        else:
            NP=NPR
TO=NPR*CK*KM
CP=TO/NPR
#Salida (Mostrar resultado(s))
print(f'La persona pagará: {CP}')
print(f"El costo del viaje: {TO}")
input('Presione enter para continjuar...')
