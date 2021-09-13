#include <stdio.h>
#include <math.h>


typedef struct{ //membuat tipe bungkusan saran menu
	int tanggalPesan, tanggalAntar,noMenu,harga,pengurangan,kuadrat,akar;
	
}saranMenu;

int main(int argc, char const *argv[]){
	//ini merupakan keempat menu
	printf("BERIKUT ADALAH EMPAT MENU CATHERING : \n");
	printf("1. Kentang + Katsu + Omelette + Salad \n");
	printf("2. Nasi + Rendang + Sayur Daun Ubi + Sambal Cabai Hijau \n");
	printf("3. Nasi Goreng + Ati Ampela + Telor Ceplok + Kerupuk\n");
	printf("4. Nasi + Ayam Crispy + Soup + Pudding\n\n");

	saranMenu p1,p2,p3; // membuat bungkusan di dalam main


	/// user memasukkan usulan menu
	scanf("%d", &p1.tanggalAntar);
	scanf("%d %d %d", &p1.tanggalPesan,&p1.noMenu,&p1.harga);
	scanf("%d %d %d", &p2.tanggalPesan,&p2.noMenu,&p2.harga);
	scanf("%d %d %d", &p3.tanggalPesan,&p3.noMenu,&p3.harga);
	//membuat operasi unutk selisih waktu pesan dan waktu akar
	p1.pengurangan = p1.tanggalPesan - p1.tanggalAntar;
	p1.kuadrat = p1.pengurangan * p1.pengurangan;
	p1.akar = sqrt(p1.kuadrat);

	p2.pengurangan = p2.tanggalPesan - p1.tanggalAntar;
	p2.kuadrat = p2.pengurangan * p2.pengurangan;
	p2.akar = sqrt(p2.kuadrat);

	p3.pengurangan = p3.tanggalPesan - p1.tanggalAntar;
	p3.kuadrat = p3.pengurangan * p3.pengurangan;
	p3.akar = sqrt(p3.kuadrat);

	

	//membuat deklarasi dari keluaran yang nantinya akan dieliminasi sesuai dengan ketentuan
				printf("> KANDIDAT MENU : \n\n");
				if(p1.akar > 7){//sebagai syarat batas tanggal yang harus dipenuhi
				switch(p1.noMenu){
					case (1): 
						printf("1.Kentang + Katsu + Omelette + Salad \n");
						printf("Tanggal Pemesanan : %d \n", p1.tanggalPesan );
						printf("Usulan Harga : %d\n\n", p1.harga );
						break;

					case (2): 
						printf("2.Nasi + Rendang + Sayur Daun Ubi + Sambal Cabai Hijau \n");
						printf("Tanggal Pemesanan : %d \n", p1.tanggalPesan );
						printf("Usulan Harga : %d\n\n", p1.harga );
						break;

					case (3):
						printf("3.Nasi Goreng + Ati Ampela + Telor Ceplok + Kerupuk\n");
						printf("Tanggal Pemesanan : %d \n", p1.tanggalPesan );
						printf("Usulan Harga : %d\n\n", p1.harga );
						break;

					case (4):
						printf("4.Nasi + Ayam Crispy + Soup + Pudding\n");
						printf("Tanggal Pemesanan : %d \n", p1.tanggalPesan );
						printf("Usulan Harga : %d\n\n", p1.harga );
						break;

					default:
						printf("\n\n");
						break;
					}
					
				}
				if(p2.akar > 7){//sebagai syarat batas tanggal yang harus dipenuhi
				switch(p2.noMenu){
					case (1): 
						printf("1.Kentang + Katsu + Omelette + Salad \n");
						printf("Tanggal Pemesanan : %d \n", p2.tanggalPesan );
						printf("Usulan Harga : %d\n\n", p2.harga );
					
						break;

					case (2): 
						printf("2.Nasi + Rendang + Sayur Daun Ubi + Sambal Cabai Hijau \n");
						printf("Tanggal Pemesanan : %d \n", p2.tanggalPesan );
						printf("Usulan Harga : %d\n\n", p2.harga );
						break;

					case (3):
						printf("3.Nasi Goreng + Ati Ampela + Telor Ceplok + Kerupuk\n");
						printf("Tanggal Pemesanan : %d \n", p2.tanggalPesan );
						printf("Usulan Harga : %d\n\n", p2.harga );
						break;

					case (4):
						printf("4.Nasi + Ayam Crispy + Soup + Pudding\n");
						printf("Tanggal Pemesanan : %d \n", p2.tanggalPesan );
						printf("Usulan Harga : %d\n\n", p2.harga );
						break;

					default:
						printf("\n\n");
						break;
					}
		
				}
				
				if(p3.akar > 7){//sebagai syarat batas tanggal yang harus dipenuhi
				switch(p3.noMenu){
					case (1): 
							printf("1.Kentang + Katsu + Omelette + Salad \n");
							printf("Tanggal Pemesanan : %d \n", p3.tanggalPesan );
							printf("Usulan Harga : %d\n\n", p3.harga );
					
						break;

					case (2): 
						printf("2.Nasi + Rendang + Sayur Daun Ubi + Sambal Cabai Hijau \n");
						printf("Tanggal Pemesanan : %d \n", p3.tanggalPesan );
						printf("Usulan Harga : %d\n\n", p3.harga );
					
						break;

					case (3):
						printf("3.Nasi Goreng + Ati Ampela + Telor Ceplok + Kerupuk\n");
						printf("Tanggal Pemesanan : %d \n", p3.tanggalPesan );
						printf("Usulan Harga : %d\n\n", p3.harga );
					
						break;
					case (4):
						printf("4.Nasi + Ayam Crispy + Soup + Pudding\n");
						printf("Tanggal Pemesanan : %d \n", p3.tanggalPesan );
						printf("Usulan Harga : %d\n\n", p3.harga );
					
						break;
					default:
						printf("\n\n");
						break;
					}
				}
				
	//membuat prasyarat untuk usulan yang akan ditampilkan
	if(p1.harga >=0 || p2.harga >= 0 || p3.harga >= 0){
		if( ((p1.harga > p2.harga)&&(p1.harga > p3.harga) || ( ((p1.harga == p2.harga)&&(p1.harga == p3.harga)) && 
			((p1.tanggalPesan < p2.tanggalPesan)&&(p1.tanggalPesan < p3.tanggalPesan)) ) )&& (p1.akar > 7) ){

		switch(p1.noMenu){
			case 1: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Kentang + Katsu + Omelette + Salad\n");
				printf("Harga : %d\n", p1.harga );
				break;

			case 2: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi + Rendang + Sayur Daun Ubi + Sambal Cabai Hijau\n");
				printf("Harga : %d\n", p1.harga );	
				break;

			case 3:
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi Goreng + Ati Ampela + Telor Ceplok + Kerupuk\n");
				printf("Harga : %d\n", p1.harga );	
				break;

			case 4: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi + Ayam Crispy + Soup + Pudding\n");
				printf("Harga : %d\n", p1.harga );	
				break;

			default:
				printf("\n");
				break;
		}

	}else if( ((p2.harga > p3.harga)&&(p2.harga > p1.harga) || ( ((p1.harga == p2.harga)&&(p2.harga == p3.harga)) && 
			  ((p2.tanggalPesan < p1.tanggalPesan)&&(p2.tanggalPesan < p3.tanggalPesan)) )) && (p2.akar > 7) ){

		switch(p2.noMenu){
			case 1: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Kentang + Katsu + Omelette + Salad\n");
				printf("Harga : %d\n", p2.harga );
				break;

			case 2: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi + Rendang + Sayur Daun Ubi + Sambal Cabai Hijau\n");
				printf("Harga : %d\n", p2.harga );	
				break;

			case 3:
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi Goreng + Ati Ampela + Telor Ceplok + Kerupuk\n");
				printf("Harga : %d\n", p2.harga );	
				break;

			case 4: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi + Ayam Crispy + Soup + Pudding\n");
				printf("Harga : %d\n", p2.harga );	
				break;

			default:
				printf("\n");
				break;
		}
	}else if( ((p3.harga > p2.harga)&&(p3.harga > p1.harga) || ( ((p3.harga == p2.harga)&&(p1.harga == p3.harga)) && 
			  ((p3.tanggalPesan < p1.tanggalPesan)&&(p3.tanggalPesan < p2.tanggalPesan))) ) && (p3.akar > 7) ){

		switch(p3.noMenu){
			case 1: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Kentang + Katsu + Omelette + Salad\n");
				printf("Harga : %d\n", p3.harga );
				break;

			case 2: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi + Rendang + Sayur Daun Ubi + Sambal Cabai Hijau\n");
				printf("Harga : %d\n", p3.harga );	
				break;

			case 3:
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi Goreng + Ati Ampela + Telor Ceplok + Kerupuk\n");
				printf("Harga : %d\n", p3.harga );	
				break;

			case 4: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi + Ayam Crispy + Soup + Pudding\n");
				printf("Harga : %d\n", p3.harga );	
				break;

			default:
				printf("\n");
				break;
		}
	}else{
		printf("TIDAK ADA MENU TERPILIH\n");
	}
	}
/*
	if((p1.harga > p2.harga)&&(p1.harga > p3.harga) || ( ((p1.harga == p2.harga)&&(p1.harga == p3.harga)) && 
		((p1.tanggalPesan < p2.tanggalPesan)&&(p1.tanggalPesan < p3.tanggalPesan)) ) ){

		switch(p1.noMenu){
			case 1: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Kentang + Katsu + Omelette + Salad\n");
				printf("Harga : %d\n", p1.harga );
				break;

			case 2: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi + Rendang + Sayur Daun Ubi + Sambal Cabai Hijau\n");
				printf("Harga : %d\n", p1.harga );	
				break;

			case 3:
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi Goreng + Ati Ampela + Telor Ceplok + Kerupuk\n");
				printf("Harga : %d\n", p1.harga );	
				break;

			case 4: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi + Ayam Crispy + Soup + Pudding\n");
				printf("Harga : %d\n", p1.harga );	
				break;

			default:
				printf("> TIDAK ADA MENU CATERING YANG TERPILIH\n");
				break;
		}

	}else if((p2.harga > p3.harga)&&(p2.harga > p1.harga) || ( ((p1.harga == p2.harga)&&(p2.harga == p3.harga)) && 
		((p2.tanggalPesan < p1.tanggalPesan)&&(p2.tanggalPesan < p3.tanggalPesan)) ) ){

		switch(p2.noMenu){
			case 1: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Kentang + Katsu + Omelette + Salad\n");
				printf("Harga : %d\n", p2.harga );
				break;

			case 2: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi + Rendang + Sayur Daun Ubi + Sambal Cabai Hijau\n");
				printf("Harga : %d\n", p2.harga );	
				break;

			case 3:
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi Goreng + Ati Ampela + Telor Ceplok + Kerupuk\n");
				printf("Harga : %d\n", p2.harga );	
				break;

			case 4: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi + Ayam Crispy + Soup + Pudding\n");
				printf("Harga : %d\n", p2.harga );	
				break;

			default:
				printf("> TIDAK ADA MENU CATERING YANG TERPILIH\n");
				break;
		}
	}else if((p3.harga > p2.harga)&&(p3.harga > p1.harga) || ( ((p3.harga == p2.harga)&&(p1.harga == p3.harga)) && 
		((p3.tanggalPesan < p1.tanggalPesan)&&(p3.tanggalPesan < p2.tanggalPesan)) ) ){

		switch(p3.noMenu){
			case 1: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Kentang + Katsu + Omelette + Salad\n");
				printf("Harga : %d\n", p3.harga );
				break;

			case 2: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi + Rendang + Sayur Daun Ubi + Sambal Cabai Hijau\n");
				printf("Harga : %d\n", p3.harga );	
				break;

			case 3:
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi Goreng + Ati Ampela + Telor Ceplok + Kerupuk\n");
				printf("Harga : %d\n", p3.harga );	
				break;

			case 4: 
				printf("> MENU CATERING TERPILIH\n");
				printf("Nasi + Ayam Crispy + Soup + Pudding\n");
				printf("Harga : %d\n", p3.harga );	
				break;

			default:
				printf("> TIDAK ADA MENU CATERING YANG TERPILIH\n");
				break;
		}
	}*/
 	return 0;
  
}