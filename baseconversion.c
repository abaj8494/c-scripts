#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

char change(base, user_num)
{
    int i = 0;
    int j = 0;
    int raised, ceiling, floored;
    int length = snprintf( NULL, 0, "%d", base );
    char base_name[20] = "";
    char output[55] = "";
    char floored_str[32] = "";
    char alphabet[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (raised = pow(base,i); user_num % raised < user_num; i++) {
        raised = pow(base, i);
        ceiling = i - 1;
    }
    for (j = ceiling; j > -1; j--) {
        floored = floor(user_num / pow(base, j));
        user_num -= floored*pow(base, j); 
        sprintf(floored_str, "%d", floored);
        if (floored > 9) {
            sprintf(floored_str, "%c", alphabet[floored - 10]);
        }    
        strcat(output, floored_str);
    }
    if (base == 2) strcpy(base_name, "Binary");
    else if (base == 16) strcpy(base_name, "Hexadecimal");
    else snprintf(base_name, length + 1, "%d", base );
    printf("<items><item uid=\"%s\" arg=\"%s\"><title>%s</title><subtitle></subtitle><icon>icon.png</icon></item></items>", base_name, output, output);
    return 0;
}


int main(int argc, char *argv[])
{
    if (!(atoi(argv[1]) >= 2 && atoi(argv[1]) <= 36))
        return 2;
    if (atoi(argv[2]) > 2147483647)
        return 2;
    int base = atoi(argv[1]);
    int user_num = atoi(argv[2]);
    change(base, user_num);
    return 0;

} 
