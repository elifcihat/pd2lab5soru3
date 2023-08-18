


#include <stdio.h>

/*2- - Bir dizide n eleman saklamak ve iþaretçiyi kullanarak elemanlarý yazdýrmak için C'de bir program yazýn.
Test verisi :
Dizide saklanacak öðe sayýsýný girin :5
Dizideki 5 eleman sayýsýný girin:
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
