#include <stdint.h>
#include "M4MemMap.h"
#include "GPIO.h"
#include "GPIO_Cfg.h"
#include "UART.h"
#include "UART_Cfg.h"


uint8_t UART_Rx_IntBuff[400]={0};
uint8_t UART_Tx_IntBuff[]="What hands are here? They pluck out mine eyes! Will all great Neptune’s ocean wash this blood clean from my hands? Noooo! This my hand will rather the multitudinous seas incarnadine, making the green one red! Ahhhhh! Do you hear the people sing, singing the song of angry men? It’s the music of the people who will not be slaves again. What hands are here? They pluck out mine eyes! Will all great Neptune’s ocean wash this blood clean from my hands? Noooo! This my hand will rather the multitudinous seas incarnadine, making the green one red! Ahhhhh! Do you hear the people sing, singing the song of angry men? It’s the music of the people who will not be slaves again.";
uint8_t XXX,Y1,Y2 = 0;


int main(void)
{

    GPIO_Init();
    UART_Init();
    EN_INT(5);  //UART0
    //EN_INT(6);  //UART1
    //EN_INT(33); //UART2
    //EN_INT(59); //UART3
    //EN_INT(60); //UART4
    //EN_INT(61); //UART5
    //EN_INT(63); //UART7

    //uint32_t k=0;


    //UART_Tx_Init(UART_Tx_IntBuff,671,0);
    UART_Rx_Init(UART_Rx_IntBuff,400,0);


    while(1)
    {
        /*
        for(k=0;k<200000;k++);
        UART_Tx(0);
        */
        //UART_Rx(0);
    }


    return 0;

    }

