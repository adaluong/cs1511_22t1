# include <stdio.h>

int main(void) {

    int index;
    printf("enter index: ");
    scanf("%d", &index);
 
    // 1. what does the following print?    
    printf("%c\n", 'A' + 1);
    
    // 2. if the user enters the index = 4, what do you expect it to print?
    printf("%c\n", 'A' + index);
    
    // 3. how do you go 'back' one letter?
    
    // tip: run `ascii -d` 
    
    return 0;
}
