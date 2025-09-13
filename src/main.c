#include <stdio.h>
#include <stdlib.h>

//struct principal del juego
typedef struct {
    char pregunta[200];
    char opciones[4][100];
    int respuestaCorrecta; // índice de 0 a 3
} Pregunta;

int main() {
    // Preguntas
    Pregunta preguntas[] = {
        {
            "El área de un círculo es 154 cm². Si π=3,14, ¿cuál es su radio aproximado?",
            {"6 cm", "14 cm", "12 cm", "7 cm"},
            3
        },
        {
            "La recta y=3x+2 corta al eje x en:",
            {"(0, 2)", "(2/3, 0", "(-2/3, 0)", "(0, -2)"},
            2
        },
        {
            "El precio de un producto aumenta un 20 % y luego disminuye un 10 %. Si el precio inicial era $10000, ¿cuál es el precio final?",
            {"$10 800", "$10 000", "$10 200", "$11 000"},
            0
        },
        {
            "Si f(x)=2x^2-3x+1, entonces f(-2) es:",
            {"15", "19", "11", "9"},
            0
        },
    };

    int totalPreguntas = sizeof(preguntas) / sizeof(preguntas[0]);
    int puntaje = 0;
    int respuestaUsuario;

    printf("=== Bienvenido a DuoMath ===\n\n");

    for (int i = 0; i < totalPreguntas; i++) {
        printf("Pregunta %d: %s\n", i + 1, preguntas[i].pregunta);

        for (int j = 0; j < 4; j++) {
            printf("  %d) %s\n", j + 1, preguntas[i].opciones[j]);
        }

        printf("Selecciona la opción correcta (1-4): ");
        scanf("%d", &respuestaUsuario);

        if (respuestaUsuario - 1 == preguntas[i].respuestaCorrecta) {
            printf("✅ Correcto!\n\n");
            puntaje++;
        } else {
            printf("❌ Incorrecto. La respuesta correcta era: %s\n\n",
                   preguntas[i].opciones[preguntas[i].respuestaCorrecta]);
        }
    }

    printf("Has terminado!\n");
    printf("Puntaje final: %d/%d\n", puntaje, totalPreguntas);

    if (puntaje == totalPreguntas)
        printf("🎉 ¡Excelente trabajo!\n");
    else if (puntaje > totalPreguntas / 2)
        printf("😊 ¡Buen intento!\n");
    else
        printf("💡 Necesitas practicar más.\n");

    return 0;
}
