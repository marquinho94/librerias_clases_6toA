#if defined(__AVR_ATmega328P__)
    #define tx 1
    #define rx 2
#else #error "placa no soportada" #warning "no seas pancho"
#endif

#ifndef MI_LIBRERIA_H
#define MI_LIBRERIA_H

    #ifndef ARDUINO_H
        #include <Arduino.h>
    #endif

int suma_lib (int param1, int param2);
int resta_lib(int param1, int param2);

void cualqueira ();

bool lecturaYcomparacion();



#endif