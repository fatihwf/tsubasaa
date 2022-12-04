#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<Windows.h>
#include<unistd.h>
void main_menu(){
	
		
		
		printf("\nANA EKRAN");
		printf("\nb:back , numbers for playing");
		printf("\n\n1. Oyuna basla\n2. Takim listesi\n") ;
		
}
 main(void) {
	int baslangic = 1 ;
	int dec ;
	char teams ;
	
	int  id[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21} ;
	char *name[]= {" ","Misugi","Tsubasa","Hyuga","Misaki","Wakabayashi","Matsuyama","Souda","Nitta","Ishizaki","Schneider","Schuster","Kaltz","Muller","Hernandez","Dias","Pascal","Galvan","NO1","NO2","NO5","NO9"} ;
	
	
	
	char *supersut[] = {"Sky Rocket Volley","NeoDrive Shot","NeoTiger Shot"," "," ","Eagle Shot","Kamisori Shot","Hayabusa Shot"," ","Fire Shot"," "," "," "," ","Drive Shot"," "," " };
	char *supercalim[] = {"Elegant Dribble","Heel Lift"," ","Misaki in his element"," "," "," "," ","Kaiser Feint","Left Foot Feint","Hedgehog Dribble"," "," ","Genius Feint"," "," "} ;
	char *supersave[] = {" "," "," "," ","SGGK"," "," "," "," "," "," "," ","Dutter Wall","Golden Right Hand"," "," "," "} ;
	char *superpass[] = {" ","Drive Pass"," ","Golden Combi"," "," ","Razor Pass"," "," "," ","Schu Pass"," "," "," "," ","Pass Cal"," "} ;
	char *supertackle[] = {" "," ","Tiger Tackle"," "," ","Eagle Tackle","Kamisori Tackle"," "," ","Emperor's Tackle"," ","Hedgehog Tackle"," "," "," "," ","Ayiogluayi Tackle"} ;
	char *superblock[] = {"Overhead Block"," "," "," "," ",""} ;
	
	
	char *japan[] = {" ", "Misugi","Tsubasa","Hyuga","Misaki","Wakabayashi","Matsuyama","Souda","Nitta","Ishizaki"} ;
	char *japansut[] = {" ","Sky Rocket Volley","NeoDrive Shot","NeoTiger Shot"," "," ","Eagle Shot","Kamisori Shot","Hayabusa Shot"," "} ;
	char *japanpas[] = {" ","Drive Pass"," ","Golden Combi"," "," ","Razor Pass"," "," "} ;
	char *japancalim[] ={" ","Elegant Dribble","Heel Lift"," ","Misaki in his element"," "," "," "," "} ;
	char *japansave[] ={" "," "," "," ","SGGK"," "," "," "," "} ;
	char *japantackle[] ={" "," ","Tiger Tackle"," "," ","Eagle Tackle","Kamisori Tackle"," "," "} ;
	char *japanblock[] ={" ","Overhead Block"," "," "," "," ","Hokkaido Block"," "," ","Gammen Blockk"} ;
	
	
	int  almanyaid[] = {0,1,2,3,4} ;
	char *almanya[] = {" ","Schneider","Schuster","Kaltz","Muller"} ;
	char *almanyasut[] = {" ","Fire Shot"," "," "," "} ;
	char *almanyapas[] = {" "," ","Schu Pass"," "," "} ;
	char *almanyacalim[] = {" ","Kaiser Feint","Left Foot Feint","Hedgehod Dribble"," "} ;
	char *almanyasave[] = {" "," "," "," ","Dutter Wall"} ;
	char *almanyatackle[] = {" ","Emperor's Tackle"," ","Hedgehod Tackle"," "} ;
	char *almanyablock[] = {" "," "," "," "," "} ;
	
	
	int  italyaid[] = {0,1,2,3,4} ;
	char *italya[] = {" ","Hernandez","NO9","NO5","NO2"} ; 
	
	
	int  arjantinid[] = {0,1,2,3,4} ;
	char *arjantin[] = {" ","NO1","Dias","Pascal","Galvan"} ;
	
	
	
	
	int x;
	char back ;
	char enter;
	int enterr;
	int playerteamselection , computerteamselection ;
	char oyuncu[20] , computer[20] ;
	int	randnum ;
	int player;
	char *pteamname[4], pteamsut[4] , pteampas[4] , pteamtackle[4] , pteamsave[4] , pteamblock[4] , pteamcalim[4]  ;
	int pteam[4] ;
	int pteamgk[20] , pteammid[20] , pteamfw[20] ;
	int cteamgk[20] ,cteammid[20] ,cteamfw[20] ;  
	
	int cteam[4];
	char *cteamname[4] ;
	pteam[0] = " " ,pteamsut[0]=" " , pteampas[0]=" " , pteamtackle[0]=" " , pteamsave[0]=" " , pteamblock[0]=" " , pteamcalim[0]=" "   ;
	cteam[0] = " " ;
	cteamname[0] =" " ;
	srand(time(0)) ;
	

	printf("\n\ncaptain tsubasa gaming! ");
	mainmenu:
	system("cls") ;
	main_menu() ;
	scanf("%d",&dec) ;
	
	if (dec == 1) {
		system("cls") ;
		teamselect:
			
		system("cls") ;
		printf("oyuncu takimi:\n\n1. Japonya\n2. Almanya\n3. Italya\n4. Arjantin\n5. Rastgele\n") ;
		
		scanf("%d",&playerteamselection) ;
	
		
		switch(playerteamselection) {
			case 1:
				strcpy(oyuncu,"japan") ;
				pteam[1] = 5 ;
				pteamname[1] = name[pteam[1]] ;
				 
				pteam[2] = 2 ;
				pteamname[2] = name[pteam[2]] ;
				
				pteam[3] = 3 ;
				pteamname[3] = name[pteam[3]] ;
				break;
			case 2:
				strcpy(oyuncu,"almanya") ;
				pteam[1] = 13 ;
				pteamname[1] = name[pteam[1]] ;
				 
				pteam[2] = 12 ;
				pteamname[2] = name[pteam[2]] ;
				
				pteam[3] = 10 ;
				pteamname[3] = name[pteam[3]] ;
				break;
			case 3:
				strcpy(oyuncu , "italya") ;
				pteam[1] = 14 ;
				pteamname[1] = name[pteam[1]] ;
				 
				pteam[2] = 19 ;
				pteamname[2] = name[pteam[2]] ;
				
				pteam[3] = 20 ;
				pteamname[3] = name[pteam[3]] ;
				break;
			case 4:
				strcpy(oyuncu ,"arjantin") ;
				pteam[1] = 18 ;
				pteamname[1] = name[pteam[1]] ;
				 
				pteam[2] = 17 ;
				pteamname[2] = name[pteam[2]] ;
				
				pteam[3] = 15 ;
				pteamname[3] = name[pteam[3]] ;
				break;

			case 5:
				randnum = rand() % 4 ;
				
				switch(randnum) {
					case 0:
						strcpy(oyuncu,"japan") ;
						pteam[1] = 5 ;
						pteamname[1] = name[pteam[1]] ;
						 
						pteam[2] = 2 ;
						pteamname[2] = name[pteam[2]] ;
						
						pteam[3] = 3 ;
						pteamname[3] = name[pteam[3]] ;
						break;
					case 1:
						strcpy(oyuncu,"almanya") ;
					
						pteam[1] = 13 ;
						pteamname[1] = name[pteam[1]] ;
						 
						pteam[2] = 12 ;
						pteamname[2] = name[pteam[2]] ;
						
						pteam[3] = 10 ;
						pteamname[3] = name[pteam[3]] ;
						break;
					case 2:
						strcpy(oyuncu,"italya") ;
						pteam[1] = 14 ;
						pteamname[1] = name[pteam[1]] ;
						 
						pteam[2] = 19 ;
						pteamname[2] = name[pteam[2]] ;
						
						pteam[3] = 20 ;
						pteamname[3] = name[pteam[3]] ;
						break;
					case 3:
						strcpy(oyuncu,"arjantin") ;
						pteam[1] = 18 ;
						pteamname[1] = name[pteam[1]] ;
						 
						pteam[2] = 17 ;
						pteamname[2] = name[pteam[2]] ;
						
						pteam[3] = 15 ;
						pteamname[3] = name[pteam[3]] ;
					
						break;}
				break; 
			
						
			
			default:
				printf("invalid selection!") ;
				printf("going back in 2 seconds..") ;
				fflush(stdout);
				sleep(2) ;
				goto teamselect ;	
			
				
			
		}
		
		printf("\noyuncu takimi: %s",oyuncu);
		computerteamselect:
		
		printf("\n\nBilgisayar takimini secin:\n\n1. Japonya\n2. Almanya\n3. Italya\n4. Arjantin\n5. Rastgele\n") ;
		
		scanf("%d",&computerteamselection) ;
	
		
		switch(computerteamselection) {
			case 1:
				strcpy(computer,"japan") ;
				cteam[1] = 5 ;
				cteamname[1] = name[cteam[1]] ;
				 
				cteam[2] = 2 ;
				cteamname[2] = name[cteam[2]] ;
				
				cteam[3] = 3 ;
				cteamname[3] = name[cteam[3]] ;
				break;
			case 2:
				strcpy(computer,"almanya") ;
				cteam[1] = 13 ;
				cteamname[1] = name[cteam[1]] ;
			 
				cteam[2] = 12 ;
				cteamname[2] = name[cteam[2]] ;
						
				cteam[3] = 10 ;
				cteamname[3] = name[cteam[3]] ;
				break;
			case 3:
				strcpy(computer , "italya") ;
				cteam[1] = 14 ;
				cteamname[1] = name[cteam[1]] ;
						 
				cteam[2] = 19 ;
				cteamname[2] = name[cteam[2]] ;
						
				cteam[3] = 20 ;
				cteamname[3] = name[cteam[3]] ;
				break;
			case 4:
				strcpy(computer ,"arjantin") ;
				
				cteam[1] = 18 ;
				cteamname[1] = name[cteam[1]] ;
						 
				cteam[2] = 17 ;
				cteamname[2] = name[cteam[2]] ;
						
				cteam[3] = 15 ;
				cteamname[3] = name[cteam[3]] ;
				break;

			case 5:
				randnum = rand() % 4 ;
				
				switch(randnum) {
					case 0:
						strcpy(computer,"japan") ;
						cteam[1] = 5 ;
						cteamname[1] = name[cteam[1]] ;
						 
						cteam[2] = 2 ;
						cteamname[2] = name[cteam[2]] ;
						
						cteam[3] = 3 ;
						cteamname[3] = name[cteam[3]] ;
						break;
					case 1:
						strcpy(computer,"almanya") ;
						cteam[1] = 13 ;
						cteamname[1] = name[cteam[1]] ;
					 
						cteam[2] = 12 ;
						cteamname[2] = name[cteam[2]] ;
								
						cteam[3] = 10 ;
						cteamname[3] = name[cteam[3]] ;
						break;
					case 2:
						strcpy(computer,"italya") ;
						cteam[1] = 14 ;
						cteamname[1] = name[cteam[1]] ;
								 
						cteam[2] = 19 ;
						cteamname[2] = name[cteam[2]] ;
								
						cteam[3] = 20 ;
						cteamname[3] = name[cteam[3]] ;
						break;
					case 3:
						strcpy(computer,"arjantin") ;
						cteam[1] = 18 ;
						cteamname[1] = name[cteam[1]] ;
						 
						cteam[2] = 17 ;
						cteamname[2] = name[cteam[2]] ;
								
						cteam[3] = 15 ;
						cteamname[3] = name[cteam[3]] ;
						break;}
				break; 
			
						
			
			default:
				printf("invalid selection!") ;
				printf("going back in 2 seconds..") ;
				fflush(stdout);
				sleep(2) ;
				goto computerteamselect ;	
			
				
			
		}
		printf("\nbilgisayar takimi: %s",computer) ;
		printf("\n\ndevam etmek icin entera basin.") ;
		
		scanf("%c",&enter) ;
		scanf("%c",&enter) ;
		system("cls") ;
		
		 
		
		
	
	
		
	printf("%s  (oyuncu)",oyuncu) ;
	printf("\n\n Players:\nGK: %s\nMF: %s\nFW: %s",pteamname[1],pteamname[2],pteamname[3]); 
	printf("\n\n************************") ;
	
	printf("\n\n%s  (computer)",computer) ;
	printf("\n\n Players:\nGK: %s\nMF: %s\nFW: %s",cteamname[1],cteamname[2],cteamname[3]); 
	
	printf("\n\nmaca baslamak icin 1 , kadrolari ayarlamak icin 2 , ana ekrana donmek icin b basiniz.\n") ;
	scanf("%d",&dec) ;
	switch(dec) {
		case 1:
			//goto maca basla
			break; 
			
		case 2:
			system("cls") ;
			if (strcmp(oyuncu,"japan" )== 0) {
			
				printf("3 oyuncu secin:\n\n1. %s\n2. %s\n3. %s\n4. %s\n5. %s\n6. %s\n7. %s\n8. %s\n9. %s\n",japan[1],japan[2],japan[3],japan[4],japan[5],japan[6],japan[7],japan[8],japan[9]) ;
				for(x = 1 ; x<4 ; x++) {
					printf("\n%d.player ",x) ;
					scanf("%d",&player);
					pteam[x] = id[player] ;
					pteamname[x] = name[player] ;
					
					
				}}
			
			else if (strcmp(oyuncu,"almanya")== 0) {
				printf("3 oyuncu secin:\n\n1. %s\n2. %s\n3. %s\n4. %s\n",almanya[1],almanya[2],almanya[3],almanya[4]) ;
				for(x = 1 ; x<4 ; x++) {
					printf("\n%d.player ",x) ;
					scanf("%d",&player);
					pteam[x] = id[player+9] ;
					pteamname[x] = name[player+9] ;
			}}
		
			else if (strcmp(oyuncu,"italya" )== 0) {
				printf("3 oyuncu secin:\n\n1. %s\n2. %s\n3. %s\n4. %s\n",italya[1],italya[2],italya[3],italya[4]) ;
				for(x = 1 ; x<4 ; x++) {
					printf("\n%d.player ",x) ;
					scanf("%d",&player);
					pteam[x] = id[player+13] ;
					pteamname[x] = name[player+13] ;
			}
			}
			
			else if (strcmp(oyuncu,"arjantin" )== 0) {
				printf("3 oyuncu secin:\n\n1. %s\n2. %s\n3. %s\n4. %s\n",arjantin[1],arjantin[2],arjantin[3],arjantin[4]) ;
				for(x = 1 ; x<4 ; x++) {
					printf("\n%d.player ",x) ;
					scanf("%d",&player);
					pteam[x] = id[player+17] ;
					pteamname[x] = name[pteam[x]] ;
			}	
			}
			
	
			printf("\n\n1.player: %s\n2.player: %s\n3.player: %s",pteamname[1],pteamname[2],pteamname[3]) ;
			
			printf("\n\nbilgisayar takimini ayarlamak icin 1, baslama menusune gitmek icin 2 basin");
			scanf("%d",&dec);
			switch(dec) {
				case 1: 
					system("cls") ;
					if (strcmp(computer,"japan" )== 0) {
			
						printf("3 tane bilgisayar oyuncusu secin:\n\n1. %s\n2. %s\n3. %s\n4. %s\n5. %s\n6. %s\n7. %s\n8. %s\n9. %s\n",japan[1],japan[2],japan[3],japan[4],japan[5],japan[6],japan[7],japan[8],japan[9]) ;
						for(x = 1 ; x<4 ; x++) {
							printf("\n%d.player ",x) ;
							scanf("%d",&player);
							cteam[x] = id[player] ;
							cteamname[x] = name[player] ;
					
						
					}}
				
					else if (strcmp(computer,"almanya")== 0) {
						printf("3 tane bilgisayar oyuncu secin:\n\n1. %s\n2. %s\n3. %s\n4. %s\n",almanya[1],almanya[2],almanya[3],almanya[4]) ;
						for(x = 1 ; x<4 ; x++) {
							printf("\n%d.player ",x) ;
							scanf("%d",&player);
							cteam[x] = id[player+9] ;
							cteamname[x] = name[player+9] ;
					}}
				
					else if (strcmp(computer,"italya" )== 0) {
						printf("3 tane bilgisayar oyuncu secin:\n\n1. %s\n2. %s\n3. %s\n4. %s\n",italya[1],italya[2],italya[3],italya[4]) ;
						for(x = 1 ; x<4 ; x++) {
							printf("\n%d.player ",x) ;
							scanf("%d",&player);
							cteam[x] = id[player+13] ;
							cteamname[x] = name[player+13] ;
					}
					}
					
					else if (strcmp(computer,"arjantin" )== 0) {
						printf("3 tane bilgisayar oyuncu secin:\n\n1. %s\n2. %s\n3. %s\n4. %s\n",arjantin[1],arjantin[2],arjantin[3],arjantin[4]) ;
						for(x = 1 ; x<4 ; x++) {
							printf("\n%d.player ",x) ;
							scanf("%d",&player);
							cteam[x] = id[player+17] ;
							cteamname[x] = name[player+17] ;
					}	
					}
				
				printf("\n\n1.player: %s\n2.player: %s\n3.player: %s",cteamname[1],cteamname[2],cteamname[3]) ;
				break;	
				
				case 2:
					// mac baslama ekran�.
					break;	
					}
		
	

	
	printf("\n\ndevam etmek icin entera basin.") ;
	scanf("%c",&enter) ;
	scanf("%c",&enter) ;
	system("cls") ;


	int pgk ;
	int pmid; 
	int pfw ;
	kalecisec:
	printf("Kaleciyi secin: \n1. %s\n2. %s\n3. %s\n",pteamname[1],pteamname[2],pteamname[3]) ;
	scanf("%d",&player) ;
	switch(player) {
		case 1:
			pgk = pteam[1] ;
			printf("\nKaleci: %s",name[pgk]) ;
			printf("\n\nOrta sahayi secin: \n2. %s\n3. %s\n",pteamname[2],pteamname[3]) ;
			scanf("%d",&player) ;
			switch(player) {
				case 2:
					pmid = pteam[2] ;
					pfw = pteam[3] ;
					printf("\nOrta saha: %s",name[pmid] ) ;
					printf("\nForvet: %s",name[pfw]) ;
					break ;
				case 3:
					pmid = pteam[3] ;
					pfw = pteam[2] ;
					printf("\nOrta saha: %s",name[pmid]) ;
					printf("\nForvet: %s",name[pfw]) ;
					break ;
					
			
					}
			
			break;
			
		case 2:
			pgk = pteam[2] ;
			
			printf("\n\nKaleci: %s",name[pgk]) ;
			printf("\nOrta sahayi secin: \n1. %s\n3. %s\n",pteamname[1],pteamname[3]) ;
			scanf("%d",&player) ;
			switch(player) {
				case 1:
					pmid = pteam[1] ;
					pfw = pteam[3] ;
					printf("\nOrta saha: %s",name[pmid] ) ;
					printf("\nForvet: %s",name[pfw]) ;
					break ;
				case 3:
					pmid = pteam[3] ;
					pfw = pteam[1] ;
					printf("\nOrta saha: %s",name[pmid]) ;
					printf("\nForvet: %s",name[pfw]) ;
					break ;
					
			
					}
			
			break;
		
		case 3:
			pgk = pteam[3] ;
			
			printf("\n\nKaleci: %s",name[pgk]) ;
			printf("\nOrta sahayi secin: \n1. %s\n2. %s\n",pteamname[1],pteamname[2]) ;
			scanf("%d",&player) ;
			switch(player) {
				case 1:
					pmid = pteam[1] ;
					pfw = pteam[2] ;
					printf("\nOrta saha: %s",name[pmid] ) ;
					printf("\nForvet: %s",name[pfw]) ;
					break ;
				case 2:
					pmid = pteam[2] ;
					pfw = pteam[1] ;
					printf("\nOrta saha: %s",name[pmid]) ;
					printf("\n\nForvet: %s",name[pfw]) ;
					break ;
					
			
					}
			
			break;
		default:
			printf("adam gibi sec yaw") ;
			goto kalecisec ;
					
	}
	} }
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	if (dec == 2) {							// tak�m listesi
			system("cls") ;
			teamlist:
			system("cls") ;
			
			printf("\n\nTakim Listesi:  ");
			printf("\n\n1. Japonya\n2. Almanya\n3. Italya\n4. Arjantin\n") ;
			
			scanf(" %c",&teams) ;
			
			
			switch(teams) {
				
				case '1':
					printf("\nPlayers:\n ") ;
					for(x=1 ; x < (sizeof japan / sizeof japan[0]) ; x++ ) {
						
						printf("\n%d.%s",x,japan[x]) ;	
						
					}
					printf("\n");
					scanf(" %c",&dec) ;
					if(dec == 'b')
						goto teamlist;
					break;
			
				
				case '2':
					printf("\nPlayers:\n ") ;
					for(x=1 ; x < (sizeof almanya / sizeof almanya[0]) ; x++ ) {
						
						printf("\n%d.%s",x,almanya[x]) ;
					}
					printf("\n");
					scanf(" %c",&dec) ;
					if(dec == 'b')
						goto teamlist;
					
					break;
			
				case '3':
					printf("\nPlayers:\n ") ;
					for(x=1 ; x < (sizeof italya / sizeof italya[0]) ; x++ ) {
						
						printf("\n%d.%s",x,italya[x]) ;
					}
					printf("\n");
					scanf(" %c",&dec) ;
					if(dec == 'b')
						goto teamlist;
					
					break;
					
				case '4':
					printf("\nPlayers:\n ") ;
					for(x=1 ; x < (sizeof arjantin / sizeof arjantin[0]) ; x++ ) {
						
						printf("\n%d.%s",x,arjantin[x]) ;
					}
					printf("\n");
					scanf(" %c",&dec) ;
					if(dec == 'b')
						goto teamlist;
					
					break;
					
					
					
					
				case 'b':
					goto mainmenu;
					break;
					
				default:
					printf("invalid selection!\n\n\n") ;
					printf("going back in 2 seconds..") ;
					fflush(stdout);
					sleep(2) ;
					goto teamlist ;

					break;
					
					}
					
					
}}

