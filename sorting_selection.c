#include <stdio.h>

void main(){
	//inisialisasi
	int angka[100];
	int i,n,j,temp;
	
	printf("---------------------------------------------------------- \n");
	printf("|   PROGRAM PENGURUTAN ANGKA DENGAN SORTING SELECTION     | \n");
    printf("---------------------------------------------------------- \n\n");
	
	//memasukkan jumlah data oleh pengguna
    printf("Masukkan banyak data : "); scanf("%d", &n);
	
	//memasukkan angka 
    for(i=0;i<n;i++)
    {
        printf("Data %d = ", i); scanf("%d", &angka[i]);
    }
	
	//mencetak angka sebelum diurutkan
	printf("--- Data Sebelum Diurutkan --- \n");
	for(i=0;i<n;i++){
		printf("Data ke %d =  %d",i, angka[i]);
		printf("\n");
	}
	
	//melakukan perulangan sampai <n
	for(i=0; i<n; i++){
		//menetapkan indexmin=i
		int indexMin=i;
		for(j=i; j<n; j++){
			//jika angka[j] kurang dari angka[indexMin] maka indexMin=j
			if(angka[j]<angka[indexMin]){
				indexMin=j;
			}
		}
		//menukar angka
		temp=angka[i];
		angka[i]=angka[indexMin];
		angka[indexMin]=temp;
	}
	
	printf("\n");
	printf("\n");
	printf("--- Data Setelah Diurutkan --- \n");
	
	//cetak data
	for(i=0; i<n; i++){
		printf("%d", angka[i]);
		printf("\n");
	}
}
