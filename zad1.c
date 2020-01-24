#include <string.h>
#include <stdio.h>
void zlicz_wystapienia(char* tekst, int* litery, int* cyfry){
    for(int i=0;i<strlen(tekst);i++){
        if(tekst[i]>=97&&tekst[i]<=122) {
            litery[tekst[i]-97]++;
        }
        else if(tekst[i]>=48&&tekst[i]<=58){
            cyfry[tekst[i]-48]++;
        }
    }
}
int ile_znaku(int* litery, int* cyfry,char znak){
    int licznik=0;
    if(znak>=97&&znak<=122) {
        licznik=litery[znak-97];
        }
    else if(znak>=48&&znak<=58){
		licznik=cyfry[znak-48];
    }
    return licznik;
}
int main(){
    int liter[25]={0};
    int cyfr[10]={0};
    char napis[100];
    char znakk;
	printf("Podaj tekst: \n");
	scanf("%s",napis);
	printf("Podaj znak: \n");
	scanf(" %c",&znakk);
    zlicz_wystapienia(napis,liter,cyfr);
    printf("Znak %c wystapil w tekscie: \"%s\" %d razy",znakk,napis,ile_znaku(liter,cyfr,znakk));

}
