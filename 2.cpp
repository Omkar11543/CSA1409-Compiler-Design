#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int i, ic = 0, m, cc = 0, oc = 0, j, n;
    char b[30], op[30], id[30];
    int co[30]; 
    printf("Enter the string:");
    scanf("%s", b);

    n = strlen(b); 

    for (i = 0; i < n; i++) {
        if (isspace(b[i])) {
            continue;
        } else if (isalpha(b[i])) {
            id[ic] = b[i];
            ic++;
        } else if (isdigit(b[i])) {
            m = (b[i] - '0');
            i++;
            while (isdigit(b[i])) {
                m = m * 10 + (b[i] - '0');
                i++;
            }
            
            co[cc] = m;
            cc++;
        } else if (b[i] == '*') { 
            op[oc] = '*';
            oc++;
        } else if (b[i] == '-') {
            op[oc] = '-';
            oc++;
        } else if (b[i] == '+') {
            op[oc] = '+';
            oc++;
        } else if (b[i] == '=') {
            op[oc] = '=';
            oc++;
        }
    }
    
    
    printf("Identifiers:");
    for (j = 0; j < ic; j++) {
        printf("%c", id[j]);
    }
    
    
    printf("\nConstants:");
    for (j = 0; j < cc; j++) {
        printf("%d", co[j]);
    }
   
    printf("\nOperators:");
    for (i = 0; i < oc; i++) {
        printf("%c", op[i]);
    }
    
    return 0;
}
