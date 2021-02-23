#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char area [10][21];
    char controllers;
    int x = 10, y = 5, ox, oy, appley = 3, applex = 5;
    int i = 0, countapple = 0;
    
    do{
    
        while(i < 21){
            area[0][i] = '#';
            area[9][i] = '#';
            i++;
        }
        
        for (int t = 1; t < 9; t++){
            for(int z = 0; z < 21; z++){
                if (z == 0 || z == 20){
                    area[t][z] = '#';
                }
                else{
                    area[t][z] = ' ';
                }
            }
        }
        
        area[y][x] = '@';
        area[appley][applex] = 'A';
        
        system("clear");
        
        for (int tout = 0; tout < 10; tout++){
            for(int zout = 0; zout < 21; zout++){
                printf("%c", area[tout][zout]);
            }
            printf("\n");
        }
        
        printf("%i", countapple);
        
        scanf("%c", &controllers);
        
        ox = x;
        oy = y;
        
        if (controllers == 'w'){
            y--;
        }
        if (controllers == 's'){
            y++;
        }
        if (controllers == 'a'){
            x--;
        }
        if (controllers == 'd'){
            x++;
        }
        
        if (area[y][x] == area[appley][applex]){
            appley = rand() % 10;
            applex = rand() % 20;
            
            countapple++;
        }
        
        if (area[y][x] == '#'){
            x = ox;
            y = oy;
        }
    }
    while(controllers != 'e');
}













//#include <stdio.h>
//#include <stdlib.h>
//#include <termios.h>
//#include <unistd.h>
//#include <ncurses.h>
//
//int main(){
//    char masforlocate[10][21];
//    int i;
//    int x = 10, y = 5;
//    char key, ox, oy;
//
//
//    do{
//        sprintf(masforlocate[0], "####################");
//        for(i = 1; i < 9; i++){
//            sprintf(masforlocate[i], "#                  #");
//        }
//        sprintf(masforlocate[9], "####################");
//
//        masforlocate[y][x] = '@';
//
//        //system("cls");
//
//        for (i = 0; i < 10; i++){
//            printf("%s\n", masforlocate[i]);
//        }
//
//        key = getchar();
//
//        ox = x;
//        oy = y;
//
//        //scanf("%c", &key);
//
//        if(key == 'w'){
//            y--;
//        }
//        if(key == 's'){
//            y++;
//        }
//        if(key == 'a'){
//            x--;
//        }
//        if(key == 'd'){
//            x++;
//        }
//        if(masforlocate[y][x] == '#'){
//            x = ox;
//            y = oy;
//        }
//    }
//    while(key != 'e');
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//    int test_array[10][10];
//
//    for (int t = 0; t < 10; t++){
//        for (int f = 0; f < 10; f++){
//            test_array[t][f] = f;
//
//        }
//    }
//
//    for (int i = 0; i < 10; i++){
//        for (int j = 0; j < 10; j++){
//            test_array[i][j] = test_array[i][j] * i;
//            printf("\n%i", test_array[i][j]);
//        }
//        printf("\n\n");
//    }
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//    for(int i = 0; i < 10; i++){
//        if (i % 2 == 0 && i != 0){
//            printf("\n%i", i);
//        }
//    }
//
//    char ch[8];
//
//    for (int j = 0; j < 7; j++){
//        ch[j] = '#';
//    }
//
//    for (int t = 0; t < 7; t++){
//        printf("\n%c", ch[t]);
//    }
//
//    printf("\n%s", ch);
//
//}



//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//
//int main(){
//    char ch = 'w';
//    printf("%c", ch);
//
//    char s[10] = "аб";
//
//    printf("%s", s);
//
//    scanf("%s", s);
//    printf("%s", s);
//
//}




//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//    int i = 0;
//    int mas[10];
//
//    while(i <= 9){
//        scanf("%i", &mas[i]);
//        mas[i] = mas[i] * mas[i];
//        printf("test d = %d\n", mas[i]);
//        i = i + 1;
//    }
//
//
//
//}

//void proc1(){
//    printf("\ntest procedure");
//}
//
//int testfunction(int x, int y){
//    printf("\nthis code point for test function on C\n");
//    return x * y;
//}
//
//void proc2(int z){
//
//    if(z < 10){
//        printf("%i", z);
//    }
//    else{
//        printf("error");
//    }
//}
//
//int logic(int a, int b){
//    if (a > b){
//        return 1;
//    }
//    else{
//        return 0;
//    }
//}
//
//int main(){
//    int t = logic(5, 1);
//    proc2(t);
//
////    float x, y;
////    int i;
////
////    printf("input number 1 = ");
////    scanf("%f", &x);
////
////    printf("input number 2 = ");
////    scanf("%f", &y);
////
////    printf("make choose:\n if 1 = + \n if 2 = * \n if 3 = - \n if 4 = /");
////    scanf("%i", &i);
////
////    if (i == 1){
////        printf("ressult = %f", x + y);
////    }
////
////    if (i == 2){
////        printf("ressult = %f", x * y);
////    }
////
////    if (i == 3){
////        printf("ressult = %f", x - y);
////    }
////
////    if (i == 4){
////        printf("ressult = %f", x / y);
////    }
//}
