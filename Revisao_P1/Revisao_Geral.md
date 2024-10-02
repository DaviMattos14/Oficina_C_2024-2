Complete as lacunas dos Seguintes códigos


### 1.
```c
#include <stdio.h>

int main() {
    _____ a, b;
    /* Atribua os valores 10 e 20 */
    a = 10;
    b = __;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
```

### 2. 
```c
#include <stdio.h>

int main() {
    int num;
    printf("Digite um número: ");
    _____("%d", &num);
    printf("Você digitou: %d\n", num);
    return 0;
}
```

### 3. 
```c
#include <stdio.h>

int main() {
    int num = 42;
    ______("O número é: ____\n", __);
    return 0;
}
```

### 4. 
```c
#include <stdio.h>

int main() {
    int x = 5;
    
    ___ (x _____ 5) {
        printf("x é igual a 5\n");
    } ___ {
        printf("x não é igual a 5\n");
    }
    return 0;
}
```

### 5. 
```c
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int maior = _____ ? _______:______;
    printf("O maior valor é: %d\n", maior);
    return 0;
}
```

### 6. **Laço de repetição (for)**
```c
#include <stdio.h>

int main() {
    /* Use um laço for para imprimir de 1 a 5 */
    ___ (____; ____ ; ____) {
        printf("%d ", i);
    }
    return 0;
}
```

### 7.
```c
#include <stdio.h>

int main() {
    int i = 1;
    /* Use um laço para imprimir de 1 a 5 */
    ____ (_____) {
        printf("%d ", i);
        _____;
    }
    return 0;
}
```

### 8. **Laço de repetição (do-while)**
```c
#include <stdio.h>

int main() {
    int i = 1;
    /* Complete o laço para imprimir de 1 a 5 */
    __ {
        printf("%d ", i);
        i++;
    } ___ (______);
    return 0;
}
```

### 9.
```c
#include <stdio.h>

/* Declare uma função que retorna a soma de dois inteiros */

____ soma(____ a, ____ b);
int main() {
    int x = 5, y = 10;
    int resultado = ________;
    printf("Soma: %d\n", resultado);
    return 0;
}
____ soma(____ a, ____ b) {
    ______ a _____ b;
}
```

### 10. 
```c
#include <stdio.h>

/* Declare uma funçãoque imprime uma mensagem */
_____  ________________ {
    printf("Hello, World!\n");
}

int main() {
    /* Chame a função */
    _____;
    return 0;
}
```

### 11. 
```c
#include <stdio.h>

/* Função que troca os valores de duas variáveis */
_____ trocar(______, _____) {
    int temp = a;
    a = b;
    b = temp;
    printf("Agora a = %d e b = %d\n", a, b);
}

int main() {
    int x = 5, y = 10;
    /* Chame a função trocar */
    _________;
    return 0;
}
```

### 12. 
```c
#include <stdio.h>

int main() {
    int num = 7;
    __ (num > 0) {
        __ (num _____ 10) {
            printf("O número está entre 1 e 10\n");
        } ___ {
            printf("O número é maior que 10\n");
        }
    } ___ {
        printf("O número é menor ou igual a 0\n");
    }
    return 0;
}
```

### 13. 
```c
#include <stdio.h>

int main() {
    int opcao = 2;
    /* Complete a estrutura */
    ____ (opcao) {
        case 1:
            printf("Opção 1\n");
            break;
        ______:
            printf("Opção 2\n");
            _____;
        default:
            printf("Opção inválida\n");
    }
    return 0;
}
```


### 14. 
```c
#include <stdio.h>

int main() {
    /* Use um laço for para imprimir de 1 a 10, mas pare no 5 */
    for (int _____; ____ 10; i++) {
        if (i == 5) {
            _____;
        }
        printf("%d ", i);
    }
    return 0;
}
```

### 15. 
```c
#include <stdio.h>

/* Função que retorna o dobro de um número */
___ dobro(___ ____) {
    ____ ____ * 2;
}

int main() {
    int valor = 6;
    int resultado = dobro(valor);
    printf("O dobro de %d é %d\n", valor, resultado);
    return 0;
}
```

### 16. 
```c
#include <stdio.h>

int main() {
    /* Use um laço for para imprimir de 1 a 10, mas pule o número 5 */
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            _____;
        }
        printf("%d ", i);
    }
    return 0;
}
```
### 18.
ENTRADA:____________________
SAÍDA:______________________
DEFESA: ____________________

```c
#include <stdio.h>
#include <math.h>

int main (void)
{
	double a, b, c, m = 0;

	scanf("%lf %lf %lf", &a, &b, &c);
	media = ((a * 2) + (b * 3) + (c * 5)) / 10; 
	printf("%.1lf\n", m);
	
	return 0;
}
```

### 19.
ENTRADA:____________________
SAÍDA:______________________
DEFESA: ____________________
```c
#include <stdio.h>
 
int main() {

    int qtd, num, i, j, count;

    scanf("%d", &qtd);

    for (i = 0; i < qtd; i++)
    {
        scanf("%d", &num);
        count = 0;

        for (j = 1; j <= num; j++)
        {
            if(num % j == 0) count++;
        }

        if(count == 2) printf("%d eh \n",num);
        else if (count > 2) printf("%d nao eh \n",num);
    }
    return 0;
}
```

### 20. 
ENTRADA:____________________
SAÍDA:______________________
DEFESA: ____________________

```c
#include <stdio.h>

int main(void) {
	
	int ddd;
	
	scanf("%d",&ddd);

    switch (ddd)
    {
        case 61: printf("Brasilia\n"); break;
		case 71: printf("Salvador\n"); break;
		case 11: printf("Sao Paulo\n"); break;
		case 21: printf("Rio de Janeiro\n"); break;
		case 32: printf("Juiz de Fora\n"); break;
		case 19: printf("Campinas\n"); break;
		case 27: printf("Vitoria\n"); break;
		case 31: printf("Belo Horizonte\n"); break;
		default : printf("DDD nao cadastrado\n");
    }

	return 0;
}
```

### 20. 
ENTRADA:____________________
SAÍDA:______________________
DEFESA: ____________________

```c
#include <stdio.h>
#include <math.h>
 
int main() {
 
    int i, j, count, numX, numY, soma;

    scanf("%d", &count);

    for (i = 0; i < count; i++)
    {
        soma = 0;
        scanf("%d %d", &numX, &numY);

        if (numX > numY) {
            for (j = numY + 1; j < numX; j++) { if (j % 2 != 0) soma += j; }
        }
        else if (numY > numX) {
            for (j = numX + 1; j < numY; j++) { if (j % 2 != 0) soma += j; }
        }
        else soma = 0;

        printf("%d\n", soma);
    }
    
 
    return 0;
}
```
