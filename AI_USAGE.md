# IA utilizado
Se utilizó la IA chatgpt para desarrollar preguntas tipo PAES y para ayudar con el formato del structs de las preguntas.

## Preguntas
- Prompt: genera preguntas tipo paes de matemática
- Obtenido: Preguntas tipo PAES (ejemplos)

El precio de un producto aumenta un 20 % y luego disminuye un 10 %. Si el precio inicial era $10000, ¿cuál es el precio final?

A) $10 800

B) $10 000

C) $10 200

D) $11 000
✅ Respuesta correcta: A) $10 800

Si 
𝑓(𝑥)=2𝑥2−3𝑥+1 f(x)=2x 2−3x+1, entonces 𝑓(−2)f(−2) es:

A) 15

B) 19

C) 11

D) 9
✅ Respuesta correcta: A) 15

En un curso 60 % son mujeres y de ellas 25 % son zurdas. Si el curso tiene 40 estudiantes, ¿cuántas son mujeres zurdas?

A) 6

B) 10

C) 15

D) 20
✅ Respuesta correcta: A) 6

El área de un círculo es 154 cm². Si π=3,14, ¿cuál es su radio aproximado?

A) 7 cm

B) 14 cm

C) 12 cm

D) 6 cm
✅ Respuesta correcta: A) 7 cm

La recta 
𝑦=3𝑥+2y=3x+2 corta al eje x en:

A) (-2/3, 0)

B) (0, 2)

C) (2/3, 0)

D) (0, -2)
✅ Respuesta correcta: A) (-2/3, 0)

- Prompt:crear un programa en c  que tenga problemas matematicos  para que el usuario resuelva con opciones para seleccionar la correcta
- Obtenido: #include <stdio.h>
#include <stdlib.h>

typedef struct {
    char pregunta[200];
    char opciones[4][100];
    int respuestaCorrecta; // índice de 0 a 3
} Pregunta;

int main() {
    // Base de datos de preguntas
    Pregunta preguntas[] = {
        {
            "¿Cuál es la derivada de 3x^3?",
            {"9x^2", "3x^2", "x^3", "6x"},
            0
        },
        {
            "Si log_a(b)=c, entonces b es igual a:",
            {"a^c", "c^a", "a/c", "c*a"},
            0
        },
        {
            "Integral de 2x dx:",
            {"x^2 + C", "2x^2 + C", "x^3 + C", "ln|x| + C"},
            0
        },
        {
            "Resolver: 2^(x)=8",
            {"x=2", "x=3", "x=4", "x=8"},
            1
        },
        {
            "Límite de (sin x)/x cuando x→0",
            {"0", "1", "Infinito", "No existe"},
            1
        }
    };

    int totalPreguntas = sizeof(preguntas) / sizeof(preguntas[0]);
    int puntaje = 0;
    int respuestaUsuario;

    printf("=== Bienvenido a MathDuolingo ===\n\n");

    for (int i = 0; i < totalPreguntas; i++) {
        printf("Pregunta %d: %s\n", i + 1, preguntas[i].pregunta);

        for (int j = 0; j < 4; j++) {
            printf("  %d) %s\n", j + 1, preguntas[i].opciones[j]);
        }

        printf("Selecciona la opción correcta (1-4): ");
        scanf("%d", &respuestaUsuario);

        if (respuestaUsuario - 1 == preguntas[i].respuestaCorrecta) {
            printf("Correcto!\n\n");
            puntaje++;
        } else {
            printf("Incorrecto. La respuesta correcta era: %s\n\n",
                   preguntas[i].opciones[preguntas[i].respuestaCorrecta]);
        }
    }

    printf("Has terminado!\n");
    printf("Puntaje final: %d/%d\n", puntaje, totalPreguntas);

    if (puntaje == totalPreguntas)
        printf("¡Excelente trabajo!\n");
    else if (puntaje > totalPreguntas / 2)
        printf("¡Buen intento!\n");
    else
        printf("Necesitas practicar más.\n");

    return 0;
}
