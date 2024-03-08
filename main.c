#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    char character;

    printf("entrer un character: ");
    scanf("%c",&character);
    int ascii = (int) character;
    printf("code ASCII de %c est: %d",character,ascii);

    return 0;
}

float perimetre(float longeure, float largeure){
    return (longeure + largeure) * 2;
}

float surface(float longeure, float largeure){
    return longeure * largeure;
}

int main(){
    float lngr , lrgr;

    printf("\t\t\tCALCUL SURFACE ET PEREMETRE \n\n");

    printf("entrer la langeur:");
    scanf("%f",&lngr);
    printf("entrer la largeur:");
    scanf("%f",&lrgr);
    printf("\n\n")
    printf("\tPeremetre : %.2f\n",perimetre(lngr,lrgr));
    printf("\tSurface: %.2f",surface(lngr,lrgr));
}

char ToUpperCase (char lowerCase){
    int ascii = (int) lowerCase - 32;
    return (char) ascii;
}

int main(){
    char lowerCase ;
    printf("\t\t\tminiscul to majoscul \n");
    printf("entrer un caracter miniscule :");
    scanf("%c",&lowerCase);
    printf("Majescule: %c",ToUpperCase(lowerCase));
}
*/
float addition(float a, float b){
    return a + b;
}

int main(){
    float a,b;
    printf("\t\taddition \n");
    printf("entrer le 1er chiffre:");
    scanf("%f",&a);
    printf("entrer la 2eme chiffre: ");
    scanf("%f",&b);

    printf("%.2f",addition(a,b));
}

