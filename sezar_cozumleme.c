#include<stdio.h>
 
int main()
{
	char mesaj[100], karakter;
	int i, anahtar;
	
	printf("Cozumlenecek Metni Gir: ");
	gets(mesaj);
	printf("Anahtar Sayisini Gir: ");
	scanf("%d", &anahtar);
	
	for(i = 0; mesaj[i] != '\0'; ++i){
		karakter = mesaj[i];
		
		if(karakter >= 'a' && karakter <= 'z'){
			karakter = karakter - anahtar;
			
			if(karakter < 'a'){
				karakter = karakter + 'z' - 'a' + 1;
			}
			
			mesaj[i] = karakter;
		}
		else if(karakter >= 'A' && karakter <= 'Z'){
			karakter = karakter - anahtar;
			
			if(karakter < 'A'){
				karakter = karakter + 'Z' - 'A' + 1;
			}
			
			mesaj[i] = karakter;
		}
	}
	
	printf("Cozumlenmis Metin: %s", mesaj);
	
	return 0;
}
