/*Ce programme demande à l'utilisateur deux valeurs a et b et calcule le produit de ces valeurs 
si et seulemnet si a,b > 0 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,p;
    printf("\n====== BIENVENUE ======\n");
    printf("\nEntrez deux valeurs : ");
    scanf("%d %d",&a,&b);
    
    if(a>0 && b>0){
        p = a*b;
        printf("\n%.2f * %.2f = %.2f",a,b,p);
    }else{
        printf("\nEntrez deux valeurs positives !");
    }

    return 0;
}