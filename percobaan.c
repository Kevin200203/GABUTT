/*****************************************************************************************************
						FUNGSI
TANGGAL PEMBUATAN 11/23/2021
OLEH : KEVIN SIRINGORINGO
REVISI : 0
DESKRIPSI : BELAJAR TENTANG FUNGSI TANPA ARGUMEN, DENGAN INPUT ARGUMEN, MULTI ARGUMEN

REVISI : 1
REVISI : 2
******************************************************************************************************/


#include <stdio.h>
//deklasrasi prototype fungsi
void buatan_kevin (void);
void penilaian_diri (char input);
char luaran_diri (int );

int main (void){
	int input_manual;
	char input_program;
	buatan_kevin ();
	printf ("berikan penilaian pada diri saya >> ");
	scanf("%c", &input_manual);
	input_program = luaran_diri (input_manual);
	penilaian_diri (input_program);
	while (1){
	}
	
	return (0);
}

//fungsi tanpa argumen

void buatan_kevin (void){
	printf("halo nama saya kevin\n");
	printf("saya masih hidup\n");


}

void penilaian_diri (char input) {
	switch (input) {
		case 'A' :
		case 'a' :
			printf ("saya gabut");
			break;
		case 'B' :
		case 'b' :
			printf("saya ga tau ngapain");
			break;
			
			default :
				printf("saya bukan omnivora");
			break;
	}
}

char luaran_diri(int nilai){
	char luaran;
	if (nilai >0 && nilai <=5){
		luaran = 'C';	
	}
	else if (nilai >=6 && nilai<=8){
		luaran = 'B';
	}
	else  {
		luaran = 'A';
	}
	
	return (luaran);
	
	
}+
