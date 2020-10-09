#ifndef AWALAN_H_INCLUDED
#define AWALAN_H_INCLUDED 

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

		//** UNTUK PENYIMPANAN **//
	
struct data {
	char ID       [20];
	char nama     [50];
	char jurusan  [60];
	char kelas    [25];
	char usia     [30];	
	char ortu     [60];
	char alamat   [80];
	char fakultas [50];	
};
struct data mahasiswa;

void gotoxy(int x, int y);
void buat_kotak();
void bersih_tampilan();
void tampilan();
void print_judul(const char judul []);
void add_mahasiswa();
void cari_mahasiswa();
void ubah_mahasiswa();
void hapus_mahasiswa();
void untuk_tampilan();

#endif // AWALAN_H_INCLUDED



