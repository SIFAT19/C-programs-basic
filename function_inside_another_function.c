#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
    goodMorning();
   
   
    
    
    return 0;
}

void goodMorning(){
    printf("Good Morning Sifat\n");
     goodAfternoon();
}
void goodAfternoon(){
    printf("Good Afternoon Sifat\n");
     goodNight();
}
void goodNight(){
    printf("Good Night Sifat\n");
}