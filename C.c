#include<stdio.h>

int main() {
    char participantName[50], competitionName[50], position[20], organisier[50], post[20];
    int participantClass, competitionYear, date, month, year;
    
    printf("Participant's Name: ");
    scanf("%s", participantName);
    
    printf("Competition Name: ");
    scanf("%s", competitionName);
    
    printf("Position: ");
    scanf("%s", position);
    
    printf("Participant's Class: ");
    scanf("%d", &participantClass);
    
    printf("Competition Year: ");
    scanf("%d", &competitionYear);

    printf("Date: ");
    scanf("%d", &date);
    printf("month: ");
    scanf("%d", &month);
    printf("Date: ");
    scanf("%d", &year);
    

    printf("Name of organiser: ");
    scanf("%s", organisier);

    printf("Post of organiser: ");
    scanf("%s", post);

    printf("\nCertificate of Achievement\n\n");
    printf("This is to certify that %s of Class %d has demonstrated exceptional skills and dedication,\n", participantName, participantClass);
    printf("and has secured the position %s in the %d %s Competition.\n\n", position, competitionYear, competitionName);
    printf("%d %d %d\n", date,month,year);
    printf("________________________\n");
    printf("\n\n");
    printf("%s\n", organisier);
    printf("%s\n", post);

    return 0;
}