#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

char category();
char miscellaneous();
char science();
char sports();
char entertainment();
void leaderboard();
void play_again();
void rules();
void preparation();
void faq();

struct player{
    char name[30];
    int score;
    int accuracy;
}play,dup[100],temp;

FILE *fptr;

int main(){
    system("cls");
    printf("\n\n\t\t\t\t\t\t\t\tWELCOME TO QUIZ PROGRAMME\n");
    printf("\t\t\t\t\t\t\t\t-------------------------\n");
    printf("\t\t\t\t\t\t\t      Gain knowledege in the best way!!!");
    printf("\n\nEnter your name: ");
    gets(play.name);
    rules();
}

void rules(){
    char press;
    printf("\nHere are some of the rules and instructions for the game:\n\n");
    printf("1) Multiple categories are made in Quiz which makes it beneficial for your academics as well as for extra knowledge.");
    printf("\n2) You will need to press the keys according to the given instructions in the respective section of the game.\n");
    printf("3) There will be a live score card running during the whole game.");
    printf("\n4) Each category consists of a set of 10 questions, where correct answer will be granted 10 marks and incorrect answers will lead to 5 marks deduction.\n");
    
    printf("\n-> Press 'E' to enter in the game.\n");
    printf("-> Press 'L' to view the leaderboard.\n");
    printf("-> Press 'P' to prepare for the quiz.\n");
    printf("-> Press 'F' to view FAQ.\n");
    printf("-> Press 'Q' to quit the game.\n");


    reenter:
    press=getch();

    if ((press=='E') || (press=='e')) {
        system("cls");
        category();
    }
    else if ((press=='Q') || (press=='q')) 
        press='b';
    else if ((press=='L') || (press=='l')){
        leaderboard();
    }
    else if ((press=='P') || (press=='p')) {
        preparation();
    }
    else if ((press=='F') || (press=='f')) {
        faq();
    }
    else {
        printf("You have entered other letters. Please enter 'E' to enter the game and 'Q' to quit the game.\n");
        goto reenter;
    }
}

char category(){
    system("cls");
    char cat;
    printf("Choose a category:\n------------------\n\nEntertainment\t\tSports\t\tScience and Technology\t\t Miscellanceous\n\n");
    printf("-> Press 'E' for Entertainment.\n");
    printf("-> Press 'S' for Sports.\n");
    printf("-> Press 'T' for Science and Technology.\n");
    printf("-> Press 'M' for Miscellaneous.\n");
    printf("\n-> Press 'H' to go back to homepage...\n");
    reenter_cat:
    cat=toupper(getch());

    if (cat=='E') {
        system("cls");
        entertainment();
    }
    else if (cat=='S') {
        system("cls");
        sports();
    }
    else if (cat=='T'){
        system("cls");
        science();
    }
    else if (cat=='M'){
        system("cls");
        miscellaneous();
    }
    else if (cat=='H'){
        system("cls");
        rules();
    }
    else {
        printf("You have entered other letters. Please enter accordigly.\n");
        goto reenter_cat;
    }
}

char miscellaneous(){
    int i,j,temp[10],qsn_no=1,count=0;
    play.accuracy=0;
    play.score=0;
    char correct_ans[30]={'D','D','C','D','A','C','B','A','D','C','C','B','A','C','A','C','D','B','A','D','C','C','A','D','B','D','B','D','A','A'};
    char player_ans[30];
    srand(time(NULL));

    for (i=0;i<10;i++){    
        system("cls");
        printf("\n\n\t\t\t\t\t\t\t\t\t\tMISCELLANEOUS\n\n\n");
            generate:
            temp[i]=rand() % 30 +1;
            for (j=0;j<=i;j++){
                if (i==j) continue;
                if (temp[i]==temp[j]) goto generate;
            }
        switch (temp[i]) {
            case 1:
            printf("\n%d. Which gas is filled in an electric bulb?\n",qsn_no);
            printf("a) Hydrogen\nb) Oxygen\nc) Carbon dioxide\nd) Nitrogen\n");
            break;

            case 2:
            printf("\n %d. Which is the smallest district of Nepal?\n",qsn_no);
            printf("a) Kathmandu\nb) Dolpa\nc) Lalitpur\nd) Bhaktapur\n");
            break;

            case 3:
            printf("\n%d. Who was the first president of the United States of America?\n",qsn_no);
            printf("a) John F. Kennedy\nb) Donald Trump\nc) George Washington\nd) Dr. Ram Baran Yadav\n");
            break;
 
            case 4:
            printf("\n%d. In which country does the ""Leaning tower of Pisa"" lie?\n",qsn_no);
            printf("a) Pisa\nb) France\nc) Germany\nd) Italy\n");
            break;

            case 5:
            printf("\n%d. What is the full form of SARS?\n",qsn_no);
            printf("a) Severe Acute Respiratory Syndrome\nb) Serious Allergic Respiratory Symdrome\nc) Serious Allergic Respiratory Symptoms\nd) Severe Acute Respiratory Symptom\n");
            break;

            case 6:
            printf("\n%d. Which vitamin is abundant in citrus fruits?\n",qsn_no);
            printf("a) Vitamin A\nb) Vitamin B\nc) Vitamin C\nd) Vitamin D\n");
            break;

            case 7:
            printf("\n%d. Apple recently launched the iphone 13 series. Name the chipset present in it.\n",qsn_no);
            printf("a) Apple A16 Bionic\nb) Apple A15 Bionic\nc) Apple A14 Bionic\nd) Snapdragon 888\n");
            break;

            case 8:
            printf("\n%d. What is the full form of GPS?\n",qsn_no);
            printf("a) Global Positioning System\nb) Global Positioning Structure\nc) Global Pointing System\nd) Global Positioning Structure\n");
            break;

            case 9:
            printf("\n%d. On which continent is the South Pole?\n",qsn_no);
            printf("a) Asia\nb) Europe\nc) Australia\nd) Antratica\n");     
            break;  

            case 10:
            printf("\n%d. Which of the following is an egg laying mammal?\n",qsn_no);
            printf("a) Snake\nb) Pigeon\nc) Platypus\nd) Hen\n");
            break;

            case 11:
            printf("\n%d. What is the full form of IPO?\n",qsn_no);
            printf("a) Increasing Portfolio Opportunity\nb) Initial Post-holder Offer\nc) Initial Public Offering\nd) Individual Portfolio Option\n");
            break;

            case 12:
            printf("\n%d. Which is the first movie of Nepal?\n",qsn_no);
            printf("a) Kumari\nb) Satya Harishchandra\nc) Aama\nd) Chakka Panja\n");
            break;

            case 13:
            printf("\n%d. Which is the national animal of Nepal?\n",qsn_no);
            printf("a) Cow \nb) One horned Rhinocerous\nc) Elephant\nd) Dog\n");
            break;

            case 14:
            printf("\n%d. What is the height of Mt. Everest?\n",qsn_no);
            printf("a) 8848 m\nb) 8850 m\nc) 8848.86 m\nd) 8848.68 m\n");
            break;

            case 15:
            printf("\n%d. Where was Charlie Chaplin born?\n",qsn_no);
            printf("a) London\nb) Berlin\nc) Manchester\nd) Rome\n");
            break;

            case 16:
            printf("\n%d. Who is known as the father of geometry?\n",qsn_no);
            printf("a) Archimedes\nb) Pythagoras\nc) Euclid\nd) Newton\n");
            break;

            case 17:
            printf("\n%d. Who won the Miss Nepal 2020?\n",qsn_no);
            printf("a) Nikita Chandak\nb) Shrinkhala Khatiwada\nc) Anushka Shrestha\nd) Namrata Shrestha\n");
            break;

            case 18:
            printf("\n%d. What is the full form of WTO?\n",qsn_no);
            printf("a) World Tobacco Organization\nb) World Trade Organization\nc) World Tourist Organiztion\nd) Wool and Thread Organization\n");
            break;

            case 19:
            printf("\n%d. Who is known as the Snow Leopard of Nepal?\n",qsn_no);
            printf("a) Ang Rita Sherpa\nb) Pasang Lhamu Sherpa\nc) Appa Sherpa\nd) Tenzing Norgay Sherpa\n");
            break;

            case 20:
            printf("\n%d. How many months have 28 days?\n",qsn_no);
            printf("a) 1\nb) 2\nc) 3\nd) 12\n");
            break;

            case 21:
            printf("\n%d. What is the total sum of numbers from 1 to 50?\n",qsn_no);
            printf("a) 1225\nb) 1250\nc) 1275\nd) 1200\n");
            break;

            case 22:
            printf("\n%d. Who is the current president of the United States of America?\n",qsn_no);
            printf("a) Barack Obama\nb) Donald Trump\nc) Joe Biden\nd) Bill Clinton\n");
            break;

            case 23:
            printf("\n%d. Who is the author of the book ""Oliver Twist""?\n",qsn_no);
            printf("a) Charles Dickens\nb) Anton Chekhov\nc) William Shakespeare\nd) Edgar Allan Poe\n");
            break;

            case 24:
            printf("\n%d. What does the red colour in Red Cross indicate?\n",qsn_no);
            printf("a) Love\nb) Peace\nc) Blood\nd) Neutral\n");
            break;

            case 25:
            printf("\n%d. Which Animal laughs like human?\n",qsn_no);
            printf("a) Rhino\nb) Hynea\nc) Dog\nd) Tiger\n");
            break;

            case 26:
            printf("\n%d. Film 'Rajmati' is related to which language?\n",qsn_no);
            printf("a) Tamil \nb) Gujrati\nc) Bhojpuri\nd) Newari\n");
            break;

            case 27:
            printf("\n%d. Who received the 12 minutes long standing ovation in Oscar history?\n",qsn_no);
            printf("a) Jackie Chan\nb) Charlie Chaplin\nc) Anthony Hopkins\nd) Leonardo DiCarpio\n");
            break;

            case 28:
            printf("\n%d. Who is the richest person of Nepal?\n",qsn_no);
            printf("a) Shesh Ghale\nb) Nirmal Pradhan\nc) Dipendra Agarwal\nd) Binod Chaudhary\n");
            break;

            case 29:
            printf("\n%d. 50 people attended the anniversary party. If each one shook the hand of every other one, how many times the hands were shaken?\n",qsn_no);
            printf("a) 1225\nb) 1250\nc) 1275\nd) 1200\n");
            break;

            case 30:
            printf("\n%d. 2, 5, 10, 17, 26. These numbers follow a pattern. What comes next?\n",qsn_no);
            printf("a) 37\nb) 47\nc) 53\nd) 59\n");
            break;
        }
   
        printf("\nPlease press a or b or c or d to giver your answer.\nYour answer: ");
        player_ans[temp[i]]=toupper(getche());

        if (player_ans[temp[i]]==correct_ans[temp[i]-1]) {
            play.score+=10;
            count+=1;
            printf("\nHuraay, CORRECT ANSWER!!!!!");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tYour current score=%d\n",play.score); 
        }
        else {
            printf("\nIncorrect answer.");
            play.score=play.score-5;
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tYour current score=%d\n",play.score);
        
        }
        qsn_no++;
        printf("\nPress any key to continue...");
        getch();
    }

    play.accuracy=count*10;
    fptr=fopen("Files/lead_mis.txt","a+");
    if (fptr==NULL) {
        printf("\nScore cannot be added.");
        exit(0);
    }
    else {
    fwrite(&play,sizeof(play),1,fptr);
    }
    fclose(fptr);

        system("cls");
            
        	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tTotal Score=%d",play.score);
    		printf("\n\t\t\t\t\t\t\t\t\tAccuracy=%d%%",play.accuracy);
            play_again();

}

char sports(){

    int i,j,temp[10],qsn_no=1,count=0;
    play.accuracy=0;
    play.score=0;
    char correct_ans[30]={'C','B','A','B','D','B','B','B','B','C','D','C','C','B','A','B','B','C','B','A','A','C','C','A','C','D','A','A','B','A'};
    char player_ans[30];
    srand(time(NULL));


    for (i=0;i<10;i++){
        system("cls");
        printf("\n\n\t\t\t\t\t\t\t\t\t\tGAMES AND SPORTS\n\n\n");
            generate1:
            temp[i]=rand() % 30 +1;
            for (j=0;j<=i;j++){
                if (i==j) continue;
                if (temp[i]==temp[j]) goto generate1;
            }

        switch (temp[i]) {
            case 1:
            printf("\n%d. The 2014 Winter Olympic was held in the city:\n",qsn_no);
            printf("a) Oslo\nb) Moscow\nc) sochi\nd) Vancouver\n");
            break;

            case 2:
            printf("\n%d. Who has hold the record in 100 meters race in Olympic?\n",qsn_no);
            printf("a) Micheal Johnson\nb) Usain Bolt\nc) Noah Ngey\nd) None of above\n");
            break;

            case 3:
            printf("\n%d. The headquater of International Cricket Council is located in the city:\n",qsn_no);
            printf("a) Dubai\nb) Mumbai\nc) Melbourne\nd) London\n");
            break;

            case 4:
            printf("\n%d. What is official distance of marathon race?\n",qsn_no);
            printf("a) 20 miles\nb) 26 miles and 385 yards\nc) 25 miles\nd) 26.5 miles\n");
            break;

            case 5:
            printf("\n%d. Who was the winner of champions league 2013?\n",qsn_no);
            printf("a) Real madrid\nb) Barcelona\nc) Dortmund\nd) Baryen Munich\n");
            break;

            case 6:
            printf("\n%d. Who holds the highest number of world record in swimming?\n",qsn_no);
            printf("a) Paul Biderman\nb) Micheal Philips\nc) Ryan Locthe\nd) David Hill\n");
            break;

            case 7:
            printf("\n%d. Till 2020, how many times has Lionel Messi won the ballon d'or award?\n",qsn_no);
            printf("a) 4\nb) 6\nc) 7\nd) 3\n");
            break;

            case 8:
            printf("\n%d. 'Faster, Higher, Stronger' is the motto of which international games event?\n",qsn_no);
            printf("a) FIFA worldcup\nb) Olympics\nc) Cricket worldcup\nd) Afro-Asian games\n");
            break;

            case 9:
            printf("\n%d. Which continent host FIFA World Cup 2010 for first time?\n",qsn_no);
            printf("a) Europe\nb) Africa\nc) America\nd) Australia\n");
            break;

            case 10:
            printf("\n%d. Which team won the final of FIFA World Cup 2018?\n",qsn_no);
            printf("a) England\nb) Croatia\nc) France\nd) Belgium\n");
            break;

            case 11:
            printf("\n%d. Who was declared as the best player of FIFA World Cup 2010?\n",qsn_no);
            printf("a) Cristiano Ronaldo\nb) David Villa\nc) Andres Iniesta\nd) Dieago Forlan\n");
            break;

            case 12:
            printf("\n%d. Who was the winner of the final of UEFA Euro 2020?\n",qsn_no);
            printf("a) Portugal\nb) Belgium\nc) Italy\nd) England\n");
            break;

            case 13:
            printf("\n%d. The first boxer to win the heavy-weight title three times:\n",qsn_no);
            printf("a) Mike Tyson\nb) Joe Frazier\nc) Muhammad Ali\nd) Joe Firman\n");
            break;

            case 14:
            printf("\n%d. William G. Morgan is known as the inventor of:\n",qsn_no);
            printf("a) Footbal\nb) Volleyball\nc) Hockey\nd) Tennis\n");
            break;

            case 15:
            printf("\n%d. What is the number of players on each side in Rugby Football?\n",qsn_no);
            printf("a) 15\nb) 12\nc) 11\nd) 16\n");
            break;

            case 16:
            printf("\n%d. Which city has host the 2020 Summer Olympic Games?\n",qsn_no);
            printf("a) Seoul\nb) Tokyo\nc) Barcelona\nd) Brisbane\n");
            break;

            case 17:
            printf("\n%d. The Bird's Nest stadium is at:\n",qsn_no);
            printf("a) Athens\nb) Beijing\nc) Seoul\nd) Sydney\n");
            break;

            case 18:
            printf("\n%d. The five rings on Olympic flag represents:\n",qsn_no);
            printf("a) Colours\nb) Games\nc) Continent\nd) Countries\n");
            break;

            case 19:
            printf("\n%d. Which team won ODI cricket world cup 2015?\n",qsn_no);
            printf("a) India\nb) Australia\nc) England\nd) South Africa\n");
            break;

            case 20:
            printf("\n%d. Who was the top scorer in 2020 euros?\n",qsn_no);
            printf("a) Cristiano Ronaldo\nb) Robert Lewandowski\nc) Alvaro Morata\nd) Romero Lukaku\n");
            break;

            case 21:
            printf("\n%d. Who was the top scorer in copa America 2021?\n",qsn_no);
            printf("a) Lionel Messi\nb) Neymar jr\nc) Gabriel Jesus\nd) Lautaro Martinez\n");
            break;

            case 22:
            printf("\n%d. FIFA confers the Puskas Award for which among the following every year?\n",qsn_no);
            printf("a) Footballer of the year\nb) Coach of the year\nc) Goal of the year\nd) None of above\n");
            break;

            case 23:
            printf("\n%d. Which cricket ground in Australia is known as Gabba?\n",qsn_no);
            printf("a) Sydney\nb) Melbourne\nc) Brisbane\nd) Perth\n");
            break;

            case 24:
            printf("\n%d. Who scored the first double century in one day International Cricket?\n",qsn_no);
            printf("a) Sachin Tendulkar\nb) Rohit Sharma\nc) Chris Gayle\nd) Brian Lara\n");
            break;

            case 25:
            printf("\n%d. Which country host the Copa America 2021?\n",qsn_no);
            printf("a) Argentina\nb) Mexico\nc) Brazil\nd) America\n");
            break;

            case 26:
            printf("\n%d. Which team has won the champions league the most?\n",qsn_no);
            printf("a) Barcelona\nb) Inter Milan\nc) Liverpool\nd) Real Madrid\n");
            break;

            case 27:
            printf("\n%d. Which sports uses a net, racket and a shuttlecock?\n",qsn_no);
            printf("a) Badminton\nb) Tennis\nc) Snooker\nd) ping pong\n");
            break;

            case 28:
            printf("\n%d. Which two teams play in El classico?\n",qsn_no);
            printf("a) Barcelona and Real Madrid\nb) Liverpool and Manchester United\nc) Inter and Ac milan\nd) None of above\n");
            break;

            case 29:
            printf("\n%d. Which team won the last ODI cricket worldcup?\n",qsn_no);
            printf("a) Australia\nb) England\nc) India\nd) New Zealand\n");
            break;

            case 30:
            printf("\n%d. Tyson Fury played which sports?\n",qsn_no);
            printf("a) Boxing\nb) Volleyball\nc) Tennis\nd) Basketball\n");
            break;
        }
        printf("\nPlease press a or b or c or d to giver your answer.\nYour answer: ");
            player_ans[temp[i]]=toupper(getche());

            if (player_ans[temp[i]]==correct_ans[temp[i]-1]) {
                play.score+=10;
                count+=1;
                printf("\nHuraay, CORRECT ANSWER!!!!!");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tYour current score=%d\n",play.score); 
            }
            else {
                printf("\nIncorrect answer.");
                play.score=play.score-5;
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tYour current score=%d\n",play.score);
            }
        qsn_no++;
        printf("\nPress any key to continue...");
        getch();
    }
    play.accuracy= count*10;
    fptr=fopen("Files/lead_gam.txt","a+");
    if (fptr==NULL) {
        printf("\nScore cannot be added.");
        exit(0);
    }
    else {
    fwrite(&play,sizeof(play),1,fptr);
    }
    fclose(fptr);

    system("cls");

    printf("\n\n\t\t\t\t\t\t\t\t\tTotal Score=%d",play.score);
    printf("\n\t\t\t\t\t\t\t\t\tAccuracy=%d%%",play.accuracy);
    play_again();

}

char entertainment(){
    int i,j,temp[10],question=1,count=0;
    play.accuracy=0;
    play.score=0;
    char correct_answer[30]={'B','A','A','A','A','A','D','A','A','A','D','B','A','A','A','A','C','C','A','B','C','B','A','D','B','A','B','B','C','C'};
    char player_answer[30];
    srand(time(NULL));

    for (i=0;i<10;i++){
        system("cls");
        printf("\n\n\t\t\t\t\t\t\t\t\t\tENTERTAINMENT\n\n\n");
    	generate:
    		temp[i]=rand() % 30+1;
    		for (j=0;j<=i;j++){
    			if (i==j) continue;
                if (temp[i]==temp[j]) goto generate;
            }
            switch (temp[i]) {
            case 1:
            printf("\n%d. What is the name of charlie chaplins most famous character?\n",question);
            printf("a) Calvero\nb) The tramp\nc) Hynkel\nd) Hitler\n");
            break;
                    
            case 2:
            printf("\n%d. Aaron Sorkin won an oscar award for what 2010 drama hinting the creation of facebook?\n",question);
            printf("a) The SocialNetwork\nb) Steve Jobs\nc) Moneyball\nd) Mollys Game\n");
            break;
                    
            case 3:
            printf("\n%d. Who is the most nominated individual in oscar history?\n",question);
            printf("\na) Meryl Steep\nb)Viola Davis \nc) Olivia Colman\nd) Glenn Close\n");
            break;
            
            case 4:
            printf("\n%d. Which is the most expensive movie to win an oscar?\n",question);
            printf("\na) Avatar\nb)Skin \nc) Black Swan\nd) Inception\n");
            break;
            
            case 5:
            printf("\n%d. How many UK number ones did the beatles have in total?\n",question);
            printf("\na) 17\nb) 21 \nc) 15\nd) 18\n");
            break;
                  
           	case 6:
            printf("\n%d. Which Beatles member was shot dead?\n",question);
            printf("\na) John Lennon\nb) Paul McCartney \nc) George Harrison \nd) Ringo Starr\n");
            break;
        
            case 7:
            printf("\n%d. In art, what refers to the way something feels or looks as if it might feel like something?\n",question);
            printf("\na) Line\nb) Space \nc) Value \nd) Texture\n");
            break;
            
            case 8:
            printf("\n%d. Who became the first person to win an oscar for a netflix original in 2020?\n",question);
            printf("\na) Laura Dern\nb) Lana Condor \nc) Alice Pagani \nd) Emma Mackey\n");
            break;
            
            case 9:
            printf("\n%d. Which music legend won the nobel prize for literature in 2016 ?\n",question);
            printf("\na) Bob Dylan\nb) Joan Baez \nc) Paul Simon \nd) Elton John\n");
            break;
           
            case 10:
            printf("\n%d. Who is known as the king of pop?\n",question);
            printf("\na) Michael Jackson\nb) Mariah Carey \nc) Beyonce  \nd) Whitney Houston\n");
            break;

            case 11:
            printf("\n%d. Where are emmy awards made?\n",question);
            printf("\na) Los Angeles\nb) Seattle \nc) New York \nd) Chicago\n");
            break;
           
            case 12:
            printf("\n%d. How many seasons does game of thrones have?\n",question);
            printf("\na) 12\nb) 8 \nc) 9 \nd) 6\n");
            break;
           
            case 13:
            printf("\n%d. Following his nominations in 1984 for 12 grammy awards, which artist holds the record for most nomination in a single night?\n",question);
            printf("\na) Michael Jackson\nb) Adele \nc) Ye \nd) Laurryn Hill\n");
            break;
           
            case 14:
            printf("\n%d. Which is the biggest ever series launched ever with over 140 million fans?\n",question);
            printf("\na) Squid Game\nb) Bridgerton \nc) Stranger Things \nd) Money Heist\n");
            break;
            
            case 15:
            printf("\n%d. Black Panther is set in which fictional country?\n",question);
            printf("\na) Wakanda\nb) Gondor \nc) Freedonia \nd) Grandfenwick\n");
            break;

            case 16:
            printf("\n%d. Who was capable of picking Thor's hammer in Avengers End game?\n",question);
            printf("\na) Captain America\nb) Iron Man \nc) Black Panther \nd) Spiderman\n");
            break;
           
            case 17:
            printf("\n%d. How many infinity stones are there?\n",question);
            printf("\na) 7\nb) 9 \nc) 6 \nd) 12\n");
            break;
           
            case 18:
            printf("\n%d. What is nepali film industry called?\n",question);
            printf("\na) Bollywood\nb) Jollywood \nc) Kollywood \nd) Hollywood\n");
            break;
            
            case 19:
            printf("\n%d. Where do Winnie the Pooh and his friends live?\n",question);
            printf("\na) Hundred acre wood\nb) Bikini Bottom \nc) Shrek's Swamp \nd) Magic Kingdom\n");
            break;
         
            case 20:
            printf("\n%d. Which 2019 Korean film became the first foreign-language film to win Best Picture at the Academy Awards?\n",question);
            printf("\na) Exit\nb) Parasite \nc) Ghost Walk \nd) Money\n");
            break;

            case  21:
            printf("\n%d. Who is the youngest person to win the Grammy?\n", question);
            printf("\na) Justin Bieber \nb) Taylor Swift \nc) Leah Peasall \nd) Billie Eillish\n");
            break;



            case 22:
            printf("\n%d. Who has won the highest number of MVP award in the NBA history?\n", question);
            printf("\na) Micheal Jordan\nb) Kareem Abdul-Jabbar \nc) Kobe Bryant \nd) Lebron James\n");
            break;

            case 23:
            printf("\n%d. Which was the first Asian movie to win the Oscar?\n", question);
            printf("\na) Ordinary People \nb) Spirited Away \nc) Parasite \nd) The Exorcist\n");
            break;

            case 24:
            printf("\n%d. What was the fourth Games in the Squid Game?\n", question);
            printf("\na) Tug of War \nb) The Glass Stepping Stones \nc) Dalgona Candy \nd) Marbles \n");
            break;

            case 25:
            printf("\n%d. Which is the first Japanese anime film to win an Oscar Award?\n", question);
            printf("\na)Your Name \nb) Spirited Away \nc) Howl’s Moving Castle \nd) The Wind Rises\n");
            break;

            case 26:
            printf("\n%d. Which boy band was remarked to be more popular than Jesus?\n", question);
            printf("\na) Beatles \nb) BackStreet Boys \nc) BTS \nd) Queen\n");
            break;

            case 27:
            printf("\n%d.  ‘Queen’ lead vocalist Freddie Mercury died due to:\n", question);printf("\na) Cardiac Arrest \nb) AIDS \nc) Lungs Failure\nd) Drugs Overdose\n");
            break;

            case 28:
            printf("\n%d.  Micheal Jackson made his first professional debut with?\n", question);
            printf("\na) Jackson Family \nb) Family \nc) The Jackson 5 \nd) Jackson and Sons\n");
            break;

            case 29:
            printf("\n%d. Who was not the owner of the Elder Wand in Harry Potter?\n", question);
            printf("\na) Albus Dumbledore \nb) Draco Malfoy \nc) Severus Snape \nd) Tom Riddle\n");
            break;

            case 30:
            printf("\n%d.Who is the famous painter that has sold only one painting in his lifetime?\n", question);
            printf("\na) Leonardo Da Vinci \nb) Pablo Picasso \nc) Vincent Van Gogh \nd) Claude Monet\n");
            break;

         }
            
        printf("\nPlease press a or b or c or d to giver your answer.\nYour answer: ");
            player_answer[temp[i]]=toupper(getche());

            if (player_answer[temp[i]]==correct_answer[temp[i]-1]) {
                play.score+=10;
                count+=1;
                printf("\nHuraay, CORRECT ANSWER!!!!!");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tYour current score=%d\n",play.score); 
            }
            else {
                printf("\nIncorrect answer.");
                play.score=play.score-5;
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tYour current score=%d\n",play.score);
            }

    		question++;
            printf("\nPress any key to continue...");
            getch();
    }
    play.accuracy=count*10;
    fptr=fopen("Files/lead_ent.txt","a+");
    if (fptr==NULL) {
        printf("\nScore cannot be added.");
        exit(0);
    }
    else {
    fwrite(&play,sizeof(play),1,fptr);
    }
    fclose(fptr);
    system("cls");

        	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tTotal Score=%d",play.score);
    		printf("\n\t\t\t\t\t\t\t\t\tAccuracy=%d%%",play.accuracy);
play_again();
}

char science(){
    int i,j,temp[10],qsn_no=1,count=0;
    play.accuracy=0;
    play.score=0;
    char correct_ans[30]={'A','D','C','A','B','B','B','C','D','D','A','B','C','D','D','C','A','B','C','C','A','B','A','A','D','B','D','D','C','A'};
    char player_ans[30];
    srand(time(NULL));

    for (i=0;i<10;i++){    
        system("cls");
        printf("\n\n\t\t\t\t\t\t\t\t\t\tSCIENCE AND TECHNOLOGY\n\n\n");
            generate3:
            temp[i]=rand() % 30 +1;
            for (j=0;j<=i;j++){
                if (i==j) continue;
                if (temp[i]==temp[j]) goto generate3;
            }
        switch (temp[i]) {
            case 1:
            printf("\n%d. Which of the following is known as the powerhouse of the cell?\n",qsn_no);
            printf("a) Mitochondria\nb) Ribosome\nc) Vacuole\nd) Cell wall\n");
            break;

            case 2:
            printf("\n %d. What is the atomic number of Germanium?\n",qsn_no);
            printf("a) 62\nb) 52\nc) 42\nd) 32\n");
            break;

            case 3:
            printf("\n%d. What is the common test for HIV/AIDS?\n",qsn_no);
            printf("a) Urine test\nb) Swab test\nc) ELISA\nd) Eye test\n");
            break;
 
            case 4:
            printf("\n%d. What is the study of birds called?\n",qsn_no);
            printf("a) Ornithology\nb) Geology\nc) Birdology\nd) Entomology\n");
            break;

            case 5:
            printf("\n%d. What is the study of insects called?\n",qsn_no);
            printf("a) Ornithology\nb) Entomology\nc) Ecology\nd) Gastrology\n");
            break;

            case 6:
            printf("\n%d. Deficiency of which Vitamin causes 'Beri Beri'?\n",qsn_no);
            printf("a) Vitamin B12\nb) Vitamin B1\nc) Vitamin B2\nd) Vitamin B3\n");
            break;

            case 7:
            printf("\n%d. Who is known as father of Economics?\n",qsn_no);
            printf("a) Karl Marx\nb) Adam Smith\nc) Bill Gates\nd) Geoffrey Chaucer\n");
            break;

            case 8:
            printf("\n%d. Which human cell is the longest cell?\n",qsn_no);
            printf("a) Egg cell\nb) Skin\nc) Nerve Cell\nd) Epithelium\n");
            break;

            case 9:
            printf("\n%d. What is the molecular formula of sugar?\n",qsn_no);
            printf("a) C12H24O12\nb) C6H12O6\nc) C12H22O12\nd) C12H22O11\n");
            break;

            case 10:
            printf("\n%d. Which of the following is an egg laying mammal?\n",qsn_no);
            printf("a) Snake\nb) Pigeon\nc) Hen\nd) Platypus\n");
            break;

            case 11:
            printf("\n%d. What is the name of instrument used for measuring relative density of milk?\n",qsn_no);
            printf("a) Lactometer\nb) Barometer\nc) Hydrometer\nd) Milkometer\n");
            break;

            case 12:
            printf("\n%d. Which country is believed to be the inventer of zero?\n",qsn_no);
            printf("a) China\nb) India\nc) Russia\nd) Mongolia\n");
            break;

            case 13:
            printf("\n%d. Which is the lightest metal among all the metals discovered so far?\n",qsn_no);
            printf("a) Hydrogen\nb) Helium\nc) Lithium\nd) Sodium\n");
            break;

            case 14:
            printf("\n%d. What is the chemical name of washing soda?\n",qsn_no);
            printf("a) Calcium carbonate\nb) Calcium Hydroxide\nc) Sodium Bicarbonate\nd) Sodium Carbonate\n");
            break;

            case 15:
            printf("\n%d. What is the unit of force?\n",qsn_no);
            printf("a) Watt\nb) Joule\nc) Ampere\nd) Newton\n");
            break;

            case 16:
            printf("\n%d. Who is known as the father of geometry?\n",qsn_no);
            printf("a) Archimedes\nb) Pythagoras\nc) Euclid\nd) Newton\n");
            break;

            case 17:
            printf("\n%d. Where was Albert Einstein born?\n",qsn_no);
            printf("a) Germany\nb) UK\nc) USA\nd) FRANCE\n");
            break;

            case 18:
            printf("\n%d. Which gas is commonly used in freezer?\n",qsn_no);
            printf("a) Carbon dioxide\nb) Ammonia\nc) Nitrogen\nd) Oxygen\n");
            break;

            case 19:
            printf("\n%d. Where was Madam Curie born?\n",qsn_no);
            printf("a) Germany\nb) UK\nc) Poland\nd) USA\n");
            break;

            case 20:
            printf("\n%d. Which Vitamin is found in rainwater?\n",qsn_no);
            printf("a) Vitamin B1\nb) Vitamin B2\nc) Vitamin B12\nd) Vitamin A\n");
            break;

            case 21:
            printf("\n%d. Which chemical name is the Blue Vitriol?\n",qsn_no);
            printf("a) Copper Sulphate\nb) Zinc Sulphate\nc) Calcium carbinate\nd) Sulphuric Acid\n");
            break;

            case 22:
            printf("\n%d. What is the name of branch of medicine concerned with ear?\n",qsn_no);
            printf("a) Osteology\nb) Otology\nc) Pathology\nd) Pedology\n");
            break;

            case 23:
            printf("\n%d. What is the cranial capacity of modern man?\n",qsn_no);
            printf("a) 1200-1400cc\nb) 1400-1600cc\nc) 200-400cc\nd) 700-900cc\n");
            break;

            case 24:
            printf("\n%d. The longest cranial nerve of human body is\n",qsn_no);
            printf("a) Vagus\nb) Sciatic\nc) Trigeminal\nd) Trochlear\n");
            break;

            case 25:
            printf("\n%d. The acid which cannot be kept in the glass bottle is ....\n",qsn_no);
            printf("a) HCl\nb) HBr\nc) HI\nd) HF\n");
            break;

            case 26:
            printf("\n%d. Which was the first antibiotic to be discovered?\n",qsn_no);
            printf("a) Tetracycline\nb) Penicillin\nc) Choloromycetin\nd) Aspirin\n");
            break;

            case 27:
            printf("\n%d. The term ""sucidial bag of cell"" is used for......\n",qsn_no);
            printf("a) Mitochondria\nb) Ribosome\nc) Peroxisomes\nd) Lysosomes\n");
            break;

            case 28:
            printf("\n%d. A cyclotron is a device ......\n",qsn_no);
            printf("a) to accelerate positive ion only\nb) to accelerate negative ion only\nc) to keep the particle along the circular path of constant radius\nd) both a and b  \n");
            break;

            case 29:
            printf("\n%d. When a sound wave goes from one medium to another, the physical characteristic of wave than remains unchanged is .....\n",qsn_no);
            printf("a) speed\nb) amplitude\nc) frequency\nd) wavelength\n");
            break;

            case 30:
            printf("\n%d. Which gas is known as laughing gas?\n",qsn_no);
            printf("a) Nitrous Oxide\nb) Nitic Oxide\nc) Nirtogen Dioxide\nd) Carbon Monoxide\n");
            break;

        }

        printf("\nPlease press a or b or c or d to giver your answer.\nYour answer: ");
            player_ans[temp[i]]=toupper(getche());

            if (player_ans[temp[i]]==correct_ans[temp[i]-1]) {
                play.score+=10;
                count+=1;
                printf("\nHuraay, CORRECT ANSWER!!!!!");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tYour current score=%d\n",play.score); 
            }
            else {
                printf("\nIncorrect answer.");
                play.score=play.score-5;
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tYour current score=%d\n",play.score);
            }

        qsn_no++;
        printf("\nPress any key to continue...");
        getch();
    }
        play.accuracy=count*10;
        system("cls");
        	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tTotal Score=%d",play.score);
    		printf("\n\t\t\t\t\t\t\t\t\tAccuracy=%d%%",play.accuracy);

    fptr=fopen("Files/lead_sci.txt","a+");
    if (fptr==NULL) {
        printf("\nScore cannot be added.");
        exit(0);
    }
    else {
    fwrite(&play,sizeof(play),1,fptr);
    }
    fclose(fptr);

play_again();
}
void play_again(){
    char again;
        printf("\n\n\t\t\t\t\t\t\t\tDo you want to play again?");
        printf("\n\n-> Press 'Y' to play again.\n-> Press any other key to quit.\n");
        again=toupper(getche());
        if (again=='Y') category();
        system("cls");
}
void preparation(){
    system("cls");
    char cat,ch;
    printf("Choose a category to prepare:\n-------------------------------\n\nEntertainment\t\tSports\t\tScience and Technology\t\t Miscellanceous\n\n");
    printf("-> Press 'E' for Entertainment.\n");
    printf("-> Press 'S' for Sports.\n");
    printf("-> Press 'T' for Science and Technology.\n");
    printf("-> Press 'M' for Miscellaneous.\n");
    printf("\n-> Press 'H' to go back to homepage...\n");
    reenter_cat:
    cat=toupper(getch());

    if (cat=='E') {
        system("cls");
        fptr=fopen("Files/entertainmentprep.txt","r");
        if (fptr==NULL) {
        printf("\nPreparation for science doesn't exist.");
        exit(0);
        }
        else {
            while ((ch=fgetc(fptr))!=EOF) {
                printf("%c",ch);
            }
        }
        fclose(fptr);

        printf("\n\nPress any key to go back...\n");
        getch();
        preparation();
    }
    else if (cat=='S') {
        system("cls");
        fptr=fopen("Files/sportsprep.txt","r");
        if (fptr==NULL) {
        printf("\nPreparation for science doesn't exist.");
        exit(0);
        }
        else {
            while ((ch=fgetc(fptr))!=EOF) {
                printf("%c",ch);
            }
        }
        fclose(fptr);

        printf("\n\nPress any key to go back...\n");
        getch();
        preparation();
    }
    else if (cat=='T'){
        system("cls");
        fptr=fopen("Files/scienceprep.txt","r");
        if (fptr==NULL) {
        printf("\nPreparation for science doesn't exist.");
        exit(0);
        }
        else {
            while ((ch=fgetc(fptr))!=EOF) {
                printf("%c",ch);
            }
        }
        fclose(fptr);

        printf("\n\nPress any key to go back...\n");
        getch();
        preparation();
    }
    else if (cat=='M'){
        system("cls");
        fptr=fopen("Files/miscellaneousprep.txt","r");
        if (fptr==NULL) {
        printf("\nPreparation for miscellaneous doesn't exist.");
        exit(0);
        }
        else {
            while ((ch=fgetc(fptr))!=EOF) {
                printf("%c",ch);
            }
        }
        fclose(fptr);

        printf("\n\nPress any key to go back...\n");
        getch();
        preparation();
    }
    else if (cat=='H'){
        system("cls");
        rules();
    }
    else {
        printf("You have entered other letters. Please enter accordigly.\n");
        goto reenter_cat;
    }
}
void leaderboard(){

    system("cls");
    char cat;
    printf("Choose a category to view leaderboard:\n-------------------------------------\n\nEntertainment\t\tSports\t\tScience and Technology\t\t Miscellanceous\n\n");
    printf("-> Press 'E' for Entertainment.\n");
    printf("-> Press 'S' for Sports.\n");
    printf("-> Press 'T' for Science and Technology.\n");
    printf("-> Press 'M' for Miscellaneous.\n");
    printf("\nPress 'H' to go back to homepage...\n");
    reenter_cat:
    cat=toupper(getch());

    if (cat=='E') {
        system("cls");
        int i=0,j=0,k=0;
        printf("\n\n\t\t\t\t\t\t\t\t\t\tEntertainment Leaderboard\n\n\n");
        fflush(stdin);
        fptr=fopen("Files/lead_ent.txt","r+");
        if (fptr==NULL) {
        printf("\nLeaderboard cannot be opened.");
        exit(0);
        }
        else {
            printf("  NAME\t\t\tSCORE\t\t\tACCURACY\n");
            while (fread(&play,sizeof(play),1,fptr)==1)
            {
                dup[i]=play;
                i++;
            }
                for (j=0;j<=i;j++){
                    for (k=j+1;k<i;k++){
                        if (dup[j].score<dup[k].score){
                            temp=dup[j];
                            dup[j]=dup[k];
                            dup[k]=temp;
                        }
                    }
                }
                for (j=0;j<=i-1;j++){
                printf("--------------------------------------------------------\n");
                printf("%s\t\t\t%d\t\t\t%d%%\n",dup[j].name,dup[j].score,dup[j].accuracy);
                }
        }
        fclose(fptr);

        printf("\n\nPress any key to go back...\n");
        getch();
        leaderboard();
    }
    else if (cat=='S') {
        system("cls");
        int i=0,j=0,k=0;
        printf("\n\n\t\t\t\t\t\t\t\t\tGames and Sports Leaderboard\n\n\n");
        fflush(stdin);
        fptr=fopen("Files/lead_gam.txt","r+");
        if (fptr==NULL) {
        printf("\nLeaderboard cannot be opened.");
        exit(0);
        }
        else {
            printf("  NAME\t\t\tSCORE\t\t\tACCURACY\n");
            while (fread(&play,sizeof(play),1,fptr)==1)
            {
                dup[i]=play;
                i++;
            }
                for (j=0;j<=i;j++){
                    for (k=j+1;k<i;k++){
                        if (dup[j].score<dup[k].score){
                            temp=dup[j];
                            dup[j]=dup[k];
                            dup[k]=temp;
                        }
                    }
                }
                for (j=0;j<=i-1;j++){
                printf("--------------------------------------------------------\n");
                printf("%s\t\t\t%d\t\t\t%d%%\n",dup[j].name,dup[j].score,dup[j].accuracy);
                }
        }
        fclose(fptr);

        printf("\n\nPress any key to go back...\n");
        getch();
        leaderboard();
    }
    else if (cat=='T'){
        system("cls");

        int i=0,j=0,k=0;
        printf("\n\n\t\t\t\t\t\t\t\t\t\tScience and Technology Leaderboard\n\n\n");
        fflush(stdin);
        fptr=fopen("Files/lead_sci.txt","r+");
        if (fptr==NULL) {
        printf("\nLeaderboard cannot be opened.");
        exit(0);
        }
        else {
            printf("  NAME\t\t\tSCORE\t\t\tACCURACY\n");
            while (fread(&play,sizeof(play),1,fptr)==1)
            {
                dup[i]=play;
                i++;
            }
                for (j=0;j<=i;j++){
                    for (k=j+1;k<i;k++){
                        if (dup[j].score<dup[k].score){
                            temp=dup[j];
                            dup[j]=dup[k];
                            dup[k]=temp;
                        }
                    }
                }
                for (j=0;j<=i-1;j++){
                printf("--------------------------------------------------------\n");
                printf("%s\t\t\t%d\t\t\t%d%d%%\n",dup[j].name,dup[j].score,dup[j].accuracy);
                }
        }
        fclose(fptr);

        printf("\n\nPress any key to go back...\n");
        getch();
        leaderboard();
    }
    else if (cat=='M'){
        system("cls");
        int i=0,j=0,k=0;
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\tMiscellaneous Leaderboard\n\n\n");
        fflush(stdin);
        fptr=fopen("Files/lead_mis.txt","r+");
        if (fptr==NULL) {
        printf("\nLeaderboard cannot be opened.");
        exit(0);
        }
        else {
            printf("  NAME\t\t\tSCORE\t\t\tACCURACY\n");
            while (fread(&play,sizeof(play),1,fptr)==1)
            {
                dup[i]=play;
                i++;
            }
                for (j=0;j<=i;j++){
                    for (k=j+1;k<i;k++){
                        if (dup[j].score<dup[k].score){
                            temp=dup[j];
                            dup[j]=dup[k];
                            dup[k]=temp;
                        }
                    }
                }
                for (j=0;j<=i-1;j++){
                printf("--------------------------------------------------------\n");
                printf("%s\t\t\t%d\t\t\t%d%%\n",dup[j].name,dup[j].score,dup[j].accuracy);
                }
        }
        fclose(fptr);

        printf("\n\nPress any key to go back...\n");
        getch();
        leaderboard();
    }
    else if (cat=='H'){
        system("cls");
        rules();
    }
    else {
        printf("You have entered other letters. Please enter accordigly.\n");
        goto reenter_cat;
    }
}

void faq(){
    system("cls");
    char ch;
    fptr=fopen("Files/FAQ.txt","a+");
    if (fptr==NULL) {
        printf("FAQ cannot be opened.");
        exit(0);
    }
    else {
            printf("\n\n\t\t\t\t\t\t\t\t\tFAQ\n\n\n");
            while ((ch=fgetc(fptr))!=EOF)
            {
                printf("%c",ch);
            }
    }
    fclose(fptr);
    printf("\n\nPress any key to go back to home page....");
    getch();
    system("cls");
    rules();
}