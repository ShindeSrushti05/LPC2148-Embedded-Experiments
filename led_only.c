/******************************************************************************/
/* Name       : Srushti Pradip Shinde                                        */
/* Roll No.   : 13                                                           */
/* PRN No.    : 12410772                                                     */
/* Experiment : Interfacing LED with LPC2148                                 */
/******************************************************************************/

#include <LPC21xx.H>

void delay(void)
{
    unsigned int i;
    
    for(i = 0; i < 1000000; i++);
}

int main(void)
{
    unsigned int i;

    /* Configure P1.16 to P1.23 as output */
    IODIR1 = 0x00FF0000;

    while(1)
    {
        /* LED ON one by one */
        for(i = 16; i <= 23; i++)
        {
            IOSET1 = (1 << i);
            delay();
            IOCLR1 = (1 << i);
        }
    }
}