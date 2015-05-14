#ifndef CONFIG_HAMMING_AVR_S_H
    #define CONFIG_HAMMING_AVR_S_H
    #pragma once

	// The following preprocessor code selects the architecture
	#ifdef __AVR__
        #ifndef AVR_WARNING
            #define AVR_WARNING
            #warning AVR plateform selected
        #endif // AVR_WARNING
        #define BAUD_RATE 0x19      //38400
		#define F_CPU	16000000UL  //CPU clock frequency
		#include <avr/io.h>
		#define EXIT_FAILURE -1
		#define EXIT_SUCCESS 1

        #include <inttypes.h>
        #include <stdio.h>
        #include <stdlib.h>
	#endif
	// Project configuration
    #ifndef DEBUG
        #define DEBUG
    #endif // DEBUG
    // Hamming configuration
    #define M 3  // Hamming parameter <= 8
    #define N (1 << M) - 1 //Length of the encoded words
    #define K N-M //Length of the data word (without encoding)

#endif // CONFIG_H
