#include <stdio.h>
#include <windows.h>

int main() {
    float m, cu;
    printf("Insira a nota:\n");
    scanf("%f", &m);
    
    if (m >= 7.0) {
        printf("Aprovado(a)!\n");
    } 
        printf("\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0, ! \n");
        scanf("%f", &cu);
        printf("caiu no bait buroKKKKKKKKKKKKKKKK\n");
    
 int notas[] = {986, 880, 830, 880, 880, 880, 880, 986, 1044, 1307, 1044, 880, 784};
int duracoes[] = { 300, 300, 300, 700, 700, 170, 200, 200, 200, 200, 200, 200, 700,};

for (int i = 0; i < sizeof(notas) / sizeof(notas[0]); i++) {
    Beep(notas[i], duracoes[i]);
    Sleep(30);
}

return 0;
}