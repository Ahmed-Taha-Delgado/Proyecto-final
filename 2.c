#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

char matrizHistorico[10][6] = {
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'}
};

char matrizGastronomico[10][6] = {
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'}
};

char matrizParque[10][6] = {
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'}
};

char matrizUniversum[10][6] = {
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L', 'L', 'L'}
};

char matrizPuebla[10][4] = {
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'}
};

char matrizQueretaro[10][4] = {
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'}
};

char matrizHidalgo[10][4] = {
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'},
    {'L', 'L', 'L', 'L'}
};

char matrizTepotzotlan[5][3] = {
    {'L', 'L', 'L'},
    {'L', 'L', 'L'},
    {'L', 'L', 'L'},
    {'L', 'L', 'L'},
    {'L', 'L', 'L'}
};

char matrizValle[5][3] = {
    {'L', 'L', 'L'},
    {'L', 'L', 'L'},
    {'L', 'L', 'L'},
    {'L', 'L', 'L'},
    {'L', 'L', 'L'}
};

int cargarMatrizDesdeArchivo(char *nombreArchivo, char matriz[][6], int filas, int columnas) {
    FILE *archivo = fopen(nombreArchivo, "r");
    if (archivo == NULL) {
        return 1;
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            fscanf(archivo, " %c", &matriz[i][j]);
        }
    }

    fclose(archivo);
    return 0;
}

int elegirAsiento(char matriz[][6], int filas, int columnas, int *filaSeleccionada, int *columnaSeleccionada) {
    int fila, columna;
    do {
        printf("Seleccione un asiento (fila y columna):\n");
        printf("Fila (1-%d): ", filas);
        scanf("%d", &fila);
        printf("Columna (1-%d): ", columnas);
        scanf("%d", &columna);
        fila--;
        columna--;

        if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
            if (matriz[fila][columna] == 'L') {
                matriz[fila][columna] = 'O';
                printf("Asiento reservado correctamente.\n");
                *filaSeleccionada = fila + 1;
                *columnaSeleccionada = columna + 1;
                return 0;
            } else {
                printf("El asiento ya está ocupado. Elija otro.\n");
            }
        } else {
            printf("Asiento inválido. Intente de nuevo.\n");
        }
    } while (1);
    return 0;
}

int escribirMatrizArchivo(const char *nombreArchivo, char matriz[][6], int filas, int columnas) {
    FILE *archivo = fopen(nombreArchivo, "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo %s.\n", nombreArchivo);
        return 1;
    }
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            fprintf(archivo, "%c", matriz[i][j]);
        }
        fprintf(archivo, "\n");
    }
    fclose(archivo);
    return 0;
}

int generarTicket(char *nombre, char *correo, char *telefono, char *destino, int fila, int columna, int ticket_numero) {
    char nombre_archivo[150];
    sprintf(nombre_archivo, "Tickets/Ticket_%d.txt", ticket_numero);

    FILE *ticket = fopen(nombre_archivo, "w");
    if (ticket == NULL) {
        printf("Error al generar el archivo del ticket.\n");
        return 1;
    }

    fprintf(ticket, "=======================\n");
    fprintf(ticket, "=   TICKET DE VIAJE   =\n");
    fprintf(ticket, "=======================\n");
    fprintf(ticket, "Nombre: %s\n", nombre);
    fprintf(ticket, "Correo: %s\n", correo);
    fprintf(ticket, "Teléfono: %s\n", telefono);
    fprintf(ticket, "Destino: %s\n", destino);
    fprintf(ticket, "Asiento: Fila %d, Columna %d\n", fila, columna);
    fprintf(ticket, "Número de Ticket: %d\n", ticket_numero);
    fprintf(ticket, "=======================\n");

    fclose(ticket);
    printf("Ticket generado con éxito: %s\n", nombre_archivo);
    return 0;
}

int main() {
    char nombre[100], correo[100], telefono[15];
    char destino[100];
    int op, ticket_numero = 1;
    int continuar = 1;
    char tipo;
    int filaSeleccionada, columnaSeleccionada;

    mkdir("Tickets", 0777);

    cargarMatrizDesdeArchivo("Historico.txt", matrizHistorico, 10, 6);
    cargarMatrizDesdeArchivo("Gastronomico.txt", matrizGastronomico, 10, 6);
    cargarMatrizDesdeArchivo("Parque.txt", matrizParque, 10, 6);
    cargarMatrizDesdeArchivo("Universum.txt", matrizUniversum, 10, 6);
    cargarMatrizDesdeArchivo("Puebla.txt", matrizPuebla, 10, 4);
    cargarMatrizDesdeArchivo("Queretaro.txt", matrizQueretaro, 10, 4);
    cargarMatrizDesdeArchivo("Hidalgo.txt", matrizHidalgo, 10, 4);
    cargarMatrizDesdeArchivo("Tepotzotlan.txt", matrizTepotzotlan, 5, 3);
    cargarMatrizDesdeArchivo("Valle.txt", matrizValle, 5, 3);

    puts("Bienvenido a la compañía TravelBus");
    puts("Explora nuestras opciones de viajes y reserva en minutos\n");

    while (continuar) {
        printf("...[Registro del usuario]...\n");
        printf("Ingrese su nombre completo: ");
        getchar();
        fgets(nombre, sizeof(nombre), stdin);
        printf("Ingrese su correo electrónico: ");
        fgets(correo, sizeof(correo), stdin);
        printf("Ingrese su número de teléfono: ");
        fgets(telefono, sizeof(telefono), stdin);

        puts("Estos son nuestros viajes disponibles:\n");
        puts("a) Viajes turísticos:");
        puts("b) Viajes nacionales:");
        puts("c) Pueblos mágicos:");
        printf("Selecciona una letra: ");
        scanf(" %c", &tipo);

        switch (tipo) {
        case 'a':
            puts("¿A qué destino deseas ir?");
            puts("1.- Circuito Histórico");
            puts("2.- Tour Gastronómico");
            puts("3.- Parque 'La Mexicana'");
            puts("4.- Universum\n");
            scanf("%i", &op);
            if (op == 1) {
                strcpy(destino, "Circuito Histórico");
                elegirAsiento(matrizHistorico, 10, 6, &filaSeleccionada, &columnaSeleccionada);
                escribirMatrizArchivo("Historico.txt", matrizHistorico, 10, 6);
            } else if (op == 2) {
                strcpy(destino, "Tour Gastronómico");
                elegirAsiento(matrizGastronomico, 10, 6, &filaSeleccionada, &columnaSeleccionada);
                escribirMatrizArchivo("Gastronomico.txt", matrizGastronomico, 10, 6);
            } else if (op == 3) {
                strcpy(destino, "Parque 'La Mexicana'");
                elegirAsiento(matrizParque, 10, 6, &filaSeleccionada, &columnaSeleccionada);
                escribirMatrizArchivo("Parque.txt", matrizParque, 10, 6);
            } else if (op == 4) {
                strcpy(destino, "Universum");
                elegirAsiento(matrizUniversum, 10, 6, &filaSeleccionada, &columnaSeleccionada);
                escribirMatrizArchivo("Universum.txt", matrizUniversum, 10, 6);
            }
            break;

        case 'b':
            puts("¿A qué destino deseas ir?");
            puts("1.- CDMX-Puebla");
            puts("2.- CDMX-Querétaro");
            puts("3.- CDMX-Hidalgo\n");
            scanf("%i", &op);
            if (op == 1) {
                strcpy(destino, "CDMX-Puebla");
                elegirAsiento(matrizPuebla, 10, 4, &filaSeleccionada, &columnaSeleccionada);
                escribirMatrizArchivo("Puebla.txt", matrizPuebla, 10, 4);
            } else if (op == 2) {
                strcpy(destino, "CDMX-Querétaro");
                elegirAsiento(matrizQueretaro, 10, 4, &filaSeleccionada, &columnaSeleccionada);
                escribirMatrizArchivo("Queretaro.txt", matrizQueretaro, 10, 4);
            } else if (op == 3) {
                strcpy(destino, "CDMX-Hidalgo");
                elegirAsiento(matrizHidalgo, 10, 4, &filaSeleccionada, &columnaSeleccionada);
                escribirMatrizArchivo("Hidalgo.txt", matrizHidalgo, 10, 4);
            }
            break;

        case 'c':
            puts("¿A qué destino deseas ir?");
            puts("1.- CDMX-Tepotzotlán");
            puts("2.- CDMX-Valle de Bravo");
            scanf("%i", &op);
            if (op == 1) {
                strcpy(destino, "CDMX-Tepotzotlán");
                elegirAsiento(matrizTepotzotlan, 5, 3, &filaSeleccionada, &columnaSeleccionada);
                escribirMatrizArchivo("Tepotzotlan.txt", matrizTepotzotlan, 5, 3);
            } else if (op == 2) {
                strcpy(destino, "CDMX-Valle de Bravo");
                elegirAsiento(matrizValle, 5, 3, &filaSeleccionada, &columnaSeleccionada);
                escribirMatrizArchivo("Valle.txt", matrizValle, 5, 3);
            }
            break;

        default:
            puts("Ingresa alguna de esas opciones (a, b, c)");
            break;
        }

        if (strlen(destino) > 0) {
            generarTicket(nombre, correo, telefono, destino, filaSeleccionada, columnaSeleccionada, ticket_numero);
            ticket_numero++;
        }

        printf("¿Desea hacer otra reservación? (1: Sí, 0: No): ");
        scanf("%d", &continuar);
    }

    printf("Gracias por usar TravelBus. ¡Buen viaje!\n");
    return 0;
}