#include <stdio.h>
#include <stdlib.h>
#define n 7

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct 
{
	long int absen;
	char nama     [20];
	char usia     [20];
	char kelas    [20];	
	char alamat   [50];
	char sks      [50];
	char fakultas [30];
	char npm	  [30];

}data_mahasiswa;
data_mahasiswa mahasiswa;
int main()
{
	int A[n]={20,18,19,20,20,18,19};
	int x,i,j,k;
	float usia;
// Menampilkan Data Yang sudah ada 

	
	printf("\n			Data Yang Sudah Ada Dan Dapat Dilihat			  \n\n");
	printf("				------------------------ 			  \n\n");
	
	printf("\n\n------ Mahasiswa Absen 1 ------\n\n");
	printf("Nama        = Alya Safira");fflush(stdin);gets(mahasiswa.nama);
	printf("Usia        = 18 tahun");fflush(stdin);gets(mahasiswa.usia);
	printf("Kelas       = Paralel A");fflush(stdin);gets(mahasiswa.kelas);
	printf("Alamat      = Gayungan Residence");fflush(stdin);gets(mahasiswa.alamat);
	printf("Jumlah SKS  = 23");fflush(stdin);gets(mahasiswa.sks);
	printf("Fakultas    = Ilmu Komputer");fflush(stdin);gets(mahasiswa.fakultas);
	printf("NPM         = 19081010015");fflush(stdin);gets(mahasiswa.npm);
	printf("\n\n\t");
	
	
	
		printf("\n\n------ Mahasiswa Absen 2 ------\n\n");
	printf("Nama        = Nadia Rahma");fflush(stdin);gets(mahasiswa.nama);
	printf("Usia        = 20 tahun");fflush(stdin);gets(mahasiswa.usia);
	printf("Kelas       = Paralel A");fflush(stdin);gets(mahasiswa.kelas);
	printf("Alamat      = Taman Pondok Jati");fflush(stdin);gets(mahasiswa.alamat);
	printf("Jumlah SKS  = 24");fflush(stdin);gets(mahasiswa.sks);
	printf("Fakultas    = Ilmu Komputer");fflush(stdin);gets(mahasiswa.fakultas);
	printf("NPM         = 19081010014");fflush(stdin);gets(mahasiswa.npm);
	printf("\n\n\t");
	
		printf("\n\n------ Mahasiswa Absen 3 ------\n\n");
	printf("Nama        = Bara Hasby");fflush(stdin);gets(mahasiswa.nama);
	printf("Usia        = 19 tahun");fflush(stdin);gets(mahasiswa.usia);
	printf("Kelas       = Paralel A");fflush(stdin);gets(mahasiswa.kelas);
	printf("Alamat      = Taman Pondok Jeruk");fflush(stdin);gets(mahasiswa.alamat);
	printf("Jumlah SKS  = 20");fflush(stdin);gets(mahasiswa.sks);
	printf("Fakultas    = Ilmu Komputer");fflush(stdin);gets(mahasiswa.fakultas);
	printf("NPM         = 19081010013");fflush(stdin);gets(mahasiswa.npm);
	printf("\n\n\t");
	
		printf("\n\n------ Mahasiswa Absen 4 ------\n\n");
	printf("Nama        = Prita Kartini");fflush(stdin);gets(mahasiswa.nama);
	printf("Usia        = 20 tahun");fflush(stdin);gets(mahasiswa.usia);
	printf("Kelas       = Paralel A");fflush(stdin);gets(mahasiswa.kelas);
	printf("Alamat      = Taman Pondok Jambu");fflush(stdin);gets(mahasiswa.alamat);
	printf("Jumlah SKS  = 24");fflush(stdin);gets(mahasiswa.sks);
	printf("Fakultas    = Ilmu Komputer");fflush(stdin);gets(mahasiswa.fakultas);
	printf("NPM         = 19081010012");fflush(stdin);gets(mahasiswa.npm);
	printf("\n\n\t");
	
		printf("\n\n------ Mahasiswa Absen 5 ------\n\n");
	printf("Nama        = Ahmad Reza");fflush(stdin);gets(mahasiswa.nama);
	printf("Usia        = 18 tahun");fflush(stdin);gets(mahasiswa.usia);
	printf("Kelas       = Paralel A");fflush(stdin);gets(mahasiswa.kelas);
	printf("Alamat      = Taman Pondok Apel");fflush(stdin);gets(mahasiswa.alamat);
	printf("Jumlah SKS  = 24");fflush(stdin);gets(mahasiswa.sks);
	printf("Fakultas    = Ilmu Komputer");fflush(stdin);gets(mahasiswa.fakultas);
	printf("NPM         = 19081010011");fflush(stdin);gets(mahasiswa.npm);
	printf("\n\n\t");
	
		printf("\n\n------ Mahasiswa Absen 6 ------\n\n");
	printf("Nama        = Raihan Yasa");fflush(stdin);gets(mahasiswa.nama);
	printf("Usia        = 19 tahun");fflush(stdin);gets(mahasiswa.usia);
	printf("Kelas       = Paralel A");fflush(stdin);gets(mahasiswa.kelas);
	printf("Alamat      = Taman Pondok Leci");fflush(stdin);gets(mahasiswa.alamat);
	printf("Jumlah SKS  = 24");fflush(stdin);gets(mahasiswa.sks);
	printf("Fakultas    = Ilmu Komputer");fflush(stdin);gets(mahasiswa.fakultas);
	printf("NPM         = 19081010010");fflush(stdin);gets(mahasiswa.npm);
	printf("\n\n\t");

		printf("\n\n------ Mahasiswa Absen 7 ------\n\n");
	printf("Nama        = Ghazy Aldino");fflush(stdin);gets(mahasiswa.nama);
	printf("Usia        = 20 tahun");fflush(stdin);gets(mahasiswa.usia);
	printf("Kelas       = Paralel A");fflush(stdin);gets(mahasiswa.kelas);
	printf("Alamat      = Taman Pondok Nanas");fflush(stdin);gets(mahasiswa.alamat);
	printf("Jumlah SKS  = 24");fflush(stdin);gets(mahasiswa.sks);
	printf("Fakultas    = Ilmu Komputer");fflush(stdin);gets(mahasiswa.fakultas);
	printf("NPM         = 19081010016");fflush(stdin);gets(mahasiswa.npm);
	printf("\n\n\t");
	
	
	
// Memilih Proses yang di inginkan 


		int pilihan,b,c;
		printf("PROSES PEMILAHAN DATA MAHASISWA :\n");
		printf("---------------------------------\n");
		printf("1. MEMPERBAIKI DATA \n");
		printf("2. MENGHAPUS DATA\n");
		printf("3. MENAMBAH DATA BARU\n");
		printf("4. MENGURUTKAN DATA USIA MAHASISWA\n");
		printf("---------------------------------\n");
		printf("Masukkan pilihan anda [1..4] : ");
		scanf("%i",&pilihan);
		printf("\n");
		
		if(pilihan==1)
{
					printf("Plih Data yang ingin dirubah \n\n");
					printf("1. Absen 1\n2. Absen 2\n3. Absen 3\n4. Absen 4\n5. Absen 5\n6. Absen 6\n7. Absen 7\n\n");
					printf("Masukkan Pilihan (1/2/3/4/5/6/7) = ");
					scanf("%d",&b);
	  			
				 if(b==1){
				 	
	  				printf(" Mengubah Data Mahasiswa Absen 1");
	  				printf("\n\n");
	  						printf("Data Sebelum Dirubah\n\n");	
					printf("\n\n------ Mahasiswa Absen 1 ------\n\n");
					printf("Nama        = Alya Safira");fflush(stdin);gets(mahasiswa.nama);
					printf("Usia        = 18 tahun");fflush(stdin);gets(mahasiswa.usia);
					printf("Kelas       = Paralel A");fflush(stdin);gets(mahasiswa.kelas);
					printf("Alamat      = Gayungan Residence");fflush(stdin);gets(mahasiswa.alamat);
					printf("Jumlah SKS  = 23");fflush(stdin);gets(mahasiswa.sks);
					printf("Fakultas    = Ilmu Komputer");fflush(stdin);gets(mahasiswa.fakultas);
					printf("NPM         = 19081010015");fflush(stdin);gets(mahasiswa.npm);
					printf("\n\n\t");
				  			
	  				printf(" Masukkan Data Terbaru\n\n");
					printf("----------------------\n");
					printf("Absen       = ");scanf("%li",&mahasiswa.absen);
					printf("Nama        = ");fflush(stdin);gets(mahasiswa.nama);
					printf("Usia        = ");fflush(stdin);gets(mahasiswa.usia);
					printf("Kelas       = ");fflush(stdin);gets(mahasiswa.kelas);
					printf("Alamat      = ");fflush(stdin);gets(mahasiswa.alamat);
					printf("Jumlah SKS  = ");fflush(stdin);gets(mahasiswa.sks);
					printf("Fakultas    = ");fflush(stdin);gets(mahasiswa.fakultas);
					printf("NPM         = ");fflush(stdin);gets(mahasiswa.npm);
					printf("\n\n");
			
										//untuk output 
	
					printf("Data Mahasiswa Yang Telah Diperbarui \n");
					printf("------------------------------------ \n");
					printf("absen      : %li\n",mahasiswa.absen);
					printf("Nama       : %s\n",mahasiswa.nama);
					printf("Usia       : %s\n",mahasiswa.usia );
					printf("Kelas      : %s\n",mahasiswa.kelas);
					printf("Alamat	   : %s\n",mahasiswa.alamat);
					printf("Jumlah SKS : %s\n",mahasiswa.sks);
					printf("Fakultas   : %s\n",mahasiswa.fakultas);
					printf("NPM        : %s\n",mahasiswa.npm);
					printf("\n\n");
			}		
			else if (b==2){
				
				
	  				printf(" Mengubah Data Mahasiswa Absen 2");
	  				printf("\n\n");
	  				
	  						printf("Data Sebelum Dirubah\n\n");	
					printf("Nama        = Nadia Rahma");fflush(stdin);gets(mahasiswa.nama);
					printf("Usia        = 20 tahun");fflush(stdin);gets(mahasiswa.usia);
					printf("Kelas       = Paralel A");fflush(stdin);gets(mahasiswa.kelas);
					printf("Alamat      = Taman Pondok Jati");fflush(stdin);gets(mahasiswa.alamat);
					printf("Jumlah SKS  = 24");fflush(stdin);gets(mahasiswa.sks);
					printf("Fakultas    = Ilmu Komputer");fflush(stdin);gets(mahasiswa.fakultas);
					printf("NPM         = 19081010014");fflush(stdin);gets(mahasiswa.npm);
					printf("\n\n\t");
	  				
	  				printf(" Masukkan Data Terbaru");
					printf("----------------------\n");
					printf("Absen 	    = ");scanf("%li",&mahasiswa.absen);
					printf("Nama        = ");fflush(stdin);gets(mahasiswa.nama);
					printf("Usia        = ");fflush(stdin);gets(mahasiswa.usia);
					printf("Kelas       = ");fflush(stdin);gets(mahasiswa.kelas);
					printf("Alamat      = ");fflush(stdin);gets(mahasiswa.alamat);
					printf("Jumlah SKS  = ");fflush(stdin);gets(mahasiswa.sks);
					printf("Fakultas    = ");fflush(stdin);gets(mahasiswa.fakultas);
					printf("NPM         = ");fflush(stdin);gets(mahasiswa.npm);
					printf("\n\n");
			
											//untuk output 
	
					printf("Data Mahasiswa Yang Telah Diperbarui \n");
					printf("------------------------------------ \n");
					printf("absen      : %li\n",mahasiswa.absen);
					printf("Nama       : %s\n",mahasiswa.nama);
					printf("Usia       : %s\n",mahasiswa.usia );
					printf("Kelas      : %s\n",mahasiswa.kelas);
					printf("Alamat	   : %s\n",mahasiswa.alamat);
					printf("Jumlah SKS : %s\n",mahasiswa.sks);
					printf("Fakultas   : %s\n",mahasiswa.fakultas);
					printf("NPM        : %s\n",mahasiswa.npm);
					printf("\n\n");
			}
			else if (b==3){
				
				
	  				printf(" Mengubah Data Mahasiswa Absen 3");
	  				printf("\n\n");
	  				
	  						printf("Data Sebelum Dirubah\n\n");	
					printf("\n\n------ Mahasiswa Absen 3 ------\n\n");
					printf("Nama        = Bara Hasby");fflush(stdin);gets(mahasiswa.nama);
					printf("Usia        = 19 tahun");fflush(stdin);gets(mahasiswa.usia);
					printf("Kelas       = Paralel A");fflush(stdin);gets(mahasiswa.kelas);
					printf("Alamat      = Taman Pondok Jeruk");fflush(stdin);gets(mahasiswa.alamat);
					printf("Jumlah SKS  = 20");fflush(stdin);gets(mahasiswa.sks);
					printf("Fakultas    = Ilmu Komputer");fflush(stdin);gets(mahasiswa.fakultas);
					printf("NPM         = 19081010013");fflush(stdin);gets(mahasiswa.npm);
					printf("\n\n\t");
	  				
	  				printf(" Masukkan Data Terbaru");
					printf("----------------------\n");
					printf("Absen       = ");scanf("%li",&mahasiswa.absen);
					printf("Nama        = ");fflush(stdin);gets(mahasiswa.nama);
					printf("Usia        = ");fflush(stdin);gets(mahasiswa.usia);
					printf("Kelas       = ");fflush(stdin);gets(mahasiswa.kelas);
					printf("Alamat      = ");fflush(stdin);gets(mahasiswa.alamat);
					printf("Jumlah SKS  = ");fflush(stdin);gets(mahasiswa.sks);
					printf("Fakultas    = ");fflush(stdin);gets(mahasiswa.fakultas);
					printf("NPM         = ");fflush(stdin);gets(mahasiswa.npm);
					printf("\n\n");
			
											//untuk output 
	
					printf("Data Mahasiswa Yang Telah Diperbarui \n");
					printf("------------------------------------ \n");
					printf("absen      : %li\n",mahasiswa.absen);
					printf("Nama       : %s\n",mahasiswa.nama);
					printf("Usia       : %s\n",mahasiswa.usia );
					printf("Kelas      : %s\n",mahasiswa.kelas);
					printf("Alamat	   : %s\n",mahasiswa.alamat);
					printf("Jumlah SKS : %s\n",mahasiswa.sks);
					printf("Fakultas   : %s\n",mahasiswa.fakultas);
					printf("NPM        : %s\n",mahasiswa.npm);
					printf("\n\n");
			}
			else if (b==4){
				
				
	  				printf(" Mengubah Data Mahasiswa Absen 4");
	  				printf("\n\n");
	  				
	  						printf("Data Sebelum Dirubah\n\n");	
					printf("\n\n------ Mahasiswa Absen 4 ------\n\n");
					printf("Nama        = Prita Kartini");fflush(stdin);gets(mahasiswa.nama);
					printf("Usia        = 20 tahun");fflush(stdin);gets(mahasiswa.usia);
					printf("Kelas       = Paralel A");fflush(stdin);gets(mahasiswa.kelas);
					printf("Alamat      = Taman Pondok Jambu");fflush(stdin);gets(mahasiswa.alamat);
					printf("Jumlah SKS  = 24");fflush(stdin);gets(mahasiswa.sks);
					printf("Fakultas    = Ilmu Komputer");fflush(stdin);gets(mahasiswa.fakultas);
					printf("NPM         = 19081010012");fflush(stdin);gets(mahasiswa.npm);
					printf("\n\n\t");			
	  				
	  				printf(" Masukkan Data Terbaru");
					printf("----------------------\n");
					printf("Absen       = ");scanf("%li",&mahasiswa.absen);
					printf("Nama        = ");fflush(stdin);gets(mahasiswa.nama);
					printf("Usia        = ");fflush(stdin);gets(mahasiswa.usia);
					printf("Kelas       = ");fflush(stdin);gets(mahasiswa.kelas);
					printf("Alamat      = ");fflush(stdin);gets(mahasiswa.alamat);
					printf("Jumlah SKS  = ");fflush(stdin);gets(mahasiswa.sks);
					printf("Fakultas    = ");fflush(stdin);gets(mahasiswa.fakultas);
					printf("NPM         = ");fflush(stdin);gets(mahasiswa.npm);
					printf("\n\n");
			
											//untuk output 
	
					printf("Data Mahasiswa Yang Telah Diperbarui \n");
					printf("------------------------------------ \n");
					printf("absen      : %li\n",mahasiswa.absen);
					printf("Nama       : %s\n",mahasiswa.nama);
					printf("Usia       : %s\n",mahasiswa.usia );
					printf("Kelas      : %s\n",mahasiswa.kelas);
					printf("Alamat	   : %s\n",mahasiswa.alamat);
					printf("Jumlah SKS : %s\n",mahasiswa.sks);
					printf("Fakultas   : %s\n",mahasiswa.fakultas);
					printf("NPM        : %s\n",mahasiswa.npm);
					printf("\n\n");
			}
			else if (b==5){
				
				
	  				printf(" Mengubah Data Mahasiswa Absen 5");
	  				printf("\n\n");
	  				
	  						printf("Data Sebelum Dirubah\n\n");	
					printf("\n\n------ Mahasiswa Absen 5 ------\n\n");
					printf("Nama        = Ahmad Reza");fflush(stdin);gets(mahasiswa.nama);
					printf("Usia        = 18 tahun");fflush(stdin);gets(mahasiswa.usia);
					printf("Kelas       = Paralel A");fflush(stdin);gets(mahasiswa.kelas);
					printf("Alamat      = Taman Pondok Apel");fflush(stdin);gets(mahasiswa.alamat);
					printf("Jumlah SKS  = 24");fflush(stdin);gets(mahasiswa.sks);
					printf("Fakultas    = Ilmu Komputer");fflush(stdin);gets(mahasiswa.fakultas);
					printf("NPM         = 19081010011");fflush(stdin);gets(mahasiswa.npm);
					printf("\n\n\t");			
	  				
	  				printf(" Masukkan Data Terbaru");
					printf("----------------------\n");
					printf("Absen       = ");scanf("%li",&mahasiswa.absen);
					printf("Nama        = ");fflush(stdin);gets(mahasiswa.nama);
					printf("Usia        = ");fflush(stdin);gets(mahasiswa.usia);
					printf("Kelas       = ");fflush(stdin);gets(mahasiswa.kelas);
					printf("Alamat      = ");fflush(stdin);gets(mahasiswa.alamat);
					printf("Jumlah SKS  = ");fflush(stdin);gets(mahasiswa.sks);
					printf("Fakultas    = ");fflush(stdin);gets(mahasiswa.fakultas);
					printf("NPM         = ");fflush(stdin);gets(mahasiswa.npm);
					printf("\n\n");
			
											//untuk output 
	
					printf("Data Mahasiswa Yang Telah Diperbarui \n");
					printf("------------------------------------ \n");
					printf("absen      : %li\n",mahasiswa.absen);
					printf("Nama       : %s\n",mahasiswa.nama);
					printf("Usia       : %s\n",mahasiswa.usia );
					printf("Kelas      : %s\n",mahasiswa.kelas);
					printf("Alamat	   : %s\n",mahasiswa.alamat);
					printf("Jumlah SKS : %s\n",mahasiswa.sks);
					printf("Fakultas   : %s\n",mahasiswa.fakultas);
					printf("NPM        : %s\n",mahasiswa.npm);
					printf("\n\n");
			}
			else if (b==6){
				
				
	  				printf(" Mengubah Data Mahasiswa Absen 6");
	  				printf("\n\n");
	  				
	  						printf("Data Sebelum Dirubah\n\n");	
					printf("\n\n------ Mahasiswa Absen 6 ------\n\n");
					printf("Nama        = Raihan Yasa");fflush(stdin);gets(mahasiswa.nama);
					printf("Usia        = 19 tahun");fflush(stdin);gets(mahasiswa.usia);
					printf("Kelas       = Paralel A");fflush(stdin);gets(mahasiswa.kelas);
					printf("Alamat      = Taman Pondok Leci");fflush(stdin);gets(mahasiswa.alamat);
					printf("Jumlah SKS  = 24");fflush(stdin);gets(mahasiswa.sks);
					printf("Fakultas    = Ilmu Komputer");fflush(stdin);gets(mahasiswa.fakultas);
					printf("NPM         = 19081010010");fflush(stdin);gets(mahasiswa.npm);
					printf("\n\n\t");			
	  				
	  				printf(" Masukkan Data Terbaru");
					printf("----------------------\n");
					printf("Absen       = ");scanf("%li",&mahasiswa.absen);
					printf("Nama        = ");fflush(stdin);gets(mahasiswa.nama);
					printf("Usia        = ");fflush(stdin);gets(mahasiswa.usia);
					printf("Kelas       = ");fflush(stdin);gets(mahasiswa.kelas);
					printf("Alamat      = ");fflush(stdin);gets(mahasiswa.alamat);
					printf("Jumlah SKS  = ");fflush(stdin);gets(mahasiswa.sks);
					printf("Fakultas    = ");fflush(stdin);gets(mahasiswa.fakultas);
					printf("NPM         = ");fflush(stdin);gets(mahasiswa.npm);
					printf("\n\n");
			
											//untuk output 
	
					printf("Data Mahasiswa Yang Telah Diperbarui \n");
					printf("------------------------------------ \n");
					printf("absen      : %li\n",mahasiswa.absen);
					printf("Nama       : %s\n",mahasiswa.nama);
					printf("Usia       : %s\n",mahasiswa.usia );
					printf("Kelas      : %s\n",mahasiswa.kelas);
					printf("Alamat	   : %s\n",mahasiswa.alamat);
					printf("Jumlah SKS : %s\n",mahasiswa.sks);
					printf("Fakultas   : %s\n",mahasiswa.fakultas);
					printf("NPM        : %s\n",mahasiswa.npm);
					printf("\n\n");
			}
			else if (b==7){
				
				
	  				printf(" Mengubah Data Mahasiswa Absen 7");
	  				printf("\n\n");
	  				
	  						printf("Data Sebelum Dirubah\n\n");	
					printf("\n\n------ Mahasiswa Absen 7  ------\n\n");
					printf("Nama        = Ghazy Aldino");fflush(stdin);gets(mahasiswa.nama);
					printf("Usia        = 20 tahun");fflush(stdin);gets(mahasiswa.usia);
					printf("Kelas       = Paralel A");fflush(stdin);gets(mahasiswa.kelas);
					printf("Alamat      = Taman Pondok Nanas");fflush(stdin);gets(mahasiswa.alamat);
					printf("Jumlah SKS  = 24");fflush(stdin);gets(mahasiswa.sks);
					printf("Fakultas    = Ilmu Komputer");fflush(stdin);gets(mahasiswa.fakultas);
					printf("NPM         = 19081010016");fflush(stdin);gets(mahasiswa.npm);
					printf("\n\n\t");			
	  				
	  				printf(" Masukkan Data Terbaru");
					printf("----------------------\n");
					printf("Absen       = ");scanf("%li",&mahasiswa.absen);
					printf("Nama        = ");fflush(stdin);gets(mahasiswa.nama);
					printf("Usia        = ");fflush(stdin);gets(mahasiswa.usia);
					printf("Kelas       = ");fflush(stdin);gets(mahasiswa.kelas);
					printf("Alamat      = ");fflush(stdin);gets(mahasiswa.alamat);
					printf("Jumlah SKS  = ");fflush(stdin);gets(mahasiswa.sks);
					printf("Fakultas    = ");fflush(stdin);gets(mahasiswa.fakultas);
					printf("NPM         = ");fflush(stdin);gets(mahasiswa.npm);
					printf("\n\n");
			
											//untuk output 
	
					printf("Data Mahasiswa Yang Telah Diperbarui \n");
					printf("------------------------------------ \n");
					printf("absen      : %li\n",mahasiswa.absen);
					printf("Nama       : %s\n",mahasiswa.nama);
					printf("Usia       : %s\n",mahasiswa.usia );
					printf("Kelas      : %s\n",mahasiswa.kelas);
					printf("Alamat	   : %s\n",mahasiswa.alamat);
					printf("Jumlah SKS : %s\n",mahasiswa.sks);
					printf("Fakultas   : %s\n",mahasiswa.fakultas);
					printf("NPM        : %s\n",mahasiswa.npm);
					printf("\n\n");
		}
		else
		{
					printf("Pilihan yang dimasukkan salah!");
					printf("\n\n");
					system("PAUSE");
		}
	}
	else if (pilihan==2)
	{
					printf("Plih Data yang ingin dihapus \n\n");
					printf("1. Absen 1\n2. Absen 2\n3. Absen 3\n4. Absen 4\n5. Absen 5\n6. Absen 6\n7. Absen 7\n\n");
					printf("Masukkan Pilihan (1/2/3/4/5/6/7) = ");
					scanf("%d",&c);
					printf("\n\n\t");
			
			if(c==1){
					printf("Data Mahasiswa Absen 1 Telah terhapus\n\n");
					printf("\n\n");
					
					printf("Data Yang Telah Diperbarui\n\n");
					
					printf("\n\n------ Mahasiswa Absen 2 ------\n\n");
					printf("Nama        = Nadia Rahma\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");gets(mahasiswa.kelas);
					printf("Alamat      = Taman Pondok Jati\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010014\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 3 ------\n\n");
					printf("Nama        = Bara Hasby\n\n");
					printf("Usia        = 19 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Jeruk\n\n");
					printf("Jumlah SKS  = 20\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010013\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					  
					printf("\n\n------ Mahasiswa Absen 4 ------\n\n");
					printf("Nama        = Prita Kartini\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Jambu\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010012\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 5 ------\n\n");
					printf("Nama        = Ahmad Reza\n\n");
					printf("Usia        = 18 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Apel\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010011\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 6 ------\n\n");
					printf("Nama        = Raihan Yasa\n\n");
					printf("Usia        = 19 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Leci\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010010\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 7 ------\n\n");
					printf("Nama        = Ghazy Aldino\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Nanas\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010016\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
						
			}
			else if(c==2){
					printf("Data Mahasiswa Absen 2 Telah terhapus\n\n");
					printf("\n\n");
			
					printf("Data Yang Telah Diperbarui\n\n");
					
					printf("\n\n------ Mahasiswa Absen 1 ------\n\n");
					printf("Nama        = Alya Safira\n\n");
					printf("Usia        = 18 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Gayungan Residence\n\n");
					printf("Jumlah SKS  = 23\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010015\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
						
					printf("\n\n------ Mahasiswa Absen 3 ------\n\n");
					printf("Nama        = Bara Hasby\n\n");
					printf("Usia        = 19 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Jeruk\n\n");
					printf("Jumlah SKS  = 20\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010013\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					  
					printf("\n\n------ Mahasiswa Absen 4 ------\n\n");
					printf("Nama        = Prita Kartini\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Jambu\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010012\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 5 ------\n\n");
					printf("Nama        = Ahmad Reza\n\n");
					printf("Usia        = 18 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Apel\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010011\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 6 ------\n\n");
					printf("Nama        = Raihan Yasa\n\n");
					printf("Usia        = 19 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Leci\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010010\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 7 ------\n\n");
					printf("Nama        = Ghazy Aldino\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Nanas\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010016\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
						
			}
			else if(c==3){
					printf("Data Mahasiswa Absen 3 Telah terhapus\n\n");
					printf("\n\n");
					
					printf("Data Yang Telah Diperbarui\n\n");
					
					printf("\n\n------ Mahasiswa Absen 1 ------\n\n");
					printf("Nama        = Alya Safira\n\n");
					printf("Usia        = 18 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Gayungan Residence\n\n");
					printf("Jumlah SKS  = 23\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010015\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 2 ------\n\n");
					printf("Nama        = Nadia Rahma\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");gets(mahasiswa.kelas);
					printf("Alamat      = Taman Pondok Jati\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010014\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 4 ------\n\n");
					printf("Nama        = Prita Kartini\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Jambu\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010012\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 5 ------\n\n");
					printf("Nama        = Ahmad Reza\n\n");
					printf("Usia        = 18 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Apel\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010011\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 6 ------\n\n");
					printf("Nama        = Raihan Yasa\n\n");
					printf("Usia        = 19 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Leci\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010010\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 7 ------\n\n");
					printf("Nama        = Ghazy Aldino\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Nanas\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010016\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
						
			}
			else if(c==4){
					printf("Data Mahasiswa Absen 4 Telah terhapus\n\n");
					printf("\n\n");
					
					printf("Data Yang Telah Diperbarui\n\n");
					
					printf("\n\n------ Mahasiswa Absen 1 ------\n\n");
					printf("Nama        = Alya Safira\n\n");
					printf("Usia        = 18 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Gayungan Residence\n\n");
					printf("Jumlah SKS  = 23\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010015\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 2 ------\n\n");
					printf("Nama        = Nadia Rahma\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");gets(mahasiswa.kelas);
					printf("Alamat      = Taman Pondok Jati\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010014\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 3 ------\n\n");
					printf("Nama        = Bara Hasby\n\n");
					printf("Usia        = 19 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Jeruk\n\n");
					printf("Jumlah SKS  = 20\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010013\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					  
					printf("\n\n------ Mahasiswa Absen 5 ------\n\n");
					printf("Nama        = Ahmad Reza\n\n");
					printf("Usia        = 18 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Apel\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010011\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 6 ------\n\n");
					printf("Nama        = Raihan Yasa\n\n");
					printf("Usia        = 19 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Leci\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010010\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 7 ------\n\n");
					printf("Nama        = Ghazy Aldino\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Nanas\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010016\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
			}
			else if(c==5){
					printf("Data Mahasiswa Absen 5 Telah terhapus\n\n");
					printf("\n\n");
					
					printf("Data Yang Telah Diperbarui\n\n");
					
					printf("\n\n------ Mahasiswa Absen 1 ------\n\n");
					printf("Nama        = Alya Safira\n\n");
					printf("Usia        = 18 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Gayungan Residence\n\n");
					printf("Jumlah SKS  = 23\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010015\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 2 ------\n\n");
					printf("Nama        = Nadia Rahma\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");gets(mahasiswa.kelas);
					printf("Alamat      = Taman Pondok Jati\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010014\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 3 ------\n\n");
					printf("Nama        = Bara Hasby\n\n");
					printf("Usia        = 19 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Jeruk\n\n");
					printf("Jumlah SKS  = 20\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010013\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 4 ------\n\n");
					printf("Nama        = Prita Kartini\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Jambu\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010012\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 6 ------\n\n");
					printf("Nama        = Raihan Yasa\n\n");
					printf("Usia        = 19 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Leci\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010010\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 7 ------\n\n");
					printf("Nama        = Ghazy Aldino\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Nanas\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010016\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
						
			}
			else if(c==6){
					printf("Data Mahasiswa Absen 6 Telah terhapus\n\n");
					printf("\n\n");
					
					printf("Data Yang Telah Diperbarui\n\n");
					
					printf("\n\n------ Mahasiswa Absen 1 ------\n\n");
					printf("Nama        = Alya Safira\n\n");
					printf("Usia        = 18 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Gayungan Residence\n\n");
					printf("Jumlah SKS  = 23\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010015\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 2 ------\n\n");
					printf("Nama        = Nadia Rahma\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");gets(mahasiswa.kelas);
					printf("Alamat      = Taman Pondok Jati\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010014\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 3 ------\n\n");
					printf("Nama        = Bara Hasby\n\n");
					printf("Usia        = 19 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Jeruk\n\n");
					printf("Jumlah SKS  = 20\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010013\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 4 ------\n\n");
					printf("Nama        = Prita Kartini\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Jambu\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010012\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 5 ------\n\n");
					printf("Nama        = Ahmad Reza\n\n");
					printf("Usia        = 18 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Apel\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010011\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 7 ------\n\n");
					printf("Nama        = Ghazy Aldino\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Nanas\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010016\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
			}
			else if(c==7){
					printf("Data Mahasiswa Absen 7 Telah terhapus\n\n");
					printf("\n\n");
					
					printf("Data Yang Telah Diperbarui\n\n");
					
					printf("\n\n------ Mahasiswa Absen 1 ------\n\n");
					printf("Nama        = Alya Safira\n\n");
					printf("Usia        = 18 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Gayungan Residence\n\n");
					printf("Jumlah SKS  = 23\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010015\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 2 ------\n\n");
					printf("Nama        = Nadia Rahma\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");gets(mahasiswa.kelas);
					printf("Alamat      = Taman Pondok Jati\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010014\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 3 ------\n\n");
					printf("Nama        = Bara Hasby\n\n");
					printf("Usia        = 19 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Jeruk\n\n");
					printf("Jumlah SKS  = 20\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010013\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 4 ------\n\n");
					printf("Nama        = Prita Kartini\n\n");
					printf("Usia        = 20 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Jambu\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010012\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 5 ------\n\n");
					printf("Nama        = Ahmad Reza\n\n");
					printf("Usia        = 18 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Apel\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010011\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
					
					printf("\n\n------ Mahasiswa Absen 6 ------\n\n");
					printf("Nama        = Raihan Yasa\n\n");
					printf("Usia        = 19 tahun\n\n");
					printf("Kelas       = Paralel A\n\n");
					printf("Alamat      = Taman Pondok Leci\n\n");
					printf("Jumlah SKS  = 24\n\n");
					printf("Fakultas    = Ilmu Komputer\n\n");
					printf("NPM         = 19081010010\n\n");
					printf("\n\n\t");
					printf("____________________________________________\n\n");
		
			}
			else
			{
					printf("Pilihan yang dimasukkan salah!");
					printf("\n\n");
					system("PAUSE");
			}
	}
	else if (pilihan==3)
		{
			printf("Menambahkan Data Baru ");
						//menampilkan data 
			printf("Data Mahasiswa     = \n");
			printf("----------------------\n");
			printf("Absen 	    = ");scanf("%li",&mahasiswa.absen);
			printf("Nama        = ");fflush(stdin);gets(mahasiswa.nama);
			printf("Usia        = ");fflush(stdin);gets(mahasiswa.usia);
			printf("Kelas       = ");fflush(stdin);gets(mahasiswa.kelas);
			printf("Alamat      = ");fflush(stdin);gets(mahasiswa.alamat);
			printf("Jumlah SKS  = ");fflush(stdin);gets(mahasiswa.sks);
			printf("Fakultas    = ");fflush(stdin);gets(mahasiswa.fakultas);
			printf("NPM         = ");fflush(stdin);gets(mahasiswa.npm);
			printf("\n\n");
			
				//untuk output 
	
			printf("Data Mahasiswa   = \n");
			printf("-----------------------\n");
			printf("absen      : %li\n",mahasiswa.absen);
			printf("Nama       : %s\n",mahasiswa.nama);
			printf("Usia       : %s\n",mahasiswa.usia );
			printf("Kelas      : %s\n",mahasiswa.kelas);
			printf("Alamat	   : %s\n",mahasiswa.alamat);
			printf("Jumlah SKS : %s\n",mahasiswa.sks);
			printf("Fakultas   : %s\n",mahasiswa.fakultas);
			printf("NPM        : %s\n",mahasiswa.npm);
			printf("\n\n");
		}
		else if(pilihan==4)
		{   
					
				printf("Menampilkan Data Lengkap Mahasiswa Yang Telah Diurutkan Berdasarkan Usia\n\n");
				printf("_________________________________________________________________________________________________________________\n\n"); 
				
				printf("\n\n------ Mahasiswa Absen 1 ------\n\n");
				printf("Nama        = Alya Safira\n\n");
				printf("Usia        = 18 tahun\n\n");
				printf("Kelas       = Paralel A\n\n");
				printf("Alamat      = Gayungan Residence\n\n");
				printf("Jumlah SKS  = 23\n\n");
				printf("Fakultas    = Ilmu Komputer\n\n");
				printf("NPM         = 19081010015\n\n");
				printf("\n\n\t");
				printf("_________________________________________________________________________________________________________________\n\n");
				
				printf("\n\n------ Mahasiswa Absen 5 ------\n\n");
				printf("Nama        = Ahmad Reza\n\n");
				printf("Usia        = 18 tahun\n\n");
				printf("Kelas       = Paralel A\n\n");
				printf("Alamat      = Taman Pondok Apel\n\n");
				printf("Jumlah SKS  = 24\n\n");
				printf("Fakultas    = Ilmu Komputer\n\n");
				printf("NPM         = 19081010011\n\n");
				printf("\n\n\t");
				printf("_________________________________________________________________________________________________________________\n\n");
				
				printf("\n\n------ Mahasiswa Absen 3 ------\n\n");
				printf("Nama        = Bara Hasby\n\n");
				printf("Usia        = 19 tahun\n\n");
				printf("Kelas       = Paralel A\n\n");
				printf("Alamat      = Taman Pondok Jeruk\n\n");
				printf("Jumlah SKS  = 20\n\n");
				printf("Fakultas    = Ilmu Komputer\n\n");
				printf("NPM         = 19081010013\n\n");
				printf("\n\n\t");
				printf("_________________________________________________________________________________________________________________\n\n");
				  
				printf("\n\n------ Mahasiswa Absen 6 ------\n\n");
				printf("Nama        = Raihan Yasa\n\n");
				printf("Usia        = 19 tahun\n\n");
				printf("Kelas       = Paralel A\n\n");
				printf("Alamat      = Taman Pondok Leci\n\n");
				printf("Jumlah SKS  = 24\n\n");
				printf("Fakultas    = Ilmu Komputer\n\n");
				printf("NPM         = 19081010010\n\n");
				printf("\n\n\t");
				printf("_________________________________________________________________________________________________________________\n\n");
				
				
				printf("\n\n------ Mahasiswa Absen 2 ------\n\n");
				printf("Nama        = Nadia Rahma\n\n");
				printf("Usia        = 20 tahun\n\n");
				printf("Kelas       = Paralel A\n\n");gets(mahasiswa.kelas);
				printf("Alamat      = Taman Pondok Jati\n\n");
				printf("Jumlah SKS  = 24\n\n");
				printf("Fakultas    = Ilmu Komputer\n\n");
				printf("NPM         = 19081010014\n\n");
				printf("\n\n\t");
				printf("_________________________________________________________________________________________________________________\n\n");
				
				printf("\n\n------ Mahasiswa Absen 4 ------\n\n");
				printf("Nama        = Prita Kartini\n\n");
				printf("Usia        = 20 tahun\n\n");
				printf("Kelas       = Paralel A\n\n");
				printf("Alamat      = Taman Pondok Jambu\n\n");
				printf("Jumlah SKS  = 24\n\n");
				printf("Fakultas    = Ilmu Komputer\n\n");
				printf("NPM         = 19081010012\n\n");
				printf("\n\n\t");
				printf("_________________________________________________________________________________________________________________\n\n");
				
				printf("\n\n------ Mahasiswa Absen 7 ------\n\n");
				printf("Nama        = Ghazy Aldino\n\n");
				printf("Usia        = 20 tahun\n\n");
				printf("Kelas       = Paralel A\n\n");
				printf("Alamat      = Taman Pondok Nanas\n\n");
				printf("Jumlah SKS  = 24\n\n");
				printf("Fakultas    = Ilmu Komputer\n\n");
				printf("NPM         = 19081010016\n\n");
				printf("\n\n\t");
				printf("_________________________________________________________________________________________________________________\n\n");
				
				
					printf("\t\t--PROGRAM BUBBLE SHORT USIA MAHASISWA --\n\n");
					printf("Data Mentah Sebelum Dirutkan\t:\n\n");
					
					for(i=0;i<=n-1;i++)
					printf("%4i",A[i]);
					printf("\n\n");
	
					for(k=0;k<=n-2;k++)
				{
					j=k;
					for(i=k+1;i<=n-1;i++)
				{
					if(A[i]<A[j])
					j=i;
				}		
		
					x=A[j];
					A[j]=A[k];
					A[k]=x;
				}

	
				printf("Data Terurut Dari Yang Paling Muda\t:\n\n");
				for(i=0;i<=n-1;i++)
				printf("%4i",A[i]);
				printf("\n\nJumlah data\t: %d\n",n);
				printf("\n\n");
				printf("_________________________________________________________________________________________________________________\n\n"); 
				
				
	
}   		


		
		else
		{
			printf("Pilihan yang dimasukkan salah!");
			printf("\n\n");
			system("PAUSE");
		}			
}



