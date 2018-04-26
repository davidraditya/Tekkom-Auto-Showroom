#include <stdio.h>
#include <stdlib.h>

int pilihan;
int tipe;
int jenis;
int unit;

int beli();
int belihatchback();
int belifamily();
int belisedan();
int belisuv();
int belieksekutif();
int hitung(int *a,int *b,int c);
int confirmation();
int confirmation1();
int pembayaran();
int pembayaran1();
int pembayaran2();
int pembayaran3();
int pembayaran4();

int daftar();
int hatchback();
int family();
int sedan();
int suv();
int eksekutif();

int kwitansi();
int hitung2(int x, int *y, int z);

int bantuan();

int keluar();

int hatch1=8;  int hatch2=8;  int hatch3=8;
int fam1=8;    int fam2=8;    int fam3=8;
int sedan1=8;  int sedan2=8;  int sedan3=8;
int suv1=8;    int suv2=8;    int suv3=8;
int eks1=8;    int eks2=8;    int eks3=8;

int hhatch1=20000;  int hhatch2=21000;  int hhatch3=18000;
int hfam1=22000;    int hfam2=20000;    int hfam3=21500;
int hsedan1=39000;  int hsedan2=45000;  int hsedan3=30000;
int hsuv1=45000;    int hsuv2=51000;    int hsuv3=50000;
int heks1=57000;    int heks2=56000;    int heks3=55500;

int bhatch1=0;  int bhatch2=0;  int bhatch3=0;
int bfam1=0;    int bfam2=0;    int bfam3=0;
int bsedan1=0;  int bsedan2=0;  int bsedan3=0;
int bsuv1=0;    int bsuv2=0;    int bsuv3=0;
int beks1=0;    int beks2=0;    int beks3=0;

int khatch1;  int khatch2;  int khatch3;
int kfam1;    int kfam2;    int kfam3;
int ksedan1;  int ksedan2;  int ksedan3;
int ksuv1;    int ksuv2;    int ksuv3;
int keks1;    int keks2;    int keks3;

int cicil1=0;  int cicil2=0;  int cicil3=0;
int langsung=0;
int no=1;
long jumlah=0;
long jumlahtambahan;
long jumlahcicil;
long pajak;
long bunga;
long DP;
long DPMIN;
long cicilan;

