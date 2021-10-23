#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//this is the code for chapter 1
void chapter1(){// story for chapter 1
			printf("The year is 930A.D.. The townspeople in the land of Torim are in panic as the death of King William de Bruschelli IV\n"); 
			printf("is announced. He was poisoned. There have been no leads to the murderer. This raised a lot of questions in all of the\n");
			printf("land. Who could've done it? Is this a sign of an impending war? Could this be a sign that dark times are about to come.\n");
			system("pause");
			system("cls");
			printf("In a humble corner of town along the streets of Bokeard lies a small weapon shop owned by renowned blacksmith\n");
			printf("Favian Leofrick. Alongside him is his apprentice, Hadrian and his little brother, Ulric. As the townspeople brace\n");
			printf("themselves of what's to come, Favian decides that it's time to introduce Hadrian and Ulric to the powers of magic\n");
			printf("which he has kept from them for so long. Favian tells his young apprentices: only those with a will and a mind strong\n");
			printf("enough can wield the power of magic. Not everyone is strong enough. He does this in the hopes that one day,\n");
			printf("a powerful knight will come to their humble weapon shop looking for the ultimate weapon to defeat Torim's enemies.\n");
			printf("The townspeople of Torim believe that the need for one such knight will come sooner than later\n");
			system("pause");
			system("cls");
			printf("A few miles away from town lies the bright and serene Wichcas forest. Here, in a small cabin by the lake of Houph\n");
			printf("rests the sorceress Amelia and her adopted daughter, Arabella. 13 years prior to the death of the King,\n");
			printf("Amelia found a baby in a basket floating in the lake of Houph. She took the child as her own. Amelia's mastery of magic\n");
			printf("is unparalleled in the land of Torim. Too powerful that the townspeople have grown to fear her.During these times,\n");
			printf("the use of magic is deplored. People like Amelia are deemed witches and are burned at the stake. This is why\n");
			printf("Amelia chose a solitary life in the forest. Here, her powers grew stronger, not through the influence of darkness,\n");
			printf("but rather light. She has learned to harness the powers of nature as nature itself found her heart kind and intentions \n");
			printf("pure. She has become one with nature and serves as its protector. She wants to keep the serenity and joy of the forest.\n");
			printf("However, Amelia is now 81 years old and is nearing her life's dusk. She feels that darkness is coming to Torim soon\n");
			printf("and fears that there will be no one to take her role. She now teaches Arabella the ways of sorcery in the hopes that she\n");
			printf("will be the one to take her place before hers and the entire land of Torim's time runs out.\n");
			system("pause");
			system("cls");
			printf("Favian puts his apprentices under rigorous tests to see if they are ready. Hadrian proves to have a will and a mind \n");
			printf("strong enough. Ulric, however, does not. Favian now chooses Hadrian to learn the art of magical blacksmithy.\n");
			printf("It will not be easy but his trust in his young apprentice is impregnable. Arabella is now learning how to commune\n");
			printf("and be one with nature, just as her adoptive mother. Slowly, things are unraveling before her eyes. Amelia is pleased\n");
			printf("as she watches the pure joy in her daughter's face and love in her daughter's heart.\n");
			system("pause");
			system("cls");
}
int getswordmat(){//this is to get the material for the weapon
	int nMat;
	printf("Hadrian, the time has come for you to forge your weapon. Choose a base material\n");
	printf("[1] Iron\n");
	printf("[2] Gold\n");
	printf("[3] Platinum\n");
	printf("[4] Wood\n");
	printf("Input the number of the material of choice: ");
	scanf("%d", &nMat);
	while(nMat > 4){
		printf("The materials we have are limited choose only from the selection: ");
		scanf ("%d", &nMat);
	}while(nMat > 4)	
	switch(nMat){
		case 1:
			printf("You have chosen to forge Iron\n\n");
			break;
		case 2:
			printf("You have chosen to forge Gold\n\n");
			break;
		case 3:
			printf("You have chosen to forge Platinum\n\n");
			break;
		case 4:
			printf("You have chosen to forge Wood\n\n");
}
return nMat;
}
int getswordelm(){// used to get the element of the sword
	int nElm;
	printf("The sword will be imbued with your chosen Elemental Spirits. Call on to then now\n");
	printf("[1] I call the Earth Spirits!\n");
	printf("[2] I call the Fire Sprirts!\n");
	printf("[3] I call the Wind Spirits!\n");
	printf("[4] I call the Water Spirits\n");
	printf("Input the number of your Choice: ");
	scanf("%d", &nElm);
	while(nElm >4){
		printf("There are only four Elemental Spirits Please choose from only them: ");
		scanf("%d", &nElm);
	}
	switch(nElm){
		case 1:
			printf("You called on to the Earth Spirits\n\n");
			break;
		case 2:
			printf("You called on to the Fire Spirits\n\n");
			break;
		case 3:
			printf("You called on to the Wind Spirits\n\n");
			break;
		case 4:
			printf("You called on to the Water Spirits\n\n");
}
return nElm;
}
int getnumstrk(int nMat){// used to get the number of strikes for the weapon material
	int nNumstrk;
	printf("I will not give you everything my son you will have to figure out the riddles to get the perfect weapon\n");
	switch(nMat){
		case 1:
			printf("Perfection is met in neon. Strike with obedience as the Patriarch Moses did for the Lord. \n");
			printf("Input the number of strikes you will use: ");
			scanf("%d", &nNumstrk);
			while(nNumstrk >15){
			printf("\nThe number of strikes is too great it will break the material, think about your decisions. Try again \n");
			scanf("%d", &nNumstrk);
		}
			break;
		case 2:
			printf("Today may be your luck day however this day is considered to be unlucky. \n");
			printf("Input the number of strikes you will use: ");
			scanf("%d", &nNumstrk);
			while(nNumstrk >20){
			printf("\nThe number of strikes is too great it will break the material, think about your decisions. Try again \n");
			scanf("%d", &nNumstrk);
		}
			break;
		case 3:
			printf("Strength in numbers. As generations from now on the day of the strike, a nation will come together in the pearl of the orient to overthrow darkness! \n");
			printf("Input the number of strikes you will use: ");
			scanf("%d", &nNumstrk);
			while(nNumstrk >30){
			printf("\nThe number of strikes is too great it will break the material, think about your decisions. Try again \n");
			scanf("%d", &nNumstrk);
		}
			break;
		case 4:
			printf("Weak is the bark, somtimes a roll of the dice is all you need. \n");
			printf("Input the number of strikes you will use: ");
			scanf("%d", &nNumstrk);
			while(nNumstrk > 10){
			printf("\nThe number of strikes is too great it will break the material, think about your decisions. Try again \n");
			scanf("%d", &nNumstrk);
	}
}
	return nNumstrk;
}
int gettemp(){// used to get the temperature of used to forge the sword
	int nTemp;
	printf("Like how Apollo brings the heat of the sun everyday you must breath fire to this weapon\n");
	printf("use your instinct and choose from one to four hundred\n");
	printf("What is the temperature that you are going to forge this weapon with? \n");
	scanf("%d", &nTemp);
	while(nTemp < 0|| nTemp> 400){
	printf("Choose only from one to four hundred: ");
	scanf("%d", &nTemp);
}
	return nTemp;
}
float getphy(int nMat, int nNumstrk, int nTemp){// used to get the physical power of the sword
	float fPhy;
	switch(nMat){
	case 1:
		fPhy = 150 - sqrt(pow((250 - nTemp),2) + pow((10 - nNumstrk),2));
		break;
	case 2:
		fPhy = 150 - sqrt(pow((300 - nTemp), 2) + pow((13 - nNumstrk),2));
		break;
	case 3:
		fPhy = 150 - sqrt(pow((400- nTemp),2) + pow((25 - nNumstrk),2));
	case 4:
		fPhy = 150 - sqrt(pow((50 - nTemp),2) + pow((6 - nNumstrk), 2));
}
	if(fPhy < 0)
	fPhy = 0;
return fPhy;
}
void element(int nElm){// used to printf the elemnt of the weapon
	switch(nElm){
	case 1:
		printf("\nElement: Earth");
		break;
	case 2:
		printf("\nElement: Fire");
		break;
	case 3:
		printf("\nElement: Wind");
		break;
	case 4:
		printf("\nElement: Water");
	}
}
void getultwep(int nMat, int nElm){// gets the weapons name
	switch(nMat){
		case 1:
		switch(nElm){
			case 1:
				printf("The ultimate weapon: The Iron Sword of Earth\n");
				break;
			case 2:
				printf("The ultimate weapon: The Iron Sword of Fire\n");
				break;
			case 3:
				printf("The ultimate weapon: The Iron Sword of Wind\n");
				break;
			case 4:
				printf("The ultimate weapon: The Iron Sword of Water\n");
		}
			break;
		case 2:
			switch(nElm){
				case 1:
					printf("The ultimate weapon: The Gold Sword of Earth\n");
					break;
				case 2:
					printf("The ultimate weapon: The Gold Sword of Fire\n");
					break;
				case 3:
					printf("The ultimate weapon: The Gold Sword of Wind\n");
					break;
				case 4:
					printf("The ultimate weapon: The Gold Sword of Water\n");
			}
		break;
		case 3:
			switch(nElm){
				case 1:
					printf("The ultimate weapon: The Platinum Sword of Earth\n");
					break;
				case 2:
					printf("The ultimate weapon: The Platinum Sword of Fire\n");
					break;
				case 3:
					printf("The ultimate weapon: The Platinum Sword of Wind\n");
					break;
				case 4:
					printf("The ultimate weapon: The Platinum Sword of Water\n");
			}
		break;
		case 4:
			switch(nElm){
				case 1:
					printf("The ultimate weapon: The Wood Sword of Earth\n");
					break;
				case 2:
					printf("The ultimate weapon: The Wood Sword of Fire\n");
					break;
				case 3:
					printf("The ultimate weapon: The Wood Sword of Wind\n");
					break;
				case 4:
					printf("The ultimate weapon: The Wood Sword of Water\n");
			}
					
	}
}
float getmp(int nElm, float fPhy){// gets the Magical power of the Sword
	float fMp;
	switch(nElm){
		case 1:
			fMp = (fPhy+70.0)/2.0;
			break;
		case 2:
			fMp = (fPhy+66.0)/2.0;
			break;
		case 3:
			fMp = (fPhy+50.0)/2.0;
			break;
		case 4:
			fMp = (fPhy+70.0)/2.0;
	}
	return fMp;
}
int getwiht(int nMat, int nNumstrk){// this function gets the weight of the weapon
	int nWieght;
	switch(nMat){
		case 1:
			nWieght = abs(nNumstrk-10)+100;
			break;
		case 2:
			nWieght = abs(nNumstrk-13)+300;
			break;
		case 3:
			nWieght = abs(nNumstrk-25)+200;
			break;
		case 4:
			nWieght = abs(nNumstrk-6)+50;
	}
	return nWieght;
}
int getclass(int nWieght){// this function gets the speed and the class of the fighter
	int speed;
	if(nWieght< 100){
		printf("\nThe wielder of this weapon must be a lightweight\n");
		speed = 100;
	}
	else if(nWieght >= 100 && nWieght <= 200){
		printf("\nThe wielder of this weapon must be a heavyweight\n");
		speed = 75;
	}
	else if(nWieght > 200){
		printf("\nThe wielder of this weapon must be a super heavyweight\n");
		speed = 50;
	}
	return speed;
}
//end of code for chapter 1
//start of chapter 2
void chapter2(){// story for chapter 2
		printf("The sage of dark arts, Tassilo, has now revealed himself as the killer of the fallen King William de Bruschelli IV.\n");
		printf("Taking his father’s place is his young 12 year-old son, William de Bruschelli V. This proves to be a difficult\n");
		printf("undertaking for the boy as Tassilo uses his dark magic to cast the Black Death, a plague that wipes oun");
		printf("two-thirds of the population in the land of Torim. With the people in panic, Tassilo takes this opportunity\n");
		printf("to claim the throne from the young king. King William, weak but not to be outdone, defends his castle\n");
		printf("with his royal guards but is ultimately defeated by the sage. He manages to escape death and takes refuge\n");
		printf("in the city, with his loving, loyal subjects. Now, Tassilo reigns over Torim and darkness engulfs the land.\n");
		system("pause");
		system("cls");
		printf("As chaos erupts, five brave souls aim to claim the throne. The only way to do so is to kill Tassilo.\n");
		printf("However, because they are driven by their own conflicting motivations, they selfishly want to claim it for themselves.\n");
		printf("Not one of them would let another take their place. The struggle for power has now begun\n");
		system("pause");
		system("cls");
}
void ending(int n){// the possible ending end scenarios after the battle
	switch(n){
		case 1:
		printf("The Heroes have defeated Tassilo peace has returned to the Kingdom and has prospered throughout many years\n");
		printf("Ulric becomes a Blacksmith well known throughout the Kingdom\n");
		printf("King William rules over the Kingdom making it one of the greatest Kingdoms to ever live\n");
		printf("Finally we have our hero Hadrian who lives in a peacefull life with his wife Arabella\n");
		printf("both are now parents to 3 children all of which have the power to use magic time will tell\n");
		printf("if they ever need to use these powers.");
		break;
		case 2:
		printf("Tassilo has deemed this race of people are not deserving of this world\n");
		printf("after deafeating the heroes and  destroying the Kingdom. Tassilo wipes out the entire human population\n");
		printf("After a few mellenia new life comes out the ashes of the old Kingdom. Tassilo lies in wait to see how\n");
		printf("this iteration of humans will benefit the world or contribute to his destruction\n");
		break;
		case 3:
		printf("Tassilo has benn defeated but at the cost of the heroes lives peace has come to the Kingdom\n");
		printf("and a new king has taken the throne. With Tassilo out of the picture the Kingdom has prospred\n");
		printf("and today they celebrate the festival of the fallen heroes that has saved them\n");
		printf("from the destruction of the Kingdom\n");
		break;
		case 4:
		printf("After beating all in his path the hero was able to convince his competitors that they should band together\n");
		printf("to beat Tassilo. The band of heroes now arrive at the throne room where Tassilo is seated. After a grueling fight\n");
		printf("The team was able to weaken Tassilo now its time for the final battle to save the Kingdom and the world\n");
		printf("With everybody exhausted the hero takes up his weapon and faces Tassilo for the final confrontation\n");
		break;
		case 5:
		printf("The hero was not able to beat all his competitors and so he has failed to get the chance to confromt Tassilo\n");
		printf("THe winner of the struggle chose to face Tassilo alone. Tassilo easily beat the solo hero and plunged the Kingdom\n");
		printf("into darkness.The Entire human race was wiped out of existence and the world was forever changed.\n");
	}
	system("pause");
	system("cls");
}
void playablechar(){// this show the playable characters
	printf("[1] Hardian\n ");
	printf("[2] King William de Bruschelli V\n ");
	printf("[3] Ulric\n ");
}
int playercharacter(){// this function gets the players characters
	int nPlyr;
	printf("Choose a Character:\n ");
	playablechar();
	printf("Input the number of the selected character: ");
	scanf("%d", &nPlyr);
	if(nPlyr<0||nPlyr>3){
		printf("\nInvalid input. Please select only from the pool of characters");
		scanf("%d", &nPlyr);
	}
	system("cls");
	return nPlyr;
}
float getAP(int nPlyr, float fPhy){// this function gets the characters attack power
	float fAp;
	switch(nPlyr){
		case 1:
			fAp = fPhy;
			break;
		case 2:
			fAp = 10;
			break;
		case 3:
			fAp = 120;
			break;
		case 4:
			fAp = 10;
	}
	return fAp;
}
float getMa(int nPlyr, float fMp){// this fuction gets the characters magic power
	float fMa;
	switch(nPlyr){
		case 1:
			fMa = fMp;
			break;
		case 2: 
			fMa = 0;
			break;
		case 3:
			fMa = 0;
			break;
		case 4:
			fMa = 100;
	}
	return fMa;
}
float getdef(int nPlyr){// this fucntion gets the characters defense
	int nDef;
	switch(nPlyr){
		case 1:
			nDef = 60;
			break;
		case 2:
			nDef = 60;
			break;
		case 3:
			nDef = 10;
			break;
		case 4:
			nDef = 50;
	}
	return nDef;
}
float getspeed(int nPlyr, int nSpeed){// gets the characterss speed stat
	int nPspeed;
	switch(nPlyr){
		case 1:
			nPspeed = nSpeed;
			break;
		case 2:
			nPspeed = 10;
			break;
		case 3:
			nPspeed = 100;
			break;
		case 4:
			nPspeed = 50;
	}
	return nPspeed;
}
float gethp(int nPlyr){// get the characters initial health stat
	int nHp;
	switch(nPlyr){
		case 1:
			nHp = 500.0;
			break;
		case 2:
			nHp = 300.0;
			break;
		case 3:
			nHp = 400.0;
			break;
		case 4:
			nHp = 800.0;
			
	}
	return nHp;
}
float getmpd(int nPlyr){// get the characters magical defense
	int nMpd;
	switch(nPlyr){
		case 1:
			nMpd = 10;
			break;
		case 2:
			nMpd = 60;
			break;
		case 3:
			nMpd = 10;
			break;
		case 4:
			nMpd = 50;
	}
	return nMpd;
}
void slctmove(int nPlyr){//show the move sets of the characters
	switch(nPlyr){
	case 1:
		printf("[1] Slash\n");
		printf("[2] Pendant of Gwendolyn\n");
		printf("[3] Defend\n");
		printf("[4] The Chosen One\n");
		break;
	case 2:
		printf("[1] Iron Maiden\n");
		printf("[2] Witch's Nightmare\n");
		printf("[3] Noble Heart\n");
		printf("[4] His Loyal Subjects\n");
		break;
	case 3:
		printf("[1] Cross Slash\n");
		printf("[2] Evade\n");
		printf("[3] Cripple\n");
		printf("[4] Envy\n");
}
printf("Input move: ");
}
int getenemy(int nPlyr){// generates which enemy the player will battle
	int n;
	time_t t;
	srand(time(0)); 
	do{
	n = rand() % 3+1;
}while(n == nPlyr);
return n;
}
int getmove(){// will generate the enemy's moves
	int n;
	time_t t;
	srand(time(0));
	n = rand()% 4+1;
	return n;
}
int getevade(){// this will get the evade status
int n, evade=0;
time_t t;
srand(time(0)); 
n = rand() % 100;
if(n<20)
evade = 1;
else
evade =0;
return evade;
}
int getpog(){// this will get the pendant of gwendolyn status
	int n, active;
	time_t t;
	srand(time(0)); 
	n = rand() % 100;
	if(n < 30)
	active =0;
	else
	active = 1;
	return active;
}
void displaystats(int nPlyr, float fPhp, float fPlyrAp, float fPmp, float fPdef, float fPmad, float fPspeed){// diplays the characters stats during battle
	if(nPlyr == 1)
	printf("\nHadrian Hp: %.2f\n", fPhp);
	else if(nPlyr == 2)
	printf("\nKing William Hp: %.2f\n", fPhp);
	else if(nPlyr == 3)
	printf("\nUlric Hp: %.2f\n", fPhp);
	else 
	printf("\nTassilo Hp: %.2f\n", fPhp);
	printf("Physical Power: %.2f\n", fPlyrAp);
	printf("Magic Power: %.2f\n", fPmp);
	printf("Defense: %.2f\n", fPdef);
	printf("Magical Defense: %.2f\n", fPmad);
	printf("Physical Power: %.2f\n\n", fPspeed);
}
float battle(float fPhp, float fPlyrAp, float fPspeed, float fPmad, int nPlyr, float fPhy, float fSpeed, int n, float fPdef, float fPmp, float fMp){// for the battles in chapter 2
	float fAihp = gethp(n);// this gets the enemy's hp
	float fAiap = getAP(n, fPhy);// this gets the enemy's attack power
	float fAispeed = getspeed(n, fSpeed);// this gets the enemy's speed
	float fAimad = getmpd(n);// this gets teh enemy's magic defense
	float fAidef = getdef(n);// this gets the enemy's ai defense
	float fAimp = getMa(n, fMp);//this gets the enemy's magic power
	float slash=0,chosone=0, cripple=0, cross=0, envy=0;//these are the variables for the different attack moves of the player
	float eslash=0, echosone=0, ecripple=0, ecross=0, eenvy=0;// these are the variables for the different attack moves of the enemy
	int nHmove=0, nKmove=0, nUmove=0, m1=0, m2=0, m3=0;// these represent the player or the enemy's moves
	int nMblockstatus=0, nUsectr=0, nTurnctr=1,nImusectr=0, nEvadestatus=0, nUltictr=0;// this are the different counters for the player
	int nEultctr=0, nEusectr=0, nEturnctr=0, nEimusectr=0, nEevadestatus=0, nEmblockstatus=0;// these are the different counters for the enemy
	int nMatchturn=1;//shows which turn it is in the match
	do{
	printf("Turn: %d", nMatchturn);
	displaystats(nPlyr, fPhp, fPlyrAp, fPmp, fPdef, fPmad, fPspeed);
	displaystats(n, fAihp, fAiap, fAimp, fAidef, fAimad, fAispeed);
		slctmove(nPlyr);
		//this gets the players move depending on who that player chooses to play as
		switch(nPlyr){
		case 1:// this is to get Hadrians move
			scanf("%d", &nHmove);
			while(nHmove <= 0 ||nHmove > 4){
				printf("Invalid Input. Try Again\n");
				scanf("%d", &nHmove);
			}
			break;
		case 2://this is to get King William's move
			scanf("%d", &nKmove);
			while((nKmove <= 0 ||nKmove > 4)||((nKmove == 1&&nImusectr ==1)||(nKmove ==2 &&nUsectr ==1)||((nTurnctr < 5 || nUltictr != 0)&& nKmove == 4))){
				printf("Invalid Input. Try Again\n");
				scanf("%d", &nKmove);
			}
			break;
		case 3://this is to get Ulric's move
			scanf("%d", &nUmove);
			while(nUmove <= 0 ||nUmove > 4){
				printf("Invalid Input. Try Again");
				scanf("%d", &nUmove);
		}
	}
			// this gets the ai's moves depending on which character the ai is
			if(n == 1)
			m1 = getmove();
			else if(n == 2){
			m2 = getmove();
			while((m2==1 && nEimusectr==1)||(m2==2 && nEusectr == 1)||((nEturnctr < 5 || nEultctr !=0)&& m2 == 4))
				m2 = getmove();}
			else if (n == 3)
			m3 = getmove();
			//this is to see the priority of the moves
		if(nKmove == 1&&(m1==1||m3==1||m3==3||m3==4)){
			printf("King William uses Iron Maiden\n");
			nTurnctr++;
			nUsectr = 0;
			nImusectr = 1;
			if(m1 == 1){
				printf("Hadrian uses Slash. The attack was blocked by the King\n");
				printf("Hadrian Recieves 20 damage\n");
				fAihp -= 20;}
			else if(m3 == 1){
				printf("Ulric uses Cross Slash. The attack was blocked by the King\n");
				printf("Ulric Recieves 20 damage\n");
				fAihp -= 20;}
			else if(m3 == 3){
				printf("Ulric uses Cripple. The attack was blocked by the King\n");
				printf("Ulric Recieves 20 damage\n");
				fAihp -= 20;}
			else if(m3 == 4){
				printf("Ulric uses Envy. The attack was blocked by the King\n");
				printf("Ulric Recieves 20 damage\n");
				fAihp -= 20;}
		}
		else if(nKmove == 2&&m1 == 4){
		printf("King William uses Witch's Nightmare\n");
		nTurnctr++;
		nImusectr = 0;
		nUsectr = 1;
		if(m1 == 4){
			printf("Hadrian uses The Chosen One ability. The Attack was defleccted by the King\n");}
			}
		else if(m2==1&&(nHmove==1||nUmove==1||nUmove==3||nUmove==4)){
			printf("King William uses Iron Maiden\n");
			nEturnctr++;
			nEusectr = 0;
			nEimusectr = 1;
			if(nHmove == 1){
				printf("Hadrian uses Slash. The attack was blocked by the King\n");
				printf("Hadrian Recieves 20 damage\n");
				fPhp -= 20;}
			else if(nUmove == 1){
				printf("Ulric uses Cross Slash. The attack was blocked by the King\n");
				printf("Ulric Recieves 20 damage\n");
				fPhp -= 20;}
			else if(nUmove == 3){
				printf("Ulric uses Cripple. The attack was blocked by the King\n");
				printf("Ulric Recieves 20 damage\n");
				fPhp -= 20;}
			else if(nUmove == 4){
				printf("Ulric uses Envy. The attack was blocked by the King\n");
				printf("Ulric Recieves 20 damage\n");
				fPhp -= 20;}
		}
		else if(m2 == 2&&nHmove==4){
			printf("King William uses Witch's Nightmare\n");
		nEturnctr++;
		nEimusectr = 0;
		nEusectr = 1;
		if(m1 == 4){
			printf("Hadrian uses The Chosen One ability. The Attack was deflected by the King\n");}
			}
	else if(fPspeed >= fAispeed){
	switch(nHmove){// Hadrian's moves
			case 1:
				slash = fPlyrAp - fAidef;
				if(nEevadestatus == 0){
					if(slash >= 0){
						fAihp = fAihp - slash;
						printf("Hadrian uses Slash\n");
						printf("does %.2f damage\n", slash);}	
			 		else{
						fAihp -= 0;
						printf("Hadrian uses Slash\n");
						printf("does 0 damage\n"); }
			}
			else if(nEevadestatus == 1){
				fAihp -= 0;
				printf("The attack has been dodged\n");
				nEevadestatus = 0;
			}
				break;
			case 2:
				nMblockstatus = getpog();
				if(nMblockstatus == 0)
				printf("The Pendant failed to activate\n");
				else{
				printf("You have successfully used the Pendant\n");}
				nEevadestatus = 0;
				break;
			case 3:
				fPdef += 20;
				printf("Hadrian uses Defend\n");
				printf("Hadrian's Defense is now %.2f\n", fPdef);
				nEevadestatus = 0;
				break;
			case 4:
				chosone = fPmp - fAimad;
				if(nEevadestatus == 1){
					fAihp -= 0;
					nEevadestatus = 0;
					printf("The Attack Has been dodged\n");
				}
				else{
				if(chosone <= 0){
				fAihp -= 0;
				printf("Hadrian uses the Chosen One Ability\n");
				printf("does 0 damage\n");
			}
				else {
				fAihp -= chosone;
				printf("Hadrian uses the Chosen One Ability\n");
				printf("does %.2f damage\n", chosone);  
			}
		}
	}
	switch(nKmove){// King William's moves
				case 1:
					printf("King William uses Iron Maiden\n");
					nTurnctr++;
					nImusectr =1;
					nUsectr =0;
					nEevadestatus = 0;
					nEmblockstatus =0;
					break;
				case 2:
					printf("King William uses Witch's Nightmare\n");
					nTurnctr++;
					nImusectr=0;
					nUsectr=1;
					nEevadestatus = 0;
					nEmblockstatus =0;
					break;
				case 3:
					fPdef += 5;
					fPmad += 5;
					printf("King William used Noble Heart\n");
					printf("King Willam's Physical Defense is now %.2f and Magial Defense is %.2f\n", fPdef, fPmad);
					nTurnctr++;
					nUsectr = 0;
					nEevadestatus = 0;
					nImusectr = 0;
					nEmblockstatus =0;
					break;
				case 4:
					if(nEevadestatus == 0){
					fAihp = 0;
					printf("King William uses His Loyal Subjects\n");}
						else{
							fAihp -= 0;
							printf("The attack has been dodged\n");
							nUltictr++;
							nEevadestatus = 0;
							nImusectr = 0;
							nUsectr = 0;}
			}
	switch(nUmove){// Ulric's moves
				case 1: 
					cross = (fPlyrAp - fAidef);
					if(cross > 0){
					fAihp -= cross;
					printf("Ulric uses Cross Slash\n");
					printf("does %.2f damage\n", fPlyrAp - fAidef);}
					else{
					fAihp -= 0;
					printf("Ulric uses Cross Slash\n");
					printf("does 0 Damage\n");}
					break;
				case 2:
					nEvadestatus =  getevade();	
					if(nEvadestatus == 0) 
					printf("Ulric fails to use Evade\n");
					else{
					printf("Ulric successfully used eveade\n");}
					break;
				case 3:
					cripple -= (fPlyrAp-(fPlyrAp*(2.0/10.0)))-fAidef;
					if(cripple > 0){
					fAihp -= cripple;
					fAispeed -= fAispeed*(2.0/10.0);
					fAidef -= fAidef*(2.0/10.0);
					printf("Ulric uses Cripple\n");
					printf("The Attack does %.2f damage\n", cripple);
					printf("Defense has been reduced to %.2f and the Speed has been brought down to %.2f\n", fAidef, fAispeed);}
					else{
						fAispeed -= fAispeed*(2.0/10.0);
						fAidef -= fAidef*(2.0/10.0);
						printf("Ulric uses Cripple\n");
						printf("The attack does 0 damage\n");
						printf("Defense has been reduced to %.2f and the Speed has been brought down to %.2f\n", fAidef, fAispeed);}
					break;
					
				case 4:
					envy = (fPlyrAp*1.5)-fAidef;
					if(envy > 0){
					fAihp -= envy;
					printf("Urich uses Envy\n");
					printf("the Attack does %.2f damage\n", envy);
					fPhp -= fPhp*(3.0/10.0);}
					else{
						fAihp -= 0;
						nEmblockstatus = 0;
						printf("Ulric uses Envy\n");
						printf("The Attack does 0 damage\n");}
					break;
				}
	switch(m1){// Hadrian as an enemy move set
			case 1:
				if(nEvadestatus == 0){
				eslash = fAiap - fPdef;
				if(slash <= 0){
				fPhp -= 0;
				printf("Hadrian uses Slash\n");
				printf("does 0 damage\n");}
				else{
				fPhp -= (fAiap - fPdef);
				printf("Hadrian uses Slash\n");
				printf("does %.2f damage\n", eslash);}
				}
			 else if(nEvadestatus == 1){
				fPhp -= 0;
				printf("THe attack has been dodged\n");
				nEvadestatus = 0;}
				break;
			case 2:
				nMblockstatus = getpog();
				if(nMblockstatus == 0)
				printf("The Pendant failed to activate\n");
				else{
				printf("You have successfully used the Pendant\n");}
				nEvadestatus = 0;
				break;
			case 3:
				fAidef += 20;
				printf("Hadrian uses Defend\n");
				printf("Hadrian's Defense is now %.2f\n", fAidef);
				nEvadestatus = 0;
				break;
			case 4:
				echosone = fAimp - fPmad;
				if(nEvadestatus == 0){
				if(echosone <= 0){
				fPhp -= 0;
				printf("Hadrian uses the Chosen One Ability\n");
				printf("does 0 damage\n");}
				else {
				fPhp -= echosone;
				printf("Hadrian uses the Chosen One Ability\n");
				printf("does %.2f damage\n", echosone);}
				}
		else if(nEvadestatus == 1){
				fPhp -= 0;
				nEvadestatus = 0;
				printf("Ulric Evades the attack\n");}
			}
	switch(m2){//King William as an enemy move set
				case 1:
					nEturnctr++;
					nMblockstatus = 0;
					nEvadestatus = 0;
					nEimusectr = 1;
					nEusectr = 0;
					printf("KIng William uses Iron Maiden\n");
					break;
				case 2:
					nEusectr = 1;
					nEturnctr++;
					nMblockstatus = 0;
					nEimusectr = 0;
					nEvadestatus = 0;
					printf("King William uses Witch's Nightmare\n");
					break;
				case 3:
					fAidef += 5;
					fAimad += 5;
					nEturnctr++;
					nEusectr = 0;
					nMblockstatus = 0;
					nEvadestatus = 0;
					nEimusectr = 0;
					nEusectr = 0;
					printf("King William used Noble Heart\n");
					printf("King Willam's Physical Defense is now %.2f and Magial Defense is %.2f\n", fAidef, fAimad);
					break;
				case 4:
					if(nEvadestatus == 0){
					fPhp = 0;
					printf("King William uses His Loyal Subjects\n");
					}
					
					else{
					fPhp -= 0;
					printf("The attack has been dodged\n");
					nEvadestatus = 0;
					nEultctr++;
					nEimusectr = 0;
					nEusectr = 0;
					}
				}
	switch(m3){//Ulric as an enemy move set
				case 1:
					ecross = (fAiap - fPdef);
					if(ecross > 0){
					fPhp -= ecross;
					printf("Ulric uses Cross Slash\n");
					printf("does %.2f damage\n", ecross);}
					else{
						fPhp -= 0;
						printf("Ulric uses Envy\n");
						printf("The Attack does 0 damage\n");
					}
					break;
				case 2:
					nEevadestatus =  getevade();	
					if(nEevadestatus == 0) 
					printf("Ulric fails to use Evade\n");
					else{
					printf("Ulric successfully used eveade\n");}
					break;
				case 3:
					cripple = (fPlyrAp-(fPlyrAp*(2.0/10.0)))-fAidef;
					if(cripple >0){
					fPhp -= cripple;
					fPspeed -= fAispeed*(2.0/10.0);
					fPdef -= fAidef*(2.0/10.0);
					printf("Ulric uses Cripple\n");
					printf("The attack does %.2f, damage\n", cripple);}
					else{
						fPhp -= 0;
						fPspeed -= fAispeed*(2.0/10.0);
						fPdef -= fAidef*(2.0/10.0);
						printf("Urlrich uses cripple\n");
						printf("the attack does 0 damage\n");
						printf("Defense has been reduced to %.2f and the Speed has been brought down to %.2f\n", fPdef, fPspeed);
					}
					break;
				case 4:
					eenvy = (fAiap*1.5)-fPdef;
					if(eenvy > 0){
					fPhp -= eenvy;
					printf("Urich uses Envy\n");
					printf("the Attack does %.2f damage\n", eenvy);
					fAihp -= fAihp*(3.0/10.0);}
					else{
						fPhp -= 0;
						printf("Ulric uses Envy\n");
						printf("The Attack does 0 damage\n");
					}
				}
			}
else{
	switch(m1){
			case 1:
				eslash = fAiap - fPdef;
				if(nEvadestatus == 1){
				fPhp -= 0;
				printf("THe attack has been dodged\n");
				nEvadestatus = 0;}
				if(slash <= 0){
				fPhp -= 0;
				printf("Hadrian uses Slash\n");
				printf("does 0 damage\n");}
				else{
				fPhp -= (fAiap - fPdef);
				printf("Hadrian uses Slash\n");
				printf("does %.2f damage\n", eslash);
				}
				break;
			case 2:
			nMblockstatus = getpog();
				if(nMblockstatus == 0)
				printf("The Pendant failed to activate\n");
				else{
				printf("You have successfully used the Pendant\n");}
				nEvadestatus = 0;
				break;
			case 3:
				fAidef += 20;
				printf("Hadrian uses Defend\n");
				printf("Hadrian's Defense is now %.2f\n", fAidef);
				break;
			case 4:
				echosone = fAimp - fPmad;
				if(nEvadestatus == 0){
				if(echosone <= 0){
				fPhp -= 0;
				printf("Hadrian uses the Chosen One Ability\n");
				printf("does 0 damage\n");
			}
				else {
				fPhp -= echosone;
				printf("Hadrian uses the Chosen One Ability\n");
				printf("does %.2f damage\n", echosone);  
			}
		}
		else if(nEvadestatus == 1){
				fPhp -= 0;
				nEvadestatus = 0;
				printf("The attack has been dodged\n");}
				break;
				nEvadestatus = 0;}
	switch(m2){
				case 1:
					nEturnctr++;
					nMblockstatus = 0;
					nEvadestatus = 0;
					nEimusectr = 1;
					nEusectr = 0;
					printf("KIng William uses Iron Maiden\n");
					break;
				case 2:
					nEusectr = 1;
					nEturnctr++;
					nMblockstatus = 0;
					nEimusectr = 0;
					nEvadestatus = 0;
					printf("King William uses Witch's Nightmare\n");
					break;
				case 3:
					fAidef += 5;
					fAimad += 5;
					nEturnctr++;
					nEusectr = 0;
					nMblockstatus = 0;
					nEvadestatus = 0;
					nEimusectr = 0;
					nEusectr = 0;
					printf("King William used Noble Heart\n");
					printf("King Willam's Physical Defense is now %.2f and Magial Defense is %.2f\n", fAidef, fAimad);
					break;
				case 4:
					if(nEvadestatus == 0){
					fPhp = 0;
					printf("King William uses His Loyal Subjects\n");
					}
					else{
					fPhp -= 0;
					printf("The attack has been dodged\n");
					nEvadestatus = 0;
					nEultctr++;
					nEimusectr = 0;
					nEusectr = 0;
					}
				}
	switch(m3){
				case 1:
					ecross = (fAiap - fPdef);
					if(ecross > 0){
					fPhp -= ecross;
					printf("Ulric uses Cross Slash\n");
					printf("does %.2f damage\n", ecross);}
					else{
						fPhp -= 0;
						printf("Ulric uses Envy\n");
						printf("The Attack does 0 damage\n");
					}
					break;
				case 2:
					nEevadestatus =  getevade();	
					if(nEevadestatus == 0) 
					printf("Ulric fails to use Evade\n");
					else{
					printf("Ulric successfully used eveade\n");}
					break;
				case 3:
					cripple = (fPlyrAp-(fPlyrAp*(2.0/10.0)))-fAidef;
					if(cripple >0){
					fPhp -= cripple;
					fPspeed -= fAispeed*(2.0/10.0);
					fPdef -= fAidef*(2.0/10.0);
					printf("Ulric uses Cripple\n");
					printf("The attack does %.2f, damage\n", cripple);}
					else{
						fPhp -= 0;
						fPspeed -= fAispeed*(2.0/10.0);
						fPdef -= fAidef*(2.0/10.0);
						printf("Urlrich uses cripple\n");
						printf("the attack does 0 damage\n");
						printf("Defense has been reduced to %.2f and the Speed has been brought down to %.2f\n", fPdef, fPspeed);
					}
					break;
				case 4:
					eenvy = (fAiap*1.5)-fPdef;
					if(eenvy > 0){
					fPhp -= eenvy;
					printf("Urich uses Envy\n");
					printf("the Attack does %.2f damage\n", eenvy);
					fAihp -= fAihp*(3.0/10.0);}
					else{
						fPhp -= 0;
						printf("Ulric uses Envy\n");
						printf("The Attack does 0 damage\n");}
					}
	switch(nHmove){
			case 1:
				slash = fPlyrAp - fAidef;
				if(nEevadestatus == 0){
					if(slash >= 0){
						fAihp = fAihp - slash;
						printf("Hadrian uses Slash\n");
						printf("does %.2f damage\n", slash);}	
			 		else{
						fAihp -= 0;
						printf("Hadrian uses Slash\n");
						printf("does 0 damage\n"); }
					}
			else if(nEevadestatus == 1){
				fAihp -= 0;
				printf("The attack has been dodged\n");
				nEevadestatus = 0;}
				break;
			case 2:
				nMblockstatus = getpog();
				if(nMblockstatus == 0)
				printf("The Pendant failed to activate\n");
				else{
				printf("You have successfully used the Pendant\n");}
				nEevadestatus = 0;
				break;
			case 3:
				fPdef += 20;
				nEevadestatus = 0;
				printf("Hadrian uses Defend\n");
				printf("Hadrian's Defense is now %.2f\n", fPdef);
				break;
			case 4:
				chosone = fPmp - fAimad;
				if(nEvadestatus == 0){
				if(chosone <= 0){
				fAihp -= 0;
				printf("Hadrian uses the Chosen One Ability\n");
				printf("does 0 damage\n");}
				else {
				fAihp -= chosone;
				printf("Hadrian uses the Chosen One Ability\n");
				printf("does %.2f damage\n", chosone);}
			}
			else if(nEevadestatus == 1){
					fAihp -= 0;
					nEevadestatus = 0;
					printf("The Attack Has been dodged\n");}
		}
	switch(nKmove){
				case 1:
					nTurnctr++;
					nUsectr = 0;
					nEevadestatus = 0;
					nEmblockstatus = 0;
					nImusectr = 1;
					printf("KIng William uses Iron Maiden\n");
				break;
				case 2:
					nUsectr = 1;
					nTurnctr++;
					nEevadestatus = 0;
					nEmblockstatus = 0;
					nImusectr = 0;
					printf("King William uses Witch's Nightmare\n");
					break;
				case 3:
					fPdef += 5;
					fPmad += 5;
					nTurnctr++;
					nUsectr = 0;
					nImusectr = 0;
					nEevadestatus = 0;
					printf("King William used Noble Heart\n");
					printf("King William's Physical Defense is now %.2f and Magial Defense is %.2f\n", fPdef, fPmad);
					break;
				case 4:
						if(nEevadestatus == 0){
					fAihp = 0;
					printf("King William uses His Loyal Subjects\n");
				}
						else{
							fAihp -= 0;
							printf("The attack has been dodged\n");
							nUltictr++;
							nEevadestatus = 0;
							nEmblockstatus = 0;
						}		
					break;
			}
	switch(nUmove){
				case 1: 
					cross = (fPlyrAp - fAidef);
					if(cross > 0){
					fAihp -= cross;
					printf("Ulric uses Cross Slash\n");
					printf("does %.2f damage\n", fPlyrAp - fAidef);}
					else{
					fAihp -= 0;
					printf("Ulric uses Cross Slash\n");
					printf("does 0 Damage\n");}
					break;
				case 2:
					nEvadestatus =  getevade();	
					if(nEvadestatus == 0) 
					printf("Ulric fails to use Evade\n");
					else{
					printf("Ulric successfully used eveade\n");}
					break;
				case 3:
					cripple -= (fPlyrAp-(fPlyrAp*(2.0/10.0)))-fAidef;
					if(cripple > 0){
					fAihp -= cripple;
					fAispeed -= fAispeed*(2.0/10.0);
					fAidef -= fAidef*(2.0/10.0);
					printf("Ulric uses Cripple\n");
					printf("The Attack does %.2f damage\n", cripple);
					printf("Defense has been reduced to %.2f and the Speed has been brought down to %.2f\n", fAidef, fAispeed);}
					else{
						fAispeed -= fAispeed*(2.0/10.0);
						fAidef -= fAidef*(2.0/10.0);
						printf("Ulric uses Cripple\n");
						printf("The attack does 0 damage\n");
						printf("Defense has been reduced to %.2f and the Speed has been brought down to %.2f\n", fAidef, fAispeed);}
					break;
					
				case 4:
					envy = (fPlyrAp*1.5)-fAidef;
					if(envy > 0){
					fAihp -= envy;
					printf("Urich uses Envy\n");
					printf("the Attack does %.2f damage\n", envy);
					fPhp -= fPhp*(3.0/10.0);}
					else{
						fAihp -= 0;
						nEmblockstatus = 0;
						printf("Ulric uses Envy\n");
						printf("The Attack does O damage\n");}
				}
			}
			nMatchturn++;
			system("pause");
			system("cls");
}while(fPhp>0 && fAihp> 0 );
displaystats(nPlyr, fPhp, fPlyrAp, fPmp, fPdef, fPmad, fPspeed);
displaystats(n, fAihp, fAiap, fAimp, fAidef, fAimad, fAispeed);
if(fPhp > 0){
	printf("The Enemy was defeated\n");}
else{
	printf("You were defeated\n");}
	system("pause");
	system("cls");
	return fPhp;
}
float Tbattle(float fPhp, float fPlyrAp, float fPspeed, float fPmad, int nPlyr, float fPhy, float fSpeed, float fPdef, float fPmp, float fMp){// for Tassilo battle :)
	float fAihp = gethp(4);
	float fAiap = getAP(4, fPhy);
	float fAispeed = getspeed(4, fSpeed);
	float fAimad = getmpd(4);
	float fAidef = getdef(4);
	float fAimp = getMa(4, fMp);
	float heal=0;
	float slash=0,chosone=0, cripple=0, cross=0, envy=0, parasite = 0;
	int nHmove=0, nKmove=0, nUmove=0, nMblockstatus=0, nUsectr=0, nTurnctr=1, nEvadestatus=0, nUltictr=0, m = 0, nImusectr=0;
	int nEusectr=0, nEturnctr=0, nStuntatus=0, nBpusectr=0, poison=20;
	int nMatchturn=1;
	do{
	printf("Turn %d", nMatchturn);
	displaystats(nPlyr, fPhp, fPlyrAp, fPmp, fPdef, fPmad, fPspeed);
	displaystats(4, fAihp, fAiap, fAimp, fAidef, fAimad, fAispeed);
		slctmove(nPlyr);
		//this gets the players move depending on who that player chooses to play as
		switch(nPlyr){
		case 1:// this is to get Hadrians move
			scanf("%d", &nHmove);
			if(nHmove <= 0 ||nHmove > 4){
				printf("Invalid Input. Try Again\n");
				scanf("%d", &nHmove);
			}
			break;
		case 2://this is to get King William's move
			scanf("%d", &nKmove);
			if(nKmove <= 0 ||nKmove > 4){
				printf("Invalid Input. Try Again\n");
				scanf("%d", &nKmove);}
			else if((nKmove == 1&&nImusectr ==1)||(nKmove ==2 &&nUsectr ==1)||((nTurnctr < 5 || nUltictr != 0)&& nKmove == 4)){
				printf("King Willaiam just used this move. Select another one\n");
				scanf("%d", &nKmove);}
			break;
		case 3://this is to get Ulric's move
			scanf("%d", &nUmove);
			if(nUmove <= 0 ||nUmove > 4){
				printf("Invalid Input. Try Again");
				scanf("%d", &nUmove);}
	}
	// this gets the ai's moves depending on which character the ai is
	m = getmove();
	if(nKmove == 2 && m == 3){
		printf("King William uses Witch's Nightmare\n");
		nUsectr = 1;
		nImusectr = 0;
		printf("King William Defelcts the Parasite damage\n");
	}	
	else if(fPspeed >= fAispeed){
	switch(nHmove){
			case 1:
				slash = fPlyrAp - fAidef;
				if(nStuntatus == 0){
					if(slash > 0){
						fAihp = fAihp - slash;
						printf("Hadrian uses Slash\n");
						printf("does %.2f damage\n", slash);}
			 		else{
						fAihp -= 0;
						printf("Hadrian uses Slash\n");
						printf("does 0 damage\n"); 
					}
				}
					else{
						printf("You are stunned");
						nStuntatus = 0;
					}
				break;
			case 2:
				if(nStuntatus == 0){
				nMblockstatus = getpog();
				if(nMblockstatus == 0)
				printf("The Pendant failed to activate\n");
				else{
				printf("You have successfully used the Pendant\n");}
				}
			else{
				printf("You are stunned\n");
				nStuntatus = 0;
			}
				break;
			case 3:
				if(nStuntatus == 0){
				fPdef += 20;
				printf("Hadrian uses Defend\n");
				printf("Hadrian's Defense is now %.2f\n", fPdef);}
				else{
					printf("You are stunned\n");
					nStuntatus = 0;}
				break;
			case 4:
				if(nStuntatus == 0){
				chosone = fPmp - fAimad;
				if(chosone <= 0){
				fAihp -= 0;
				printf("Hadrian uses the Chosen One Ability\n");
				printf("does 0 damage\n");}
				else {
				fAihp -= chosone;
				printf("Hadrian uses the Chosen One Ability\n");
				printf("does %.2f damage\n", chosone); 
			}
		}
		else{
			printf("You are stunned\n");
			nStuntatus = 0;
		}
				break;
			}
	switch(nKmove){
				case 1:
					if(nStuntatus == 0){
					nTurnctr++;
					nUsectr = 0;
					nImusectr = 1;
					printf("KIng William uses Iron Maiden\n");}
					else{
						printf("You are stunned\n");
						nStuntatus = 0;
						nTurnctr++;
						nUsectr = 0;
					}
					break;
				case 2:
					if(nStuntatus == 0){
					nUsectr = 1;
					nTurnctr++;
					nImusectr = 0;
					printf("King William uses Witch's Nightmare\n");}
					else{
						printf("You are stunned\n");
						nStuntatus = 0;
						nImusectr = 0;
					}
					break;
				case 3:
					if(nStuntatus == 0){
					fPdef += 5;
					fPmad += 5;
					nTurnctr++;
					nUsectr = 0;
					nImusectr = 0;
					printf("King William used Noble Heart\n");
					printf("King Willam's Physical Defense is now %.2f and Magial Defense is %.2f\n", fPdef, fPmad);}
					else{
						printf("You are stunned\n");
						nStuntatus = 0;
						nTurnctr++;
						nUsectr = 0;
						nImusectr = 0;
					}
					break;
				case 4:
					if(nStuntatus == 0){
					printf("King William uses His Loyal Subjects\n");
					fAihp = 0;
					nUltictr++;
					nImusectr = 0;
					nUsectr = 0;}
					else{
						printf("You are stunned\n");
						nStuntatus = 0;
					}
					break;
			}
	switch(nUmove){
				case 1:
					cross = (fPlyrAp - fAidef);
					if(nStuntatus == 0){
					if(cross > 0){
					fAihp -= cross;
					printf("Ulric uses Cross Slash\n");
					printf("does %.2f damage\n", fPlyrAp - fAidef);}
					else{
					fAihp -= 0;
					printf("Ulric uses Cross Slash\n");
					printf("does 0 Damage\n");}
				}
				else{
					printf("You are stunned\n");
					nStuntatus = 0;
				}
					break;
				case 2:
					if(nStuntatus  == 0){
					nEvadestatus =  getevade();	
					if(nEvadestatus == 0) 
					printf("Ulric fails to use Evade\n");
					else{
					printf("Ulric successfully used eveade\n");}
					}
				else{
					printf("You are stunned\n");
					nStuntatus = 0;
				}
					break;
				case 3:
					cripple -= (fPlyrAp-(fPlyrAp*(2.0/10.0)))-fAidef;
					if(nStuntatus == 0){
					if(cripple > 0){
					fAihp -= cripple;
					fAispeed -= fAispeed*(2.0/10.0);
					fAidef -= fAidef*(2.0/10.0);
					printf("Ulric uses Cripple\n");
					printf("The Attack does %.2f damage\n", cripple);
					printf("Defense has been reduced to %.2f and the Speed has been brought down to %.2f\n", fAidef, fAispeed);}
					else{
						fAispeed -= fAispeed*(2.0/10.0);
						fAidef -= fAidef*(2.0/10.0);
						printf("Ulric uses Cripple\n");
						printf("The attack does 0 damage\n");
						printf("Defense has been reduced to %.2f and the Speed has been brought down to %.2f\n", fAidef, fAispeed);}
						}
					else{
						printf("You are stunned\n");
						nStuntatus = 0;
					}	
					break;
					
				case 4:
					if(nStuntatus == 0){
					envy = (fPlyrAp*1.5)-fAidef;
					if(envy > 0){
					fAihp -= envy;
					printf("Urich uses Envy\n");
					printf("the Attack does %.2f damage\n", envy);
					fPhp -= fPhp*(3.0/10.0);}
					else{
						fAihp -= 0;
						printf("Ulric uses Envy\n");
						printf("The Attack does 0 damage\n");}
					}
					else{
						printf("You are stunned\n");
						nStuntatus = 0;
					}
				}
		if(nBpusectr==1){
		poison = poison*2;
		fPhp -= poison;
		printf("Black Plague does %d\n", poison);
	}
	switch(m){
	case 1:
		if(nEvadestatus == 1 || nMblockstatus == 1){
			if(nMblockstatus == 1){
			printf("The Pendant has negated the effects of Black PLague\n");
			nMblockstatus = 0;}
			else if(nEvadestatus ==1){
			printf("Ulric has evaded the effects of Black Plague\n");
			nEvadestatus = 0;}
		}
		else{
		if(nBpusectr == 0){
		fPhp -= 20;
		printf("Tassilo uses Black Plague\n");
		nBpusectr = 1;}
		else{
			printf("Tassilo uses Black Plague\n");
			printf("Black Plauge does nothing since you are already infected\n");}
	}
		break;
	case 2:
		if(nEvadestatus == 1){
			printf("Ulric has Evade Cursed Soil\n");
			nEvadestatus = 0;}
		else{
		nStuntatus = 1;
		printf("Tassilo uses Cursed Soil\n");}
		break;
	case 3:
		parasite = fAimp - fPmad;
		if(nEvadestatus == 1){
			printf("Ulric has Evades Parasite\n");
			nEvadestatus = 0;}
		else{
		fPhp -= parasite;
		heal = parasite/2;
		if((fAihp + heal) > 800.0){
			fAihp = 800.0;
		}
		else
		fAihp += heal;}
		printf("Tassilo uses Parasite\n");
		printf("Tassilo does %.2f damage\n", parasite);
		printf("Tassilo heals %.2f\n", parasite/2);
		break;
	case 4:
		if(nEvadestatus == 1){
			printf("Ulric has Judgement\n");
			nEvadestatus = 0;}
		else{
		fPhp -= fPhp/2;
		printf("Tassilo uses Judgement\n");
		printf("Tassilo does %2.f damage\n", fPhp);
	}
}
}
else{
	
		if(nBpusectr==1){
			poison = poison*2;
			fPhp - poison;
			printf("Black Plague does %d\n", poison);
		}
	switch(m){
	case 1:
		if(nEvadestatus == 1 || nMblockstatus == 1){
			if(nMblockstatus == 1){
			printf("The Pendant has negated the effects of Black PLague\n");
			nMblockstatus = 0;}
			else if(nEvadestatus ==1){
			printf("Ulric has evaded the effects of Black Plague\n");
			nEvadestatus = 0;}
		}
		else{
		if(nBpusectr == 0){
		fPhp -= 20;
		printf("Tassilo uses Black Plague\n");
		nBpusectr = 1;}
		else{
			printf("Tassilo uses Black Plague\n");
			printf("Black Plauge does nothing since you are already infected\n");}
	}
		break;
	case 2:
		if(nEvadestatus == 1){
			printf("Ulric has Evade Cursed Soil\n");
			nEvadestatus = 0;}
		else{
		nStuntatus = 1;
		printf("Tassilo uses Cursed Soil\n");}
		break;
	case 3:
		parasite = fAimp - fPmad;
		if(nEvadestatus == 1){
			printf("Ulric has Evades Parasite\n");
			nEvadestatus = 0;}
		else{
		fPhp -= parasite;
		heal = parasite/2;
		if((fAihp + heal) > 800.0){
			fAihp = 800.0;
		}
		else
		fAihp += heal;}
		printf("Tassilo uses Parasite\n");
		printf("Tassilo does %.2f damage\n", parasite);
		printf("Tassilo heals %.2f\n", parasite/2);
		break;
	case 4:
		if(nEvadestatus == 1){
			printf("Ulric has Judgement\n");
			nEvadestatus = 0;}
		else{
		fPhp -= fPhp/2;
		printf("Tassilo uses Judgement\n");
		printf("Tassilo does %2.f damage\n", fPhp);}
	}
	switch(nHmove){
			case 1:
				slash = fPlyrAp - fAidef;
				if(nStuntatus == 0){
					if(slash > 0){
						fAihp = fAihp - slash;
						printf("Hadrian uses Slash\n");
						printf("does %.2f damage\n", slash);}
			 		else{
						fAihp -= 0;
						printf("Hadrian uses Slash\n");
						printf("does 0 damage\n"); 
					}
				}
					else{
						printf("You are stunned\n");
						nStuntatus = 0;
					}
				break;
			case 2:
				if(nStuntatus == 0){
				nMblockstatus = getpog();
				if(nMblockstatus == 0)
				printf("The Pendant failed to activate\n");
				else{
				printf("You have successfully used the Pendant\n");}
			}
			else{
				printf("You are stunned\n");
				nStuntatus = 0;
			}
				break;
			case 3:
				if(nStuntatus == 0){
				fPdef += 20;
				printf("Hadrian uses Defend\n");
				printf("Hadrian's Defense is now %.2f\n", fPdef);}
				else{
					printf("You are stunned\n");
					nStuntatus = 0;}
				break;
			case 4:
				if(nStuntatus == 0){
				chosone = fPmp - fAimad;
				if(chosone <= 0){
				fAihp -= 0;
				printf("Hadrian uses the Chosen One Ability\n");
				printf("does 0 damage\n");}
				else {
				fAihp -= chosone;
				printf("Hadrian uses the Chosen One Ability\n");
				printf("does %.2f damage\n", chosone); 
			}
		}
		else{
			printf("You are stunned\n");
			nStuntatus = 0;
		}
				break;
			}
	switch(nKmove){
				case 1:
					if(nStuntatus == 0){
					nTurnctr++;
					nUsectr = 0;
					nImusectr = 1;
					printf("KIng William uses Iron Maiden\n");}
					else{
						printf("You are stunned\n");
						nStuntatus = 0;
						nTurnctr++;
						nUsectr = 0;
					}
					break;
				case 2:
					if(nStuntatus == 0){
					nUsectr = 1;
					nTurnctr++;
					nImusectr = 0;
					printf("King William uses Witch's Nightmare\n");}
					else{
						printf("You are stunned\n");
						nStuntatus = 0;
						nTurnctr++;
						nImusectr = 0;
					}
					break;
				case 3:
					if(nStuntatus == 0){
					fPdef += 5;
					fPmad += 5;
					nTurnctr++;
					nUsectr = 0;
					nImusectr = 0;
					printf("King William used Noble Heart\n");
					printf("King Willam's Physical Defense is now %.2f and Magial Defense is %.2f\n", fPdef, fPmad);}
					else{
						printf("You are stunned\n");
						nStuntatus = 0;
						nTurnctr++;
						nUsectr = 0;
						nImusectr = 0;
					}
					break;
				case 4:
					if(nStuntatus == 0){
					printf("King William uses His Loyal Subjects\n");
					fAihp = 0;
					nUltictr++;
					nImusectr = 0;
					nUsectr = 0;}
					else{
						printf("You are stunned\n");
						nStuntatus = 0;
					}
					break;
			}
	switch(nUmove){
				case 1:
					if(nStuntatus == 0){
					cross = (fPlyrAp - fAidef);
					if(cross > 0){
					fAihp -= cross;
					printf("Ulric uses Cross Slash\n");
					printf("does %.2f damage\n", fPlyrAp - fAidef);}
					else{
					fAihp -= 0;
					printf("Ulric uses Cross Slash\n");
					printf("does 0 Damage\n");}
				}
				else{
					printf("You are stunned\n");
					nStuntatus = 0;
				}
					break;
				case 2:
					if(nStuntatus  == 0){
					nEvadestatus =  getevade();	
					if(nEvadestatus == 0) 
					printf("Ulric fails to use Evade\n");
					else{
					printf("Ulric successfully used eveade\n");}
				}
				else{
					printf("You are stunned\n");
					nStuntatus = 0;
				}
					break;
				case 3:
					if(nStuntatus == 0){
					cripple -= (fPlyrAp-(fPlyrAp*(2.0/10.0)))-fAidef;
					if(cripple > 0){
					fAihp -= cripple;
					fAispeed -= fAispeed*(2.0/10.0);
					fAidef -= fAidef*(2.0/10.0);
					printf("Ulric uses Cripple\n");
					printf("The Attack does %.2f damage\n", cripple);
					printf("Defense has been reduced to %.2f and the Speed has been brought down to %.2f\n", fAidef, fAispeed);}
					else{
						fAispeed -= fAispeed*(2.0/10.0);
						fAidef -= fAidef*(2.0/10.0);
						printf("Ulric uses Cripple\n");
						printf("The attack does 0 damage\n");
						printf("Defense has been reduced to %.2f and the Speed has been brought down to %.2f\n", fAidef, fAispeed);}
						}
					else{
						printf("You are stunned\n");
						nStuntatus = 0;
					}	
					break;
					
				case 4:
					if(nStuntatus == 0){
					envy = (fPlyrAp*1.5)-fAidef;
					if(envy > 0){
					fAihp -= envy;
					printf("Urich uses Envy\n");
					printf("the Attack does %.2f damage\n", envy);
					fPhp -= fPhp*(3.0/10.0);}
					else{
						fAihp -= 0;
						printf("Ulric uses Envy\n");
						printf("The Attack does 0 damage\n");}
					}
					else{
						printf("You are stunned\n");
						nStuntatus = 0;
					}
				}
}
nMatchturn++;
system("pause");
system("cls");
}while(fPhp>0 && fAihp>0);
displaystats(nPlyr, fPhp, fPlyrAp, fPmp, fPdef, fPmad, fPspeed);
displaystats(4, fAihp, fAiap, fAimp, fAidef, fAimad, fAispeed);
system("pause");
system("cls");
if(fAihp <=0){
	printf("Tassilo has been defeated\n");
	ending(1);}
else if(fPhp <=0){
	printf("You have been deafeated\n");
	ending(2);}
else if(fPhp<= 0 && fAihp <=0){
	printf("The battle was a draw\n");
	ending(3);}
}
int main(){
	chapter1();
	int nMat = getswordmat();
	int nElm = getswordelm();
	int nNumstrk = getnumstrk(nMat);
	int nTemp = gettemp();
	float fPhy = getphy(nMat, nNumstrk, nTemp);
	float fMp = getmp(nElm, fPhy);
	getultwep(nMat, nElm);
	printf("Physical Power: %.2f", fPhy);
	element(nElm);
	printf("\nMagical Power: %.2f", fMp);
	int nWieght = getwiht(nMat, nNumstrk);
	printf("\nWeight: %d lbs\n", nWieght);
	float fSpeed = getclass(nWieght);
	system("pause");
	system("cls");
	chapter2();
	int nPlyr = playercharacter();
	float fPhp = gethp(nPlyr);
	float fPlyrAp = getAP(nPlyr, fPhy);
	float fPseed = getspeed(nPlyr, fSpeed);
	float fPmad = getmpd(nPlyr);
	float fPdef = getdef(nPlyr);
	float fPmp =  getMa(nPlyr, fMp);
	int n = getenemy(nPlyr);
	int a;
	do{
		a = getenemy(nPlyr);
	}while(a==n);
	float gameover = battle(fPhp, fPlyrAp, fPseed, fPmad, nPlyr, fPhy, fSpeed, n,fPdef, fPmp, fMp);
	if(gameover <= 0)
	ending(5);
	else{
	float gameover = battle(fPhp, fPlyrAp, fPseed, fPmad, nPlyr, fPhy, fSpeed, a,fPdef, fPmp, fMp);
		if(gameover <= 0)
		ending(5);
		else{
		ending(4);
		Tbattle(fPhp, fPlyrAp, fSpeed, fPmad, nPlyr, fPhy, fSpeed, fPdef, fPmp, fMp);}
	}
	return 0;
}
