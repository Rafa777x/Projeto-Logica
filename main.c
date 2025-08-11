
#include <stdio.h>
#include <ctype.h>
#include <string.h>

//Rafael Silva 1D//


void validar_senha(const char *senha) {
    int tamanho = strlen(senha);
    int tem_maiuscula = 0;
    int tem_numero = 0;

    
    if (tamanho < 8) {
        printf("A senha deve ter no minimo 8 caracteres.\n");
        return;
    }

    
    for (int i = 0; i < tamanho; i++) {
        if (isupper(senha[i])) {
            tem_maiuscula = 1;
        }
        if (isdigit(senha[i])) {
            tem_numero = 1;
        }
    }

    
    if (!tem_maiuscula) {
        printf("A senha deve conter pelo menos uma letra maiuscula.\n");
        return;
    }

    if (!tem_numero) {
        printf("A senha deve conter pelo menos um numero.\n");
        return;
    }
    

    printf("Senha valida!\n");
}

int main() {
    char senha[20]; 

    printf("Digite sua senha: ");
    fgets(senha, sizeof(senha), stdin); 
    
   
    if (senha[strlen(senha) - 1] == '\n') {
        senha[strlen(senha) - 1] = '\0';
    }

    validar_senha(senha);

    return 0;
}