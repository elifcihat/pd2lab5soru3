


#include <stdio.h>

/*2- - Bir dizide n eleman saklamak ve i�aret�iyi kullanarak elemanlar� yazd�rmak i�in C'de bir program yaz�n.
Test verisi :
Dizide saklanacak ��e say�s�n� girin :5
Dizideki 5 eleman say�s�n� girin:
eleman - 0 : 5
eleman - 1 : 7
eleman - 2 : 2
eleman - 3 : 9
eleman - 4 : 8
*/




int main(){

    
    int n,*s1;
    printf("dizide saklanacak eleman sayisi:   ");
    scanf("%d",&n);
    int dizi[n];
    printf("Dizideki %d eleman sayisini girin:\n",n);
    for(s1=dizi;s1<dizi+n;s1++)
    {
    	
    	printf("eleman - %d : ",s1-dizi);
    	scanf("%d",s1);
	}



 
 
 
 return 0;
}
