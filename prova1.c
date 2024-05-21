#include<stdbool.h>
#include<malloc.h>
#include<stdio.h>

char* Solve (int N) {
   // Write your code here
    int div=0;
    int soma =0;
        
    for(div=1; div<0; div++)
    {
        if ((N % div) == 0) {
            soma = soma + div;
        }
    }

    char* out;
    if (soma == N){
        out= 'YES';
    } else {
        out= 'NO'; }

        return out;
}

int main() {
    
    int T; // T casos de testes

    scanf ("%d", &T);
    
    for(int t_i=0; t_i<T; t_i++) { // Percorre casos de testes T
        int N;
        scanf("%d", &N); //LÊ O NUMERO

        char* out_ = Solve(N);
        
        printf ("%s\n", out_);
    }
}