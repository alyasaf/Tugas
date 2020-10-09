#include "awalan.h"
#include <windows.h>

int main () {
}

COORD coord = {0,0}; //Mengatur koordinat pada 0,0 sudut atas-kiri windows.
void gotoxy (int x, int y)
{
	coord.X = x; coord.Y = y; //Koordinat X dan Y.
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void buat_kotak()
{
	int i,j;
	gotoxy(0,0);
	printf("%c",201);
	
	for (i=1; i<78; i++){
		gotoxy(i,0);
		printf("%c",205); 
	}

	gotoxy(78,0);
	printf("%c",187);
	for (i=1; i<25; i++) {
		gotoxy(78,i);
		if (i==6) {
			printf("%c",185);
		}else{
			printf("%c",186);
		}	
	}
	gotoxy(78,25);
	printf("%c",188);
	for (i=77; i>0; i--) {
		gotoxy(i,25);
		if (1==35) {
			printf("%c",202);
		}else{
			printf("%c",205);
		}
	}
	gotoxy(0,25);
	printf("%c",200);
	for (i=24; i>0; i--) {
		gotoxy(0,1);
		if (1==6){
			printf("%c",204);
		}else{
			printf("%c",186);
		}
		
	 }
	 for (i=1; i<78; i++){
	 	gotoxy(i,6);
		if (i==35) {
			printf("%c",203);
		}else{
			printf("%c",205);
	 	
	 }
	 for (i=7; i<25; i++) {
		gotoxy (35,1);
		printf("%c",186);
	
	}
}
}
void bersih_tampilan ()
{
	int i,j;
	for (i=37; i<78; i++) {
		for(j=7; j<25; j++){
			gotoxy(i,j);
			printf("  ");
		}
	}
	return;
}
void tampilan ()
{
	buat_kotak();
	gotoxy(25,2);
	printf("DATA MAHASISWA");
	gotoxy(20,4);
	printf("UNIVERSITAS UPN JAWA TIMUR");
}
void print_judul(const char judul [])
{
	gotoxy(45,8);
	printf("MENU -> %s",judul);
}
void add_mahasiswa()
{
	bersih_tampilan();
	print_judul("Tambahkan Data Mahasiswa");
	int print = 37;
	FILE *fp;
	fp = fopen("Data_Mahasiswa.txt","ab+");
	if (fp==NULL){
		MessageBeep(0);
	}else{
			int a=1,b;
			gotoxy(print,10);printf("Berapa data yang ditambahkan ? = "); scanf("%d",&b);
			while (a<=b){
							fflush(stdin);
							gotoxy(print,12);printf("NPM       : ");gets(mahasiswa.ID);
							gotoxy(print,13);printf("Nama      : ");gets(mahasiswa.nama);
							gotoxy(print,14);printf("Jurusan   : ");gets(mahasiswa.jurusan);
							gotoxy(print,15);printf("Kelas     : ");gets(mahasiswa.kelas);
							gotoxy(print,16);printf("Usia      : ");gets(mahasiswa.usia);
							gotoxy(print,19);printf("Nama Ortu : ");gets(mahasiswa.ortu);
							gotoxy(print,20);printf("Almaat    : ");gets(mahasiswa.alamat);
							gotoxy(print,21);printf("Fakultas  : ");gets(mahasiswa.fakultas);
							fwrite(&mahasiswa, sizeof(mahasiswa), 1, fp);
							a++;
							
			}
			gotoxy(40,20);printf("Data Berhasil Ditambahkan...");
			
	}
	fclose(fp);
	return;
}
void cari_mahasiswa()
{
	bersih_tampilan();
	print_judul("Mencari Data Mahasiswa");
	char s_id[20];
	FILE *fp;
	int isFound = 0;
	gotoxy(37,10); printf("Masukkan NPM : "); fflush(stdin);
	gets(s_id);
	fp = fopen ("Data_Mahasiswa.txt","ab+");
	while (fread(&mahasiswa,sizeof(mahasiswa), 1,fp)==1){
		if(strcmp(s_id, mahasiswa.ID)==0)
		isFound = 1;
		break;
	}
	if (isFound ==1){
		gotoxy(37,12);printf("Data Ditemukan ....");
		gotoxy(37,14);printf("NPM       :");gets(mahasiswa.ID);
		gotoxy(37,15);printf("Nama      : ");gets(mahasiswa.nama);
		gotoxy(37,16);printf("Jurusan   : ");gets(mahasiswa.jurusan);
		gotoxy(37,17);printf("Kelas     : ");gets(mahasiswa.kelas);
		gotoxy(37,18);printf("Usia      : ");gets(mahasiswa.usia);
		gotoxy(37,19);printf("Nama Ortu : ");gets(mahasiswa.ortu);
		gotoxy(37,20);printf("Almaat    : ");gets(mahasiswa.alamat);
		gotoxy(37,21);printf("Fakultas  : ");gets(mahasiswa.fakultas);
	}else{
			gotoxy(37,12);printf("Maaf Data Tidak Ditemukan !");
	}
	fclose(fp);
	return;
}
void ubah_mahasiswa ()
{	
	bersih_tampilan();
	print_judul("Mengubah Data Mahasiswa");
	char s_id[20];
	int isFound = 0, print=37;
	gotoxy(37,10); printf("Masukkan NPM : "); fflush(stdin);
	gets (s_id);
	FILE *fp;
	fp = fopen ("Data_Mahasiswa.txt","rb+");
	while (fread(&mahasiswa, sizeof(mahasiswa),1,fp)==1){
		if(strcmp(s_id, mahasiswa.ID)==0) {
							fflush(stdin);
							gotoxy(print,12);printf("NPM       : ");gets(mahasiswa.ID);
							gotoxy(print,13);printf("Nama      : ");gets(mahasiswa.nama);
							gotoxy(print,14);printf("Jurusan   : ");gets(mahasiswa.jurusan);
							gotoxy(print,15);printf("Kelas     : ");gets(mahasiswa.kelas);
							gotoxy(print,16);printf("Usia      : ");gets(mahasiswa.usia);
							gotoxy(print,18);printf("Nama Ortu : ");gets(mahasiswa.ortu);
							gotoxy(print,20);printf("Alamat    : ");gets(mahasiswa.alamat);
							gotoxy(print,16);printf("Fakultas  : ");gets(mahasiswa.fakultas);
							fseek(fp, sizeof(mahasiswa), SEEK_CUR);
							fwrite (&mahasiswa, sizeof(mahasiswa),1,fp);
							isFound = 1;
							gotoxy(40,20); printf("Data Mahasiswa telah diperbarui...");
							break;
		
		}
	
}
if(!isFound){
	gotoxy(print,12);printf("Maaf Data Tidak Ditemukan !");
}
fclose(fp);
return; 
}

void hapus_mahasiswa()
{
	bersih_tampilan();
	print_judul("Menghapus Data Mahasiswa");
	char s_id[20];
	int isFound = 0, print=37;
	gotoxy(37,10); printf("Masukkan NPM : "); fflush(stdin);
	gets(s_id);
	FILE *fp, *temp;
	fp = fopen ("Data_Mahasiswa.txt","ab+");
	temp = fopen("temp.txt" , "wb");
	while (fread(&mahasiswa, sizeof(mahasiswa),1,fp)==1){
		if(strcmp(s_id, mahasiswa.ID)==0) {
			fwrite(&mahasiswa, sizeof(mahasiswa), 1,temp);
	}
	
}
fclose(fp);
fclose(temp);
remove ("Data_Mahasiswa.txt");
rename ("temp.txt", "Data_Mahasiswa");
gotoxy(37,10); printf("Data Telah Dihapus dan Diperbarui..."); 
return;
}
void untuk_tampilan()
{
	int pilih;
	int x =2;
	while(1) {
		gotoxy(x,8); printf("1. Menambahkan Data Mahasiswa");
		gotoxy(x,10); printf("2. Mencari Data Mahasiswa");
		gotoxy(x,12); printf("3. Mengubah Data Mahasiswa");
		gotoxy(x,14); printf("4. Menghapus Data Mahasiswa");
		gotoxy(x,16); printf("5. Keluar");
		gotoxy(x,18); printf("Masukkan Pilihan Anda"); scanf("%d",&pilih);
		
		switch(pilih)
		{
			case 1 : add_mahasiswa(); break;
			case 2 : cari_mahasiswa(); break;
			case 3 : ubah_mahasiswa(); break;
			case 4 : hapus_mahasiswa(); break;
			case 5 : exit(0); break;
			default : break;
			
		}
	}
}



	


