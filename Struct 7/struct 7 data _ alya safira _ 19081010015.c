#include <stdio.h>
#include <stdlib.h>

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
main()
{
// Menampilkan Data Yang sudah ada 

	
	printf("Data Yang Sudah Ada     = \n");
	printf("----------------------\n");
	printf("Nama        = Alya Safira");fflush(stdin);gets(mahasiswa.nama);
	printf("Usia        = 18 tahun");fflush(stdin);gets(mahasiswa.usia);
	printf("Kelas       = Paralel A");fflush(stdin);gets(mahasiswa.kelas);
	printf("Alamat      = Gayungan Residence");fflush(stdin);gets(mahasiswa.alamat);
	printf("Jumlah SKS  = 23");fflush(stdin);gets(mahasiswa.sks);
	printf("Fakultas    = Ilmu Komputer");fflush(stdin);gets(mahasiswa.fakultas);
	printf("NPM         = 19081010015");fflush(stdin);gets(mahasiswa.npm);
	printf("\n\n");
	
//Mengganti data yang sudah ada //

int a;
printf("Masukkan a ?\n\n");
scanf("%d",&a);

switch(a){

		
			case 0:
					printf("Data Sudah Sesuai dan tidak ada yang dihapus \n\n");
					break;
			case 1:
					printf("Plih Data yang ingin dihapus\n\n");
					printf("1. Nama\n2. Usia\n3. kelas\n4. Alamat\n5. SKS\n6. fakultas\n7. NPM\n\n");
					printf("Masukkan Pilihan (1/2/3/4/5/6/7/8);");
					scanf("%d",&a);
	  				break;
	  		case 2 : 
	  				printf(" Hapus Nama");
	  				printf("\n\n");
	  				printf(" Data Terbaru");
	  				printf("\n\n");
	  				printf("Usia        = 18 tahun");printf("\n\n");
					printf("Kelas       = Paralel A");printf("\n\n");
					printf("Alamat      = Gayungan Residence");	printf("\n\n");
					printf("Jumlah SKS  = 23");printf("\n\n");
					printf("Fakultas    = Ilmu Komputer");printf("\n\n");
					printf("NPM         = 19081010015");printf("\n\n");
					printf("\n\n");
					break;
			case 3: 
	  				printf(" Hapus Usia ");printf("\n\n");
	  				printf(" Data Terbaru");printf("\n\n");
	  				printf("Nama        = Alya Safira");printf("\n\n");
					printf("Kelas       = Paralel A");printf("\n\n");
					printf("Alamat      = Gayungan Residence");printf("\n\n");
					printf("Jumlah SKS  = 23");fflush(stdin);gets(mahasiswa.sks);
					printf("Fakultas    = Ilmu Komputer");printf("\n\n");
					printf("NPM         = 19081010015");printf("\n\n");
					printf("\n\n");
					break;	
			case 4: 
	  				printf(" Hapus Kelas");printf("\n\n");
	  				printf(" Data Terbaru");printf("\n\n");
	  				printf("Nama        = Alya Safira");printf("\n\n");;
	  				printf("Usia        = 18 tahun");printf("\n\n");
					printf("Alamat      = Gayungan Residence");printf("\n\n");
					printf("Jumlah SKS  = 23");fflush(stdin);printf("\n\n");
					printf("Fakultas    = Ilmu Komputer");printf("\n\n");
					printf("NPM         = 19081010015");printf("\n\n");
					printf("\n\n");
					break;	
			case 5 :
	  				printf(" Hapus Alamat");printf("\n\n");
	  				printf(" Data Terbaru");printf("\n\n");
	  				printf("Nama        = Alya Safira");printf("\n\n");
	  				printf("Usia        = 18 tahun");printf("\n\n");
	  				printf("Kelas       = Paralel A");printf("\n\n");
					printf("Jumlah SKS  = 23");printf("\n\n");
					printf("Fakultas    = Ilmu Komputer");printf("\n\n");
					printf("NPM         = 19081010015");printf("\n\n");
					printf("\n\n");
					break;	
			case 6 :
	  				printf(" Hapus Jumlah SKS");printf("\n\n");
	  				printf(" Data Terbaru");printf("\n\n");
	  				printf("Nama        = Alya Safira");printf("\n\n");;
	  				printf("Usia        = 18 tahun");printf("\n\n");
	  				printf("Kelas       = Paralel A");printf("\n\n");
					printf("Alamat      = Gayungan Residence");printf("\n\n");
					printf("Fakultas    = Ilmu Komputer");printf("\n\n");
					printf("NPM         = 19081010015");printf("\n\n");
					printf("\n\n");
					break;	
			case 7 :
	  				printf(" Hapus Fakultas");printf("\n\n");
	  				printf(" Data Terbaru");printf("\n\n");
	  				printf("Nama        = Alya Safira");printf("\n\n");
	  				printf("Usia        = 18 tahun");printf("\n\n");
	  				printf("Kelas       = Paralel A");printf("\n\n");
					printf("Alamat      = Gayungan Residence");printf("\n\n");
					printf("Jumlah SKS  = 23");printf("\n\n");
					printf("NPM         = 19081010015");printf("\n\n");
					printf("\n\n");
					break;
			case 8 :
	  				printf(" Hapus NPM");
	  				printf(" Data Terbaru");
	  				printf("Nama        = Alya Safira");printf("\n\n");
	  				printf("Usia        = 18 tahun");printf("\n\n");
	  				printf("Kelas       = Paralel A");printf("\n\n");
					printf("Alamat      = Gayungan Residence");printf("\n\n");
					printf("Jumlah SKS  = 23");printf("\n\n");
					printf("Fakultas    = Ilmu Komputer");printf("\n\n");
					printf("\n\n");
					break;	
}

	int pilihan;
		printf("PROSES PEMILAHAN DATA MAHASISWA :\n");
		printf("---------------------------------\n");
		printf("1. MEMPERBAIKI DATA \n");
		printf("2. MENGHAPUS DATA\n");
		printf("3. MENAMBAH DATA BARU\n");
		printf("---------------------------------\n");
		printf("Masukkan pilihan anda [1..3] : ");
		scanf("%i",&pilihan);
		printf("\n");
		
		if(pilihan==1)
		{
			printf("Memperbaiki Data");
			if(pilihan==1)
				printf("");
			printf("Absen  = 1");
			scanf("%li",&mahasiswa.absen);
			printf("Nama        = Alya Safira");fflush(stdin);gets(mahasiswa.nama);
			printf("Usia        = 18 tahun");fflush(stdin);gets(mahasiswa.usia);
			printf("Kelas       = Paralel A");fflush(stdin);gets(mahasiswa.kelas);
			printf("Alamat      = Gayungan Residence");fflush(stdin);gets(mahasiswa.alamat);
			printf("Jumlah SKS  = 23");fflush(stdin);gets(mahasiswa.sks);
			printf("Fakultas    = Ilmu Komputer");fflush(stdin);gets(mahasiswa.fakultas);
			printf("NPM         = 19081010015");fflush(stdin);gets(mahasiswa.npm);
			printf("\n\n");
		}
		else if(pilihan==2)
		{
			printf("Menghapus Data");
			printf("\n\n\n\n");
				}
			
		else if (pilihan==3)
		{
			printf("Menambahkan Data Baru ");
			//menampilkan data 
			printf("Data Mahasiswa     = \n");
			printf("----------------------\n");
			printf("Absen  = ");
			scanf("%li",&mahasiswa.absen);
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
			printf("Jumlah SKS :%s\n ",mahasiswa.sks);
			printf("Fakultas   :%s\n",mahasiswa.fakultas);
			printf("NPM        :%s\n",mahasiswa.npm);
			printf("\n\n");
		}

		else
		{
			printf("Pilihan yang dimasukkan salah!");
			printf("\n\n");
			system("PAUSE");
		}
		


			
			
				}
	







