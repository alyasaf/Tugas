#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct 
{
	long int absen;
	char nama  [20];
	char usia  [20];
	char kelas [20];	
	char alamat[50];
}data_siswa;
data_siswa siswa1,siswa2;
main()
{
	printf("Data Siswa Pertama  = \n");
	printf("----------------------\n");
	printf("Absen  = ");
	scanf("%li",&siswa1.absen);
	printf("Nama   = ");fflush(stdin);gets(siswa1.nama);
	printf("Usia   = ");fflush(stdin);gets(siswa1.usia);
	printf("Kelas  = ");fflush(stdin);gets(siswa1.kelas);
	printf("Alamat = ");fflush(stdin);gets(siswa1.alamat);
	printf("\n\n");
	printf("Data Siswa Kedua = \n");
	printf("----------------------\n");
	printf("Absen  = ");
	scanf("%li",&siswa2.absen);
	printf("Nama   = ");fflush(stdin);gets(siswa2.nama);
	printf("Usia   = ");fflush(stdin);gets(siswa2.usia);
	printf("Kelas  = ");fflush(stdin);gets(siswa2.kelas);
	printf("Alamat = ");fflush(stdin);gets(siswa2.alamat);
	printf("\n\n");
	
	
	//untuk output 
	
	printf("Data Siswa Pertama   = \n");
	printf("-----------------------\n");
	printf("absen  : %li\n",siswa1.absen);
	printf("Nama   : %s\n",siswa1.nama);
	printf("Usia   : %s\n",siswa1.usia );
	printf("Kelas  : %s\n",siswa1.kelas);
	printf("Alamat : %s\n",siswa1.alamat);
	printf("\n\n");
	printf("Data Siswa Kedua      = \n");
	printf("------------------------\n");
	printf("absen  : %li\n",siswa2.absen);
	printf("Nama   : %s\n",siswa2.nama);
	printf("Usia   : %s\n",siswa2.usia );
	printf("Kelas  : %s\n",siswa2.kelas);	
	printf("Alamat : %s\n",siswa2.alamat);
	printf("\n\n");
	
}

