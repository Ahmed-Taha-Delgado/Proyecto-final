#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

char matriz[10][6] = {
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

void cargarEstadoMatriz(char *nombreArchivo, int filas, int columnas) {
    FILE *archivo = fopen(nombreArchivo, "r");
    if (archivo == NULL) {
        printf("No se encontró el archivo de estado. Usando matriz vacía.\n");
        return;
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            fscanf(archivo, " %c", &matriz[i][j]);
        }
    }
    fclose(archivo);
    printf("Estado de la matriz cargado correctamente.\n");
}

void guardarEstadoMatriz(char *nombreArchivo, int filas, int columnas) {
    FILE *archivo = fopen(nombreArchivo, "w");
    if (archivo == NULL) {
        printf("Error al guardar el estado de la matriz.\n");
        return;
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            fprintf(archivo, "%c ", matriz[i][j]);
        }
        fprintf(archivo, "\n");
    }
    fclose(archivo);
    printf("Estado de la matriz guardado correctamente.\n");
}

int elegirAsiento(int filas, int columnas, int *filaSeleccionada, int *columnaSeleccionada) {
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
                break;
            } else {
                printf("El asiento ya está ocupado. Elija otro.\n");
            }
        } else {
            printf("Asiento inválido. Intente de nuevo.\n");
        }
    } while (1);
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
    fprintf(ticket, "Nombre: %s", nombre);
    fprintf(ticket, "Correo: %s", correo);
    fprintf(ticket, "Teléfono: %s", telefono);
    fprintf(ticket, "Destino: %s\n", destino);
    fprintf(ticket, "Asiento: Fila %d, Columna %d\n", fila, columna);
    fprintf(ticket, "=======================\n");

    fclose(ticket);
    printf("Ticket generado: %s\n", nombre_archivo);
    return 0;
}

int main() {
    char nombre[100], correo[100], telefono[15];
    char destino[100];
    int op, ticket_numero = 1;
    int continuar = 1;
    char tipo;
    int filaSeleccionada, columnaSeleccionada;
    char archivoMatriz[] = "estado_matriz.txt";

    mkdir("Tickets", 0777);

    cargarEstadoMatriz(archivoMatriz, 10, 6);

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

        if (tipo == 'a') {
            strcpy(destino, "Viaje turístico");
        } else if (tipo == 'b') {
            strcpy(destino, "Viaje nacional");
        } else if (tipo == 'c') {
            strcpy(destino, "Pueblo mágico");
        } else {
            puts("Opción inválida.");
            continue;
        }

        elegirAsiento(10, 6, &filaSeleccionada, &columnaSeleccionada);

        if (strlen(destino) > 0) {
            generarTicket(nombre, correo, telefono, destino, filaSeleccionada, columnaSeleccionada, ticket_numero);
            ticket_numero++;
        }

        printf("¿Desea hacer otra reservación? (1: Sí, 0: No): ");
        scanf("%d", &continuar);
    }

    guardarEstadoMatriz(archivoMatriz, 10, 6);

    printf("Gracias por usar TravelBus. ¡Buen viaje!\n");
    return 0;
}