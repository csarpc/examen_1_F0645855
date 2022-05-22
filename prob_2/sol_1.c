#include <stdio.h>
#include <stdlib.h>
#include <time.h>





int main(){
    int val, i, c=0, flag=0;

while(val!=0){
    while(flag==0){
    printf("Ingrese numero: ");
        scanf("%d",&val);
        printf("\n");
        //printf("%d",val);
                
        if(val<580 && val>0){
            flag=1;
            printf("Numero valido");
            printf("\n");
        }
        else {
            if(val==0)flag=1;
            else{
                printf("Numero erroneo, vuelva a ingresar numero");
            printf("\n");
            }
        }
    }
    flag=0;

    for(i=1;i<val;i++){
        if(val%i==0){
            //printf("%d",i);
            //printf("\n");
            c=c+i;
        }
    }

    if(val<c)printf("%d es numero abundante",val);
    if(val>c && val>1)printf("%d es numero deficiente",val);
    if(val!=0){
        if(val==c || val==1)printf("%d es numero perfecto",val);
    }
   // printf("%d",c);
    c=0;
    printf("\n");
    
}

printf("Eso es todo amigos");

}