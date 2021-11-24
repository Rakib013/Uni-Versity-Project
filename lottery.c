#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void lottery(){
    printf("\nPlease Enter Your Leader Name Or Your Team Name: ");
    char name[100];
    scanf("%s", name);
    int projct;
    char projects[][50] = {
        "Scientific Calculator",
        "Library Management system",
        "Hangman Game",
        "Flight Reservation System",
        "Digital Phonebook",
        "Tic-Tac-Toe Game",
        "Game of Life",
        "Text Editor/ Personal Diary",
        "Online shop management software",
        "Vocabulary Learning Application",
        "Pacman Game",
        "Puzzle Game",
        "Cybercafe Management System",
        "Quiz Game"
    };
    int lott = rand() % 14;
    switch (lott){
        case 0:
            printf("\n**%s, You have won the %s project.\n", name, projects[lott]);
            break;
        case 1:
            printf("\n**%s, You have won the %s project.\n", name, projects[lott]);
            break;
        case 2:
            printf("\n**%s, You have won the %s project.\n", name, projects[lott]);
            break; 
        case 3:
            printf("\n**%s, You have won the %s project.\n", name, projects[lott]);
            break;  
        case 4:
            printf("\n**%s, You have won the %s project.\n", name, projects[lott]);
            break; 
        case 5:
            printf("\n**%s, You have won the %s project.\n", name, projects[lott]);
            break;  
        case 6: 
            printf("\n**%s, You have won the %s project.\n", name, projects[lott]);
            break;
        case 7:
            printf("\n**%s, You have won the %s project.\n", name, projects[lott]);
            break;
        case 8:
            printf("\n**%s, You have won the %s project.\n", name, projects[lott]);
            break;
        case 9:
            printf("\n**%s, You have won the %s project.\n", name, projects[lott]);
            break;
        case 10:
            printf("\n**%s, You have won the %s project.\n", name, projects[lott]);
            break;
        case 11:
            printf("\n**%s, You have won the %s project.\n", name, projects[lott]);
            break;
        case 12:
            printf("\n**%s, You have won the %s project.\n", name, projects[lott]);
            break;
        case 13:
            printf("\n**%s, You have won the %s project.\n", name, projects[lott]);
            break;
        case 14:
            printf("\n**%s, You have won the %s project.\n", name, projects[lott]);
            break;
        default:
            printf("No project\n");
            break;
    }
}

int main(){
    srand(time(NULL));
    printf("\n%40s To The Project's Selection Lottery!\n", "Welcome");
    for(int i = 0; i <= 9; i++){
        lottery();
    }
    printf("\n%40s Thank You For Perticipate!\n", " ");
    return 0;
}