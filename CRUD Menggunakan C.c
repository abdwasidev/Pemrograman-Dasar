#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

void menu();
void tambah_mhs();
void tampil_mhs();
void edit_mhs();
void hapus_mhs();
void close();
void header();

struct DATA {
	char nama[30];
	int nim,id;
	char asal_kota[30];
	float ipk;
	
}tambah,cek,hapus;

int main()
{
	system("cls");
		printf("CRUD Data Mahasiswa");
	menu();
	return 0;
}
void menu(){
	int pilih;
	menu:
		system("cls");
		printf("MAIN MENU ::");
		printf("\n[1]. Create Mahasiswa");
		printf("\n[2]. Read Data Mahasiswa");
		printf("\n[3]. Update Data Mahasiswa");
		printf("\n[4]. Delete Data Mahasiswa");
		printf("\n[5]. Keluar");
		printf("\n\nInput Pilihan Nomor Menu : ");
		scanf("%d", &pilih);
		switch(pilih){
			case 1:tambah_mhs();
				break;
			case 2:tampil_mhs();
				break;
			case 3:edit_mhs();
				break;
			case 4:hapus_mhs();
			case 5:close();
				break;
			default:printf("\nMohon Maaf Pilihan Anda Salah !");
				getche();
				goto menu;
		}
}
void tambah_mhs(){
	FILE *ptr,*ptr1;
	int count=0;
	
	ptr =fopen("mahasiswa.txt","a");
		system("cls");
		ptr1 =fopen("mahasiswa.txt","r");
		while (fscanf (ptr1,"%d;%[^;];%[^;];%d;%f;\n",&tambah.id,tambah.nama,tambah.asal_kota,&tambah.nim,&tambah.ipk)!=EOF)
		{
			tambah.id++;	
		}
		cek.id = tambah.id;
		fclose(ptr1);
		printf ("Masukan nama mahasiswa : ");fflush(stdin);
		scanf ("%[^\n]",tambah.nama);
		printf ("Masukan asal kota mahasiswa : ");fflush(stdin);
		scanf ("%[^\n]",tambah.asal_kota);
		printf ("Masukan nim mahasiswa : ");fflush(stdin);
		scanf ("%d",&tambah.nim); 
		printf("Nilai IPK\t: ");
		scanf("%f",&tambah.ipk);
		fprintf(ptr,"%d;%s;%s;%d;%f;\n",tambah.id,tambah.nama,tambah.asal_kota,tambah.nim,tambah.ipk);
		fclose(ptr);
	
		printf("\n\nData Mahasiswa Sudah Disimpan !");
		add_invalid:
		printf("\n\n\tEnter 1 untuk menu utama dan 0 untuk keluar : ");
		switch(getch()){
    		case '1': menu();
        		break;
        	case '0': close();
        		break;
        	default:printf("\nMaaf Kesalahan Input !");
        		getche();
        		goto add_invalid;
 		}
}

void close(){
}
void tampil_mhs()
{
	FILE *view;
	view = fopen("mahasiswa.txt","r");
	int test=0;
	system ("cls");
	printf ("ID\t\tNAMA\t\tAsal Kota\t\tNIM\t\tIPK\n");
	while (fscanf (view,"%d;%[^;];%[^;];%d;%f;\n",&tambah.id,tambah.nama,tambah.asal_kota,&tambah.nim,&tambah.ipk)!=EOF)
	{
		printf("%d\t\t%s\t%s\t\t%d\t\t%.2f\n",tambah.id,tambah.nama,tambah.asal_kota,tambah.nim,tambah.ipk);
		test++;
	}
	printf ("\nJumlah Data Mahasiswa : %d",test);
	fclose(view);
	
	if(test==0)
	{
		system("cls");
		printf ("\nData Kosong ! \n");
	}
	list_invalid:
    printf("\n\nEnter 1 untuk menu utama dan 0 untuk keluar : ");
    switch(getch()){
    	case '1': menu();
        	break;
        case '0': close();
        	break;
        default:printf("\nMaaf Kesalahan Input !");
        	getche();
        	goto list_invalid;
 	}
}

void hapus_mhs()
{
	FILE *lama, *baru;
	int test=0;
	lama = fopen("mahasiswa.txt","r");
	baru = fopen("baru.txt","w");
	system("cls");
	printf("Input No. ID Mahasiswa yang akan di hapus : ");
	scanf("%d", &hapus.id);
	while(fscanf (lama,"%d;%[^;];%[^;];%d;%f;\n",&tambah.id,tambah.nama,tambah.asal_kota,&tambah.nim,&tambah.ipk)!=EOF)
	{
		if(tambah.id != hapus.id)
		{
			fprintf(baru,"%d;%s;%s;%d;%f;\n",tambah.id,tambah.nama,tambah.asal_kota,tambah.nim,tambah.ipk);	
		}
		else{
			test++;
			printf("\nData Mahasiswa No ID : %d dengan Nama : %s\n",tambah.id,tambah.nama);
			printf("\nBerhasil dihapus dari Daftar !");
		}
	}
	fclose(lama);
	fclose(baru);
	remove("mahasiswa.txt");
	rename("baru.txt","mahasiswa.txt");
		if(test==0){
            printf("\nData tidak ditemukan !\a\a\a");
            erase_invalid:
            printf("\nInput 0 untuk mencoba lagi, 1 untuk ke menu utama and 2 untuk keluar :");
			switch(getch()){
            	case '0': hapus_mhs();
            		break;
            	case '1': menu();
            		break;
            	case '2': close();
            		break;
            	default:printf("\nMaaf Kesalahan Input !");
            		getche();
            		goto erase_invalid;
			}
    }
    else{
    	erase_valid:
		printf("\nInput 1 untuk ke menu utama and 0 untuk keluar :");
        switch(getch()){
       		case '1': menu();
       			break;
       		case '0': close();
       			break;
       		default:printf("\nMaaf Kesalahan Input !");
        		getche();
        		goto erase_valid;
        }
    }
	
}
void edit_mhs()
{
	int pilih,test=0;
	FILE *lama,*baru;
	lama = fopen("mahasiswa.txt","r");
	baru = fopen ("baru.txt","w");
	system("cls");
	
	printf ("Masukan ID Mahasiswa : ");
	scanf ("%d",&cek.id);
	while(fscanf (lama,"%d;%[^;];%[^;];%d;%f;\n",&tambah.id,tambah.nama,tambah.asal_kota,&tambah.nim,&tambah.ipk)!=EOF)
	{
		if(tambah.id == cek.id)
		{
			test=1;
			ganti:
				printf("\nNo. ID : %d dimiliki Mahasiswa dengan Nama : %s",tambah.id,tambah.nama);
				printf("\n\nData yang akan diganti : ");
				printf("\n[1]. Nama");
				printf("\n[2]. Asal Kota");
				printf("\n[3]. NIM");
				printf("\nInput Pilihan : ");
				scanf("%d",&pilih);
				
				if(pilih == 1)
				{
					printf ("\nMasukan Data Nama Baru : ");fflush(stdin);
					scanf ("%[^\n]",cek.nama);
					strcpy(tambah.nama,cek.nama);
						fprintf(baru,"%d;%s;%s;%d;%f;\n",tambah.id,tambah.nama,tambah.asal_kota,tambah.nim,tambah.ipk);
					printf ("\nPerubahan Sudah Disimpan !");
				}
				else if (pilih == 2)
				{
					printf("\nMasukan Data Asal Kota : ");fflush(stdin);
					scanf ("%[^\n]",cek.asal_kota);
					strcpy(tambah.asal_kota,cek.asal_kota);
						fprintf(baru,"%d;%s;%s;%d;%f;\n",tambah.id,tambah.nama,tambah.asal_kota,tambah.nim,tambah.ipk);
					printf ("\nPerubahan Sudah Disimpan !");
				}
				else if (pilih == 3)
				{
					printf ("\nMasukan Data NIM Baru : ");
					scanf ("%d",&cek.nim);
					tambah.nim = cek.nim;
					fprintf(baru,"%d;%s;%s;%d;%f;\n",tambah.id,tambah.nama,tambah.asal_kota,tambah.nim,tambah.ipk);
					printf ("\nPerubahan Sudah Disimpan !");
				}
				else{
					printf("\n\nInput Anda Salah !");
					getche();
					goto ganti;
				}
		}
		else
		{
			fprintf(baru,"%d;%s;%s;%d;%f;\n",tambah.id,tambah.nama,tambah.asal_kota,tambah.nim,tambah.ipk);
		}
	}

	fclose(lama);
	fclose(baru);
	remove("mahasiswa.txt");
	rename("baru.txt","mahasiswa.txt");
	if(test!=1){   
		system("cls");
        printf("\nData tidak ditemukan !\a\a\a");
        edit_invalid:
        printf("\nInput 0 untuk mencoba lagi, 1 untuk ke menu utama dan 2 untuk keluar :");
        switch(getch()){
            case '0': edit_mhs();
            	break;
            case '1': menu();
            	break;
            case '2': close();
            	break;
            default:printf("\nMaaf Kesalahan Input !");
            	getche();
            	goto edit_invalid;
        }
    }
    else{
    	edit_valid:
		printf("\n\n\nInput 1 untuk ke menu utama dan 0 untuk keluar :");
        switch(getch()){
        	case '1': menu();
        		break;
        	case '0': close();
        		break;
        	default:printf("\nMaaf Kesalahan Input !");
        		getche();
        		goto edit_valid;
        }
    }
}