int main(){
	printf ("\n  ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf ("  ::          ___                                            ___          ::\n");
	printf ("  ::         /_/_\\           TEKKOM AUTO SHOWROOM           /_/_\\         ::\n");
	printf ("  ::        [O===O]                                        [O===O]        ::\n");
	printf ("  ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf ("  ==========================================================================\n");
	printf ("  ||                                                                      ||\n");
	printf ("  ||      1. Katalog Mobil                                                ||\n");
	printf ("  ||                                                 4. Bantuan           ||\n");
	printf ("  ||      2. Pembelian Mobil                                              ||\n");
	printf ("  ||                                                 5. Keluar            ||\n");
	printf ("  ||      3. Kuitansi Pembelian Mobil                                     ||\n");
	printf ("  ||                                                                      ||\n");
	printf ("  ||                                                                      ||\n");
	printf ("  ==========================================================================\n");
	printf ("  Silahkan masukkan pilihan anda:\n"); scanf ("%d",&pilihan);
	system ("cls");
	
	if (pilihan<1||pilihan>5){
		printf("Input Invalid!!!");
		main();
	}
	switch (pilihan){
		case 1: {
			daftar();
			break;
		}
		case 2: {
			beli();
			break;
		}
		case 3: {
			kwitansi();
			break;
		}
		case 4: {
			bantuan();
			break;
		}
		case 5: {
			keluar();
			break;
		}
	}
}

int beli(){
	if(langsung==1||cicil1==1||cicil2==1||cicil3==1){
		printf("*CAUTION\t: Data Pembelian Sebelumnya Akan Terhapus\n");
		printf("\t\t Tekan 1 Untuk Melanjutkan, Tekan 0 Untuk Batal");scanf ("%d",&pilihan);
		if (pilihan==1){
			bhatch1=0; bhatch2=0; bhatch3=0;
			bfam1=0; bfam2=0; bfam3=0;
			bsedan1=0; bsedan2=0; bsedan3=0;
			bsuv1=0; bsuv2=0; bsuv3=0;
			beks1=0; beks2=0; beks3=0;
			cicil1=0; cicil2=0; cicil3=0;
			langsung=0;
			no=1;
			jumlah=0;
			system("cls");
			beli();
		} else if (pilihan==0){
			system ("cls");
			main();
		} else {
			printf("Input Invalid!!!");
			beli();
		}
	}
	printf ("\n ##########################################################################\n");
	printf (" ##                                                                      ##\n");
	printf (" ##                           Pembelian Mobil                            ##\n");
	printf (" ##                                                                      ##\n");
	printf (" ##########################################################################\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  Tipe Mobil:                                                         ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1. Hatchback                                                        ||\n");
	printf (" ||  2. Family Car                                                       ||\n");
	printf (" ||  3. Sedan                                                            ||\n");
	printf (" ||  4. SUV                                                              ||\n");
	printf (" ||  5. Executive Car                                                    ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  9. Kembali ke menu sebelumnya                                       ||\n");
	printf (" ||  0. Keluar                                                           ||\n");
	printf (" ==========================================================================\n");
	printf (" Silahkan masukkan tipe mobil yang akan anda beli:\n "); scanf ("%d",&tipe);	
	system ("cls");
	
	if (tipe==9){
		main();
	} else if (tipe==0){
		keluar();
	} else if (tipe<1||tipe>5){
		printf ("Input Invalid!!!");
		beli();
	}
	
	switch (tipe){
		case 1:{
			belihatchback();
			break;
		}
		case 2:{
			belifamily();
			break;
		}
		case 3:{
			belisedan();
			break;
		}
		case 4:{
			belisuv();
			break;
		}
		case 5:{
			belieksekutif();
			break;
		}				
	}
}

int belihatchback(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                     Pembelian Mobil Hatchback                        ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No     Merk Mobil                       Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1.  Toyota Yaris                         %d       200.000.000.000    ||\n",hatch1);
	printf (" ||                                                                      ||\n");
	printf (" ||  2.  Honda Jazz                           %d       210.000.000.000    ||\n",hatch2);
	printf (" ||                                                                      ||\n");
	printf (" ||  3.  Ford Fiesta                          %d       180.000.000.000    ||\n",hatch3);
	printf (" ||                                                                      ||\n");
	printf (" ||  9. Kembali ke menu sebelumnya                                       ||\n");
	printf (" ||  0. Keluar                                                           ||\n");
	printf (" ==========================================================================\n");
	printf (" Silahkan memilih mobil yang ingin anda beli: "); scanf ("%d",&jenis);	
	
	if (jenis==9){
		system ("cls");
		beli();
	} else if (jenis==0){
		system ("cls");
		keluar();
	} else if (jenis<1||jenis>3){
		system ("cls");
		printf ("Input Invalid!!!");
		belihatchback();
	}
	
	printf ("\n\t\t\t Jumlah mobil yang dibeli: "); scanf ("%d",&unit);	
	if (unit<=0){
		system ("cls");
		printf ("Jumlah harus lebih dari 0!!!");
		belihatchback();
	}
	switch (jenis){
		case 1:{
			if (hatch1-unit<0){
				system ("cls");
				printf ("Jumlah melebihi batas!!!");
				belihatchback();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 2:{
			if (hatch2-unit<0){
				system ("cls");
				printf ("Jumlah melebihi batas!!!");
				belihatchback();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 3:{
			if (hatch3-unit<0){
				system ("cls");
				printf ("Jumlah melebihi batas!!!");
				belihatchback();				
			}
			system ("cls");
			confirmation();
			break;
		}
	}
}

int belifamily(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                     Pembelian Mobil Family Car                       ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No     Merk Mobil                       Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1.  Honda Mobilio                        %d       220.000.000.000    ||\n",fam1);
	printf (" ||                                                                      ||\n");
	printf (" ||  2.  Nissan Grand Livina                  %d       200.000.000.000    ||\n",fam2);
	printf (" ||                                                                      ||\n");
	printf (" ||  3.  Toyota Avanza                        %d       215.000.000.000    ||\n",fam3);
	printf (" ||                                                                      ||\n");
	printf (" ||  9. Kembali ke menu sebelumnya                                       ||\n");
	printf (" ||  0. Keluar                                                           ||\n");
	printf (" ==========================================================================\n");
	printf (" Silahkan memilih mobil yang ingin anda beli: "); scanf ("%d",&jenis);

	if (jenis==9){
		system ("cls");
		beli();
	} else if (jenis==0){
		system ("cls");
		keluar();
	} else if (jenis<1||jenis>3){
		system ("cls");
		printf ("Input Invalid!!!");
		belifamily();
	}	

	printf ("\n\t\t\t Jumlah mobil yang dibeli: "); scanf ("%d",&unit);	
	if (unit<=0){
		system ("cls");
		printf ("Jumlah harus lebih dari 0!!!");
		belifamily();
	}
	switch (jenis){
		case 1:{
			if (fam1-unit<0){
				system ("cls");
				printf ("Jumlah melebihi batas!!!");
				belifamily();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 2:{
			if (fam2-unit<0){
				system ("cls");
				printf ("Jumlah melebihi batas!!!");
				belifamily();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 3:{
			if (fam3-unit<0){
				system ("cls");
				printf ("Jumlah melebihi batas!!!");
				belifamily();				
			}
			system ("cls");
			confirmation();
			break;
		}
	}
}

int belisedan(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                        Pembelian Mobil Sedan                         ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No     Merk Mobil                       Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1.  Honda Civic                          %d       390.000.000.000    ||\n",sedan1);
	printf (" ||                                                                      ||\n");
	printf (" ||  2.  Toyota Vios                          %d       450.000.000.000    ||\n",sedan2);
	printf (" ||                                                                      ||\n");
	printf (" ||  3.  Honda City                           %d       300.000.000.000    ||\n",sedan3);
	printf (" ||                                                                      ||\n");
	printf (" ||  9. Kembali ke menu sebelumnya                                       ||\n");
	printf (" ||  0. Keluar                                                           ||\n");
	printf (" ==========================================================================\n");
	printf (" Silahkan memilih mobil yang ingin anda beli: "); scanf ("%d",&jenis);

	if (jenis==9){
		system ("cls");
		beli();
	} else if (jenis==0){
		system ("cls");
		keluar();
	} else if (jenis<1||jenis>3){
		system ("cls");
		printf ("Input Invalid!!!");
		belisedan();
	}
	
	printf ("\n\t\t\t Jumlah mobil yang dibeli: "); scanf ("%d",&unit);	
	if (unit<=0){
		system ("cls");
		printf ("Jumlah harus lebih dari 0!!!");
		belisedan();
	}
	switch (jenis){
		case 1:{
			if (sedan1-unit<0){
				system ("cls");
				printf ("Jumlah melebihi batas!!!");
				belisedan();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 2:{
			if (sedan2-unit<0){
				system ("cls");
				printf ("Jumlah melebihi batas!!!");
				belisedan();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 3:{
			if (sedan3-unit<0){
				system ("cls");
				printf ("Jumlah melebihi batas!!!");
				belisedan();				
			}
			system ("cls");
			confirmation();
			break;
		}
	}
}

int belisuv(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                         Pembelian Mobil SUV                          ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No     Merk Mobil                       Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1.  Honda CR-V                           %d       450.000.000.000    ||\n",suv1);
	printf (" ||                                                                      ||\n");
	printf (" ||  2.  Toyota Fortuner                      %d       510.000.000.000    ||\n",suv2);
	printf (" ||                                                                      ||\n");
	printf (" ||  3.  Mitsubishi Pajero                    %d       500.000.000.000    ||\n",suv3);
	printf (" ||                                                                      ||\n");
	printf (" ||  9. Kembali ke menu sebelumnya                                       ||\n");
	printf (" ||  0. Keluar                                                           ||\n");
	printf (" ==========================================================================\n");
	printf (" Silahkan memilih mobil yang ingin anda beli: "); scanf ("%d",&jenis);

	if (jenis==9){
		system ("cls");
		beli();
	} else if (jenis==0){
		system ("cls");
		keluar();
	} else if (jenis<1||jenis>3){
		system ("cls");
		printf ("Input Invalid!!!");
		belisuv();
	}
	
	printf ("\n\t\t\t Jumlah mobil yang dibeli: "); scanf ("%d",&unit);	
	if (unit<=0){
		system ("cls");
		printf ("Jumlah harus lebih dari 0!!!");
		belisuv();
	}
	switch (jenis){
		case 1:{
			if (suv1-unit<0){
				system ("cls");
				printf ("Jumlah melebihi batas!!!");
				belisuv();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 2:{
			if (suv2-unit<0){
				system ("cls");
				printf ("Jumlah melebihi batas!!!");
				belisuv();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 3:{
			if (suv3-unit<0){
				system ("cls");
				printf ("Jumlah melebihi batas!!!");
				belisuv();				
			}
			system ("cls");
			confirmation();
			break;
		}
	}
}

int belieksekutif(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                     Pembelian Mobil Executive Car                    ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No     Merk Mobil                       Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1.  Toyota Camry                         %d       570.000.000.000    ||\n",eks1);
	printf (" ||                                                                      ||\n");
	printf (" ||  2.  Honda Accord                         %d       560.000.000.000    ||\n",eks2);
	printf (" ||                                                                      ||\n");
	printf (" ||  3.  BMW 1 Series                         %d       555.000.000.000    ||\n",eks3);
	printf (" ||                                                                      ||\n");
	printf (" ||  9. Kembali ke menu sebelumnya                                       ||\n");
	printf (" ||  0. Keluar                                                           ||\n");
	printf (" ==========================================================================\n");
	printf (" Silahkan memilih mobil yang ingin anda beli: "); scanf ("%d",&jenis);

	if (jenis==9){
		system ("cls");
		beli();
	} else if (jenis==0){
		system ("cls");
		keluar();
	} else if (jenis<1||jenis>3){
		system ("cls");
		printf ("Input Invalid!!!");
		belieksekutif();
	}
	
	printf ("\n\t\t\t Jumlah mobil yang dibeli: "); scanf ("%d",&unit);	
	if (unit<=0){
		system ("cls");
		printf ("Jumlah harus lebih dari 0!!!");
		belieksekutif();
	}
	switch (jenis){
		case 1:{
			if (eks1-unit<0){
				system ("cls");
				printf ("Jumlah melebihi batas!!!");
				belieksekutif();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 2:{
			if (eks2-unit<0){
				system ("cls");
				printf ("Jumlah melebihi batas!!!");
				belieksekutif();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 3:{
			if (eks3-unit<0){
				system ("cls");
				printf ("Jumlah melebihi batas!!!");
				belieksekutif();				
			}
			system ("cls");
			confirmation();
			break;
		}
	}
}

int confirmation(){
	printf ("\n\n   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf ("   @   @@::::::@@         ----------------------         @@:::::@@   @\n");
	printf ("   @     @@::::::@@       ! Halaman Konfirmasi !       @@:::::@@     @\n");
	printf ("   @   @@::::::@@         ----------------------         @@:::::@@   @\n");
	printf ("   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf ("   ===================================================================\n");
	printf ("   @                                                                 @\n");
	printf ("   @         Anda akan membeli %d",unit);

	if (tipe==1&&jenis==1){
		printf (" unit mobil Toyota Yaris             @\n");
	} else if (tipe==1&&jenis==2){
		printf (" unit mobil Honda Jazz               @\n");
	} else if (tipe==1&&jenis==3){
		printf (" unit mobil Ford Fiesta              @\n");
	} else if (tipe==2&&jenis==1){
		printf (" unit mobil Honda Mobilio            @\n");
	} else if (tipe==2&&jenis==2){
		printf (" unit mobil Nissan Grand Livina      @\n");
	} else if (tipe==2&&jenis==3){
		printf (" unit mobil Toyota Avanza            @\n");
	} else if (tipe==3&&jenis==1){
		printf (" unit mobil Honda Civic              @\n");
	} else if (tipe==3&&jenis==2){
		printf (" unit mobil Toyota Vios              @\n");
	} else if (tipe==3&&jenis==3){
		printf (" unit mobil Honda City               @\n");
	} else if (tipe==4&&jenis==1){
		printf (" unit mobil Honda CR-V               @\n");
	} else if (tipe==4&&jenis==2){
		printf (" unit mobil Toyota Fortuner          @\n");
	} else if (tipe==4&&jenis==3){
		printf (" unit mobil Mitsubishi Pajero        @\n");
	} else if (tipe==5&&jenis==1){
		printf (" unit mobil Toyota Camry             @\n");
	} else if (tipe==5&&jenis==2){
		printf (" unit mobil Honda Accord             @\n");
	} else if (tipe==5&&jenis==3){
		printf (" unit mobil BMW 1 Series             @\n");
	}
	printf ("   @                                                                 @\n");
	printf ("   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
	printf ("\t\t\t\tAnda Yakin?\n");
	printf ("\t\t\t    1. Ya    0. Tidak\n");
	printf ("\t\t\t\t     ");scanf("%d",&pilihan);
	if (pilihan==1){
		system ("cls");
			if (tipe==1&&jenis==1){
				hitung(&bhatch1,&hatch1,hhatch1);
			} else if (tipe==1&&jenis==2){
				hitung(&bhatch2,&hatch2,hhatch2);
			} else if (tipe==1&&jenis==3){
				hitung(&bhatch3,&hatch3,hhatch3);
			} else if (tipe==2&&jenis==1){
				hitung(&bfam1,&fam1,hfam1);
			} else if (tipe==2&&jenis==2){
				hitung(&bfam2,&fam2,hfam2);
			} else if (tipe==2&&jenis==3){
				hitung(&bfam3,&fam3,hfam3);
			} else if (tipe==3&&jenis==1){
				hitung(&bsedan1,&sedan1,hsedan1);
			} else if (tipe==3&&jenis==2){
				hitung(&bsedan2,&sedan2,hsedan2);
			} else if (tipe==3&&jenis==3){
				hitung(&bsedan3,&sedan3,hsedan3);
			} else if (tipe==4&&jenis==1){
				hitung(&bsuv1,&suv1,hsuv1);
			} else if (tipe==4&&jenis==2){
				hitung(&bsuv2,&suv2,hsuv2);
			} else if (tipe==4&&jenis==3){
				hitung(&bsuv3,&suv3,hsuv3);
			} else if (tipe==5&&jenis==1){
				hitung(&beks1,&eks1,heks1);
			} else if (tipe==5&&jenis==2){
				hitung(&beks2,&eks2,heks2);
			} else {
				hitung(&beks3,&eks3,heks3);
			}
		confirmation1();
	} else if (pilihan==0){
		system ("cls");
		beli();
	} else {
		system ("cls");
		printf ("Input Invalid!!!");
		confirmation();
	}
}

int hitung(int *a,int *b,int c){
	*a+=unit;
	*b-=unit;
	jumlah+=unit*c;
}

int confirmation1(){
	printf ("\n\n   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf ("   @   @@::::::@@         ----------------------         @@:::::@@   @\n");
	printf ("   @     @@::::::@@       ! Halaman Konfirmasi !       @@:::::@@     @\n");
	printf ("   @   @@::::::@@         ----------------------         @@:::::@@   @\n");
	printf ("   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf ("   ===================================================================\n");
	printf ("   @                                                                 @\n");
	printf ("   @   Mobil anda telah ditambahkan ke dalam troli                   @\n");
	printf ("   @                                                                 @\n");
	printf ("   @   1. Kembali berbelanja                                         @\n");
	printf ("   @                                                                 @\n");
	printf ("   @   2. Lanjut ke metode pembayaran                                @\n");
	printf ("   @                                                                 @\n");
	printf ("   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf ("\n   Masukkan Pilihan Anda:\n   "); scanf ("%d",&pilihan);
	if (pilihan==1){
		system ("cls");
		beli();
	} else if (pilihan==2){
		system ("cls");
		pembayaran();
	} else {
		system ("cls");
		printf ("Input Invalid!!!");
		confirmation1();
	}
		
}

int pembayaran(){
	printf ("\n $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf (" $    $ :::::: $          ----------------------       $ ::::: $   $\n");
	printf (" $      $ :::::: $        $  Metode Pembayaran $     $ ::::: $     $\n");
	printf (" $    $ :::::: $          ----------------------       $ ::::: $   $\n");
	printf (" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf (" ===================================================================\n");
	printf (" ||                                                               ||\n");
	printf (" ||  Pilihan metode pembayan yang tersedia:                       ||\n");
	printf (" ||                                                               ||\n");
	printf (" ||  1. Tunai                                                     ||\n");
	printf (" ||                                                               ||\n");
	printf (" ||  2. Cicilan (Bunga 10%%)                                       ||\n");
	printf (" ||                                                               ||\n");
	printf (" ===================================================================\n");
	printf (" Silahkan memilih metode pembayaran mobil anda:\n "); scanf ("%d",&pilihan);
	if (pilihan==1){
		system ("cls");
		pembayaran1();
	} else if (pilihan==2){
		system ("cls");
		pembayaran2();
	} else {
		system ("cls");
		printf ("Input Invalid!!!");
		pembayaran();
	}
}

int pembayaran1(){
	printf ("\n $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf (" $    $ :::::: $        ----------------------         $ ::::: $   $\n");
	printf (" $      $ :::::: $      $  Metode Pembayaran $       $ ::::: $     $\n");
	printf (" $    $ :::::: $        ----------------------         $ ::::: $   $\n");
	printf (" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf (" ===================================================================\n");
	printf (" ||                                                               ||\n");
	printf (" ||             Anda Telah Memilih Pembayaran Tunai               ||\n");
	printf (" ||                                                               ||\n");
	printf (" ===================================================================\n");
	printf (" Silahkan tekan 1 untuk mencetak bukti pembayaran:\n "); scanf ("%d",&pilihan);
	if (pilihan==1){
		langsung++;
		system("cls");
		kwitansi();
	} else {
		printf("Input Invalid!!!");
		pembayaran1();
	}
}

int pembayaran2(){
	printf ("\n $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf (" $    $ :::::: $        ----------------------         $ ::::: $   $\n");
	printf (" $      $ :::::: $      $  Metode Pembayaran $       $ ::::: $     $\n");
	printf (" $    $ :::::: $        ----------------------         $ ::::: $   $\n");
	printf (" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf (" ===================================================================\n");
	printf (" ||                                                               ||\n");
	printf (" ||   Pilihan program cicilan:                                    ||\n");
	printf (" ||                                                               ||\n");
	printf (" ||   1. Cicilan 12 Bulan                                         ||\n");
	printf (" ||                                                               ||\n");
	printf (" ||   2. Cicilan 24 Bulan                                         ||\n");
	printf (" ||                                                               ||\n");
	printf (" ||   3. Cicilan 36 Bulan                                         ||\n");
	printf (" ||                                                               ||\n");
	printf (" ===================================================================\n");
	printf ("\t Masukkan Pilihan Anda: "); scanf ("%d",&pilihan);
	if (pilihan==1){
		cicil1++;
		system ("cls");
	} else if (pilihan==2){
		cicil2++;
		system ("cls");
	} else if (pilihan==3){
		cicil3++;
		system ("cls");
	} else {
		system ("cls");
		printf ("Input Invalid!!!");
		pembayaran2();
	}
	pembayaran3();
}

int pembayaran3(){
	printf ("\n @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf (" $                           ----------------------                           $\n");
	printf (" $---------------------------|  Metode Pembayaran |---------------------------$\n");
	printf (" $                           ----------------------                           $\n");
	printf (" @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf (" ******************************************************************************\n");
	printf (" |                                                                            |\n");
	printf (" |                   Anda memilih ");
	if (cicil1==1){
		printf ("program 12 bulan cicilan                    |\n");
	} else if (cicil2==1){
		printf ("program 24 bulan cicilan                    |\n");
	} else printf ("program 36 bulan cicilan                    |\n");
	printf (" |                   *Program cicilan ini memerlukan DP                       |\n");
	printf (" |                                                                            |\n");
	printf (" ******************************************************************************\n");	

	printf ("\n\t Harga\t\t\t: %d0000 \n",jumlah);	
	DPMIN=jumlah*0.3;
	printf ("\t DP minimal\t\t: %d0000 (30%% dari harga total) \n",DPMIN);
	
	printf ("\n\t DP yang anda inginkan (dalam juta)\t: "); scanf ("%d",&DP);
	system ("cls");
	if (DP*100<DPMIN){
		printf ("DP kurang!!!");
		pembayaran3();		
	} else if (DP*100>jumlah){
		printf ("DP tak boleh melebihi harga total!!!");
		pembayaran3();	
	}
	
	pembayaran4();
}

int pembayaran4(){
	printf ("\n $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf (" $    $ :::::: $        ----------------------         $ ::::: $   $\n");
	printf (" $      $ :::::: $      $  Metode Pembayaran $       $ ::::: $     $\n");
	printf (" $    $ :::::: $        ----------------------         $ ::::: $   $\n");
	printf (" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf (" ===================================================================\n");
	printf (" ||                                                               ||\n");
	printf (" ||          Anda Telah Memilih Pembayaran Dengan Cicilan         ||\n");
	printf (" ||                                                               ||\n");
	printf (" ===================================================================\n");
	printf ("\t Tekan 1 Untuk Mencetak Bukti Pembayaran: "); scanf ("%d",&pilihan);	
	if (pilihan==1){
		system("cls");
		kwitansi();
	} else {
		printf("Input Invalid!!!");
		pembayaran4();
	}
}

int daftar(){
	printf ("\n ##########################################################################\n");
	printf (" ##                                                                      ##\n");
	printf (" ##                            Katalog Mobil                             ##\n");
	printf (" ##                                                                      ##\n");
	printf (" ##########################################################################\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  Tipe Mobil:                                                         ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1. Hatchback                                                        ||\n");
	printf (" ||  2. Family Car                                                       ||\n");
	printf (" ||  3. Sedan                                                            ||\n");
	printf (" ||  4. SUV                                                              ||\n");
	printf (" ||  5. Executive Car                                                    ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  9. Kembali ke menu sebelumnya                                       ||\n");
	printf (" ||  0. Keluar                                                           ||\n");
	printf (" ==========================================================================\n");
	printf (" Silahkan memasukkan pilihan anda untuk melihat lebih lanjut:\n "); scanf ("%d",&pilihan);	
	system ("cls");
	
	if (pilihan==9){
		main();
	} else if (pilihan==0){
		keluar();
	} else if (pilihan<1||pilihan>5){
		printf ("Input Invalid!!!");
		daftar();
	}
	
	switch (pilihan){
		case 1:{
			hatchback();
			break;
		}
		case 2:{
			family();
			break;
		}
		case 3:{
			sedan();
			break;
		}
		case 4:{
			suv();
			break;
		}
		case 5:{
			eksekutif();
			break;
		}				
	}
}

int hatchback(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                        List Mobil Hatchback                          ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No     Merk Mobil                       Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1. [Toyota Yaris]                        %d       200.000.000.000    ||\n",hatch1);
	printf (" ||     Dengan Mesin 4 Cyl 16 V DOHC VVT-i                               ||\n");
	printf (" ||     yang tangguh, konsumsi bahan bakar                               ||\n");
	printf (" ||     mobil ini sangat irit, hanya 1497cc                              ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  2. [Honda Jazz]                          %d       210.000.000.000    ||\n",hatch2);
	printf (" ||     Dilengkapi teknologi mesin i-Vtec,                               ||\n");
	printf (" ||     cocok untuk anak muda yang menyukai                              ||\n");
	printf (" ||     akselerasi tinggi & desain sporty                                ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  3. [Ford Fiesta]                         %d       180.000.000.000    ||\n",hatch3);
	printf (" ||     Dengan Mesin 4 Cyl 16 V DOHC Ti-VCT                              ||\n");
	printf (" ||     yang responsif & body aerodinamis,                               ||\n");
	printf (" ||     mobil ini cocok untuk rally & drift                              ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ==========================================================================\n");
	printf ("\n Tekan 9 untuk kembali, dan tekan 0 untuk keluar.\n\n Silahkan masukkan pilihan anda:\n "); scanf ("%d",&pilihan);
	system ("cls");
	if (pilihan==9){
		daftar();
	} else if (pilihan==0){
		keluar();
	} else {
		printf ("Input Invalid!!!");
		hatchback();
	}
}

int family(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                       List Mobil Family Car                          ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No     Merk Mobil                       Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1. [Honda Mobilio]                       %d       220.000.000.000    ||\n",fam1);
	printf (" ||     Ukuran kabin yang lega & ditambah                                ||\n");
	printf (" ||     ruang bagasi yang cukup besar men-                               ||\n");
	printf (" ||     jadikan mobil ini sangat nyaman                                  ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  2. [Nissan Grand Livina]                 %d       200.000.000.000    ||\n",fam2);
	printf (" ||     Fitur-fitur keamanan & keselamatan                               ||\n");
	printf (" ||     yang canggih sangat cocok untuk                                  ||\n");
	printf (" ||     berpergian bersama keluarga                                      ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  3. [Toyota Avanza]                       %d       215.000.000.000    ||\n",fam3);
	printf (" ||     Selain desain yang elegan, mobil                                 ||\n");
	printf (" ||     ini juga memiliki ground clearance                               ||\n");
	printf (" ||     yang cukup aman melewati banjir                                  ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ==========================================================================\n");
	printf ("\n Tekan 9 untuk kembali, dan tekan 0 untuk keluar.\n\n Silahkan masukkan pilihan anda:\n "); scanf ("%d",&pilihan);
	system ("cls");
	if (pilihan==9){
		daftar();
	} else if (pilihan==0){
		keluar();
	} else {
		printf ("Input Invalid!!!");
		family();
	}	
}

int sedan(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                          List Mobil Sedan                            ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No     Merk Mobil                       Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1. [Honda Civic]                         %d       390.000.000.000    ||\n",sedan1);
	printf (" ||     Eksterior mobil yang aerodinamis                                 ||\n");
	printf (" ||     dilengkapi pula dengan bumper yang                               ||\n");
	printf (" ||     mengurangi turbulensi udara                                      ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  2. [Toyota Vios]                         %d       450.000.000.000    ||\n",sedan2);
	printf (" ||     Dilengkapi dengan Electronic Power                               ||\n");
	printf (" ||     Steering yang menggantikan hidrolik                              ||\n");
	printf (" ||     membuat stir nyaman dikemudikan                                  ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  3. [Honda City]                          %d       300.000.000.000    ||\n",sedan3);
	printf (" ||     Layout kabin yang luas serta tata                                ||\n");
	printf (" ||     letak interior yang nyaman membuat                               ||\n");
	printf (" ||     visibilitas mengemudi sangat nyaman                              ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ==========================================================================\n");
	printf ("\n Tekan 9 untuk kembali, dan tekan 0 untuk keluar.\n\n Silahkan masukkan pilihan anda:\n "); scanf ("%d",&pilihan);
	system ("cls");
	if (pilihan==9){
		daftar();
	} else if (pilihan==0){
		keluar();
	} else {
		printf ("Input Invalid!!!");
		sedan();
	}
}

int suv(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                           List Mobil SUV                             ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No     Merk Mobil                       Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1. [Honda CR-V]                          %d       450.000.000.000    ||\n",suv1);
	printf (" ||     Model yang aerodinamis & radius                                  ||\n");
	printf (" ||     putaran stir yang optimal mampu                                  ||\n");
	printf (" ||     membuat handling lebih mudah                                     ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  2. [Toyota Fortuner]                     %d       510.000.000.000    ||\n",suv2);
	printf (" ||     Mobil ini mempunyai tenaga yang                                  ||\n");
	printf (" ||     besar, sehingga dapat melintasi                                  ||\n");
	printf (" ||     medan yang sulit dengan mudahnya                                 ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  3. [Mitsubishi Pajero]                   %d       500.000.000.000    ||\n",suv3);
	printf (" ||     Teknologi gearbox baru yang punya                                ||\n");
	printf (" ||     8 shift membuat tenaga dari SUV ini                              ||\n");
	printf (" ||     menjadi sangat superior                                          ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ==========================================================================\n");
	printf ("\n Tekan 9 untuk kembali, dan tekan 0 untuk keluar.\n\n Silahkan masukkan pilihan anda:\n "); scanf ("%d",&pilihan);
	system ("cls");

	if (pilihan==9){
		daftar();
	} else if (pilihan==0){
		keluar();
	} else {
		printf ("Input Invalid!!!");
		suv();
	}
}

int eksekutif(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                      List Mobil Executive Car                        ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No     Merk Mobil                       Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1. [Toyota Camry]                        %d       450.000.000.000    ||\n",eks1);
	printf (" ||     Kabin yang memiliki kemewahan dan                                ||\n");
	printf (" ||     ukuran yang luas sangat mendukung                                ||\n");
	printf (" ||     kenyamanan & kerileksan penumpang                                ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  2. [Honda Accord]                        %d       510.000.000.000    ||\n",eks2);
	printf (" ||     Tidak hanya menyuguhkan kemewahan,                               ||\n");
	printf (" ||     mobil ini juga dilengkapi dengan                                 ||\n");
	printf (" ||     security yang berteknologi tinggi                                ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  3. [BMW 1 Series]                        %d       500.000.000.000    ||\n",eks3);
	printf (" ||     Terdapat fitur Dynamic Stability                                 ||\n");
	printf (" ||     Control, untuk mengatur over dan                                 ||\n");
	printf (" ||     understeer di tikungan tajam                                     ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ==========================================================================\n");
	printf ("\n Tekan 9 untuk kembali, dan tekan 0 untuk keluar.\n\n Silahkan masukkan pilihan anda:\n "); scanf ("%d",&pilihan);
	system ("cls");
	if (pilihan==9){
		daftar();
	} else if (pilihan==0){
		keluar();
	} else {
		printf ("Input Invalid!!!");
		eksekutif();
	}
}

int kwitansi(){
	if (jumlah==0){
		printf("Anda belum melakukan transaksi!!!");
		main();
	}
	if(langsung==0&&cicil1==0&&cicil2==0&&cicil3==0){
		printf("Anda belum memilih metode pembayaran!!!");
		main();
	}	
	no=1;
	printf ("\n ******************************************************************************\n");
	printf (" =:::::::::::::::::::::::::::|---------------------|::::::::::::::::::::::::::=\n");
	printf (" =---------------------------| KUITANSI PEMBAYARAN |--------------------------=\n");
	printf (" =:::::::::::::::::::::::::::|---------------------|::::::::::::::::::::::::::=\n");
	printf (" ******************************************************************************\n");
	printf (" |                                                                            |\n");
	printf (" |                            TEKKOM AUTO SHOWROOM                            |\n");
	printf (" |                                                                            |\n");
	printf (" |\t No     Jenis Mobil               Unit              Harga             |\n");
	if (bhatch1>0){
		printf(" |\t %d.     Toyota Yaris               %d",no,bhatch1);
		hitung2(bhatch1,&khatch1,hhatch1);
	}
	if (bhatch2>0){
		printf(" |\t %d.      Honda Jazz                %d",no,bhatch2);
		hitung2(bhatch2,&khatch2,hhatch2);
	}
	if (bhatch3>0){
		printf(" |\t %d.     Ford Fiesta                %d",no,bhatch3);
		hitung2(bhatch3,&khatch3,hhatch3);
	}
	if (bfam1>0){
		printf(" |\t %d.    Honda Mobilio               %d",no,bfam1);
		hitung2(bfam1,&kfam1,hfam1);			
	}
	if (bfam2>0){
		printf(" |\t %d. Nissan Grand Livina            %d",no,bfam2);
		hitung2(bfam2,&kfam2,hfam2);
	}
	if (bfam3>0){
		printf(" |\t %d.    Toyota Avanza               %d",no,bfam3);
		hitung2(bfam3,&kfam3,hfam3);
	}
	if (bsedan1>0){
		printf(" |\t %d.     Honda Civic                %d",no,bsedan1);
		hitung2(bsedan1,&ksedan1,hsedan1);
	}
	if (bsedan2>0){
		printf(" |\t %d.     Toyota Vios                %d",no,bsedan2,ksedan2);
		hitung2(bsedan2,&ksedan2,hsedan2);
	}
	if (bsedan3>0){
		printf(" |\t %d.     Honda City                 %d",no,bsedan3);
		hitung2(bsedan3,&ksedan3,hsedan3);
	}
	if (bsuv1>0){;
		printf(" |\t %d.     Honda CR-V                 %d",no,bsuv1);
		hitung2(bsuv1,&ksuv1,hsuv1);
	}
	if (bsuv2>0){
		printf(" |\t %d.   Toyota Fortuner              %d",no,bsuv2);
		hitung2(bsuv2,&ksuv2,hsuv2);
	}
	if (bsuv3>0){
		printf(" |\t %d.  Mitsubishi Pajero             %d",no,bsuv3);
		hitung2(bsuv3,&ksuv3,hsuv3);
	}
	if (beks1>0){
		printf(" |\t %d.     Toyota Camry               %d",no,beks1);
		hitung2(beks1,&keks1,heks1);
	}
	if (beks2>0){
		printf(" |\t %d.     Honda Accord               %d",no,beks2);
		hitung2(beks2,&keks2,heks2);
	}
	if (beks3>0){
		printf(" |\t %d.     BMW 1 Series               %d",no,beks3);
		hitung2(beks3,&keks3,heks3);
	}
	
	printf (" | -------------------------------------------------------------------------- |\n");
	printf (" |\t Jumlah\t\t\t\t\t\t");
	if (jumlah<100000){
		printf ("   %d0000\t      |\n",jumlah);
	} else if (jumlah<1000000){
		printf ("  %d0000\t      |\n",jumlah);
	} else if (jumlah<10000000){
		printf (" %d0000\t      |\n",jumlah);
	} else printf ("%d0000\t      |\n",jumlah);
	
	pajak=jumlah*0.05;
	printf (" |\t Pajak (5 Persen)\t\t\t\t");
	if (pajak<10000){
		printf ("    %d0000\t      |\n",pajak);
	} else printf ("   %d0000\t      |\n",pajak);
	
	if(cicil1!=0||cicil2!=0||cicil3!=0){
		bunga=jumlah*0.1;
		printf (" |\t Bunga\t\t\t\t\t\t");
		if (bunga<10000){
			printf ("    %d0000\t      |\n",bunga);
			} else if (bunga<100000){
			printf ("   %d0000\t      |\n",bunga);
			} else printf ("  %d0000\t      |\n",bunga);
	}
	
	printf (" | -------------------------------------------------------------------------- |\n");
	
	jumlahtambahan=jumlah+pajak+bunga;
	
	printf (" |\t Total Harga\t\t\t\tRp.\t");
	if (jumlahtambahan<100000){
		printf ("   %d0000\t      |\n",jumlahtambahan);
	} else if (jumlahtambahan<1000000){
		printf ("  %d0000\t      |\n",jumlahtambahan);
	} else if (jumlahtambahan<10000000){
		printf (" %d0000\t      |\n",jumlahtambahan);
	} else printf ("%d0000\t      |\n",jumlahtambahan);
	
	if(cicil1!=0||cicil2!=0||cicil3!=0){
		printf (" |\t DP\t\t\t\t\t\t");
		if (DP*100<10000){
			printf ("    %d0000\t      |\n",DP*100);
			} else if (DP*100<100000){
			printf ("   %d0000\t      |\n",DP*100);
			} else printf ("  %d0000\t      |\n",DP*100);
			
		printf (" | -------------------------------------------------------------------------- |\n");
		
		jumlahcicil=jumlahtambahan-DP*100;
		printf (" |\t Harga Cicilan\t\t\t\tRp. \t");
		if (jumlahcicil<100000){
			printf ("   %d0000\t      |\n",jumlahcicil);
			} else if (jumlahcicil<1000000){
			printf ("  %d0000\t      |\n",jumlahcicil);
			} else printf (" %d0000\t      |\n",jumlahcicil);
		printf (" |                                                                            |\n");
		
		if (cicil1==1){
			cicilan=(jumlahcicil/12)*10000;
			printf(" |\t\t\t Cicilan Tiap Bulan: Rp. %d \t\t      |\n",cicilan);
			printf (" |\t\t\t\t\t\t                              |\n");
			printf(" |\t *Anda harus membayar dalam 12 bulan\t\t\t\t      |\n");
		}
		if (cicil2==1){
			cicilan=(jumlahcicil/24)*10000;
			printf(" |\t\t\t Cicilan Tiap Bulan: Rp. %d \t\t      |\n",cicilan);
			printf (" |\t\t\t\t\t\t                              |\n");
			printf(" |\t *Anda harus membayar dalam 24 bulan\t\t\t\t      |\n");
		}
		if (cicil3==1){
			cicilan=(jumlahcicil/36)*10000;
			printf(" |\t\t\t Cicilan Tiap Bulan: Rp. %d \t\t      |\n",cicilan);
			printf (" |\t\t\t\t\t\t                              |\n");
			printf(" |\t *Anda harus membayar dalam 36 bulan\t\t\t\t      |\n");
		}
	}	
	printf (" |                                                                            |\n");
	printf (" ******************************************************************************\n");
	printf (" Silahkan tekan 9 untuk kembali ke menu utama, dan 0 untuk keluar:\n  "); scanf ("%d",&pilihan);
	
	if (pilihan==9){
		system ("cls");
		main();
	} else if (pilihan==0){
		system ("cls");
		keluar();
	} else {
		system ("cls");
		printf ("Input Invalid!!!");
		kwitansi();
	}
}

int hitung2(int x, int *y, int z){
	*y=x*z;
	if (*y<100000){
		printf ("               %d0000\t      |\n",*y);
	} else printf ("              %d0000\t      |\n",*y);
	no++;
}

int bantuan(){
	printf ("\n===============================================================================\n");
	printf ("||                                                                           ||\n");
	printf ("||                              [PENJELASAN]                                 ||\n");
	printf ("||                                                                           ||\n");
	printf ("|| # Aplikasi ini digunakan untuk pembelian mobil.                           ||\n");
	printf ("|| # Profil mobil dan fitur yang diunggulkan terdapat di katalog.            ||\n");
	printf ("|| # Ada 2 tipe pembayaran yang tersedia yaitu Tunai dan Cicilan.            ||\n");
	printf ("|| # Pembelian mobil akan dikenakan pajak on the road 5%% dari harga normal.  ||\n");
	printf ("|| # Untuk pembelian dengan program cicilan akan dikenakan bunga 10%%.        ||\n");
	printf ("|| # Perbedaan tenor cicilan 12, 24, dan 36 bulan tidak mempengaruhi besaran ||\n");
	printf ("||   bunga. Bunga cicilan tetap sama yaitu sebesar 10%%.                      ||\n");
	printf ("|| # DP yang diajukan pada program cicilan minimal harus sebesar 30%% dari    ||\n");
	printf ("||   harga mobil yang akan dibeli.                                           ||\n");
	printf ("|| # Kerugian pelanggan akibat kesalahan penggunaan aplikasi pembelian mobil ||\n");
	printf ("||   berada diluar tanggung jawab pihak TEKKOM AUTO SHOWROOM.                ||\n");
	printf ("||                                                                           ||\n");
	printf ("||---------------------------------------------------------------------------||\n");
	printf ("||                                                                           ||\n");
	printf ("||                                [ABOUT]                                    ||\n");
	printf ("||                                                                           ||\n");
	printf ("|| Program ini adalah simulasi aplikasi pembelian mobil. Program ini dibuat  ||\n");
	printf ("|| oleh Albertus Ageng dan David Raditya sebagai tugas akhir mata kuliah     ||\n");
	printf ("|| Pengantar Teknik Komputer B. Tema yang kami pilih adalah toko, sehingga   ||\n");
	printf ("|| kami membuat aplikasi toko mobil atau yang biasa disebut 'SHOWROOM'       ||\n");
	printf ("||                                                                           ||\n");
	printf ("||                                                                           ||\n");
	printf ("||                                                        Depok, 4 Mei 2016  ||\n");
	printf ("||                                                                           ||\n");
	printf ("||---------------------------------------------------------------------------||\n");
	printf ("||                                                                           ||\n");
	printf ("||                             [CONCTACT US]                                 ||\n");
	printf ("||                                                                           ||\n");
	printf ("|| # Albertus Ageng Pratama                                                  ||\n");
	printf ("||   HP     : 085775274899                                                   ||\n");
	printf ("||   e-mail : albertprinceton1@gmail.com                                     ||\n");
	printf ("||                                                                           ||\n");
	printf ("|| # David Raditya Karissaputra                                              ||\n");
	printf ("||   HP     : 081315011683                                                   ||\n");
	printf ("||   e-mail : davidraditya.nvidia_corp@yahoo.com                             ||\n");
	printf ("||                                                                           ||\n");
	printf ("===============================================================================\n");
	printf ("Silahkan tekan angka 9 untuk kembali ke menu utama, dan 0 untuk keluar.\n"); scanf ("%d",&pilihan);
	
	if (pilihan==9){
		system ("cls");
		main();
	} else if (pilihan==0){
		system ("cls");
		keluar();
	} else if (tipe<1||tipe>5){
		printf ("Input Invalid!!!");
		bantuan();
	}
}

int keluar(){
	printf ("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf ("::                                                                      ::\n");
	printf ("::                  Terima Kasih Telah Bertransaksi                     ::\n");
	printf ("::                                                                      ::\n");
	printf ("::                         Have a safe drive!                           ::\n");
	printf ("::                                                                      ::\n");
	printf ("::   -_-_-_-_-_-_-_-_-_-_-TEKKOM AUTO SHOWROOM-_-_-_-_-_-_-_-_-_-_-_-   ::\n");
	printf ("::                                                                      ::\n");
	printf ("::                            since 2016                                ::\n");
	printf ("::                                                                      ::\n");
	printf ("::                       ____________________________________           ::\n");
	printf ("::                      // .............   .........   ...  //          ::\n");
	printf ("::                     // :::::::::::::: | ::::::::: | :::: \\\\          ::\n");
	printf ("::                    // ::::::::::::::: | ::::::::: | ::::: \\\\         ::\n");
	printf ("::         ============ PP          ==  /        == /          D        ::\n");
	printf ("::        O)EEEEEEEEEEE                |           /         //         ::\n");
	printf ("::        |                            |          /         \\\\          ::\n");
	printf ("::        ||        _____              |         | _____     \\\\         ::\n");
	printf ("::        |||      /     \\ EEEEEEEEEEEEEEEEEEEEEEE/     \\    ||         ::\n");
	printf ("::       //=======|   O   |======================|   O   |====\\\\        ::\n");
	printf ("::                 \\_____/                        \\_____/               ::\n");
	printf ("::                                                                      ::\n");
	printf ("::                                                                      ::\n");
	printf ("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");	
	return 0;
}
