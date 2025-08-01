#include<STDIO.H>
int main() {
    float subject1, subject2, subject3;
    float total, percentage;
    int max_marks = 100;
    
    printf("Enter marks for subject 1: ");
    scanf("%f", &subject1);
    
    printf("Enter marks for subject 2: ");
    scanf("%f", &subject2);
    
    printf("Enter marks for subject 3: ");
    scanf("%f", &subject3);
    
    total = subject1 + subject2 + subject3;
    percentage = (total / (max_marks * 3)) * 100;

    if (subject1 < 33 || subject2 < 33 || subject3 < 33) {
        printf("You are fail\n");
    } else if (percentage < 40) {
        printf("You are fail\n");
    } else {
        printf("You are pass\n");
    }
    
    return 0;
}