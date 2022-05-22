#include "mbed.h"

BusIn botones(p7,p8,p9);
DigitalIn sw1(p5);
DigitalIn sw2(p6);
DigitalOut led_rojo(p10);
DigitalOut led_azul(p11);
DigitalOut led_amarillo(p12);


int main() {
    
    int ord[3];
    int aux, i, j;
    int num1 = 8, num2=6, num3=2;
    
    while (1) {
        
        
        /////////////printf("\nEl valor del boton es %d",sw1.read());    
        //s1////////////////////////////////////////////////////////
        if(sw1.read()==1){
            printf("\nEl valor del bus es %d", botones.read());
            wait_ms(1000);
            }
        //ordenar///////////////////////////
        ord[0]=mun1;
        ord[1]=num2;
        ord[2]=num3;
        
        
        for(i=0;i<3;i++){
            for(j=0;j<3-i-1;j++){
                if (ord[j]>ord[j+1]){
                    aux=ord[j];
                    ord[j]=ord[j+1];
                    ord[j+1]=aux;
                }
            }
        }
        //sw2//////////////////////////////////////////
        if(sw2.read()==1){
        
            for(i=0;i<ord[0];i++){
                led_rojo=1;
                wait_ms(100);
                led_rojo=0;
                wait_ms(100);
            }
        
            for(i=0;i<ord[1];i++){
                led_azul=1;
                wait_ms(100);
                led_azul=0;
                wait_ms(100);
            }
        
            for(i=0;i<ord[2];i++){
                led_amarillo=1;
                wait_ms(100);
                led_amarillo=0;
                wait_ms(100);
            }
        
        }
        
        
    }
}