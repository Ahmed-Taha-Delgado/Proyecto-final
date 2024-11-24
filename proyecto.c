#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int capacidadat_max=60;
int capacidadac_max=40;
int capacidadvag_max=15;
int autobusest_max=5;
int autobusesc_max=2;
int vagonetas_max=4;

int generar_ticket(char *nombre, char *correo, char *telefono, char *destino, int ticket_numero) {
    char nombre_archivo[150];

    sprintf(nombre_archivo, "Tickets/Ticket_%d.txt", ticket_numero);


    FILE *ticket = fopen(nombre_archivo, "w");
    if (ticket == NULL) {
        printf("Error al generar el archivo del ticket.\n");
        return 0;
    }


    fprintf(ticket, "=======================\n");
    fprintf(ticket, "=   TICKET DE VIAJE   =   \n");
    fprintf(ticket, "=======================\n");
    fprintf(ticket, "Nombre: %s", nombre);
    fprintf(ticket, "Correo: %s", correo);
    fprintf(ticket, "Telefono: %s", telefono);
    fprintf(ticket, "Destino: %s\n", destino);
    fprintf(ticket, "=======================\n");

    fclose(ticket);
    printf("Ticket generado: %s\n", nombre_archivo);
    return 0;
}


int destinoCircuitoHistorico(){

  FILE *Historico=fopen("Historico.txt","w");
  if(Historico==NULL){
    puts("Error al abrir el archivo");
    return 1;
  } 
  char matriz[10][6]={
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
  for(int i=0; i<10; i++){
    for(int j=0; j<6; j++){
      fprintf(Historico,"%c", matriz[i][j]);
    }
  fprintf(Historico,"\n");
  } 
  fclose(Historico);

  return 0;
}

int destinoTourGastronomico (){
  
  FILE *Gastronomico=fopen("Gastronomico","w");
  if(Gastronomico==NULL){
    puts("Error al abrir el archivo");
    return 1;
  }
 char matriz[10][6]={
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
  for(int i=0; i<10; i++){
    for(int j=0; j<6; j++){
      fprintf(Gastronomico,"%c", matriz[i][j]);
    }
  fprintf(Gastronomico,"\n");
  } 
  fclose(Gastronomico);

  return 0;
}

int destinoParqueLaMexicana(){
  FILE *Parque=fopen("Parque.txt","w");
  if(Parque==NULL){
    puts("Error al abrir el archivo");
    return 1;
  }
  char matriz[10][6]={
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
 for(int i=0; i<10; i++){
    for(int j=0; j<6; j++){
      fprintf(Parque,"%c", matriz[i][j]);
    }
  fprintf(Parque,"\n");
  } 
  fclose(Parque);

  return 0;
}

int destinoUniversum(){
FILE *Universum=fopen("Universum","w");
  if(Universum==NULL){
    puts("Error al abrir el archivo");
    return 1;
  }
 char matriz[10][6]={
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
  for(int i=0; i<10; i++){
    for(int j=0; j<6; j++){
      fprintf(Universum,"%c", matriz[i][j]);
    }
  fprintf(Universum,"\n");
  } 
  fclose(Universum);

  return 0;
}

int destinoPuebla(){
  FILE *Puebla=fopen("Puebla.txt","w");
if(Puebla==NULL){
  puts("Error al abrir el archivo");
}
  char matriz [10][4]={
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'}
    
  };
  for(int i=0; i<10; i++){
    for(int j=0; j<4; j++){
      fprintf(Puebla,"%c", matriz[i][j]);
    }
  fprintf(Puebla,"\n");
  } 
  fclose(Puebla);

  return 0;
}

int destinoQueretaro(){
  FILE *Queretaro=fopen("Queretaro.txt","w");
if(Queretaro==NULL){
  puts("Error al abrir el archivo");
}
  char matriz [10][4]={
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'}
    
  };
  for(int i=0; i<10; i++){
    for(int j=0; j<4; j++){
      fprintf(Queretaro,"%c", matriz[i][j]);
    }
  fprintf(Queretaro,"\n");
  } 
  fclose(Queretaro);

  return 0;
}

int destinoHidalgo(){
  FILE *Hidalgo=fopen("Hidalgo.txt","w");
  if(Hidalgo==NULL){
    puts("Error al abrir el archivo");
    return 1;
  }
  char matriz [10][4]={
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'},
    {'L', 'L','L', 'L'}
    
  };
  for(int i=0; i<10; i++){
    for(int j=0; j<4; j++){
      fprintf(Hidalgo,"%c", matriz[i][j]);
    }
  fprintf(Hidalgo,"\n");
  } 
  fclose(Hidalgo);
  return 0;
}

int destinoTepotzotlan(){
  FILE *Tepotzotlan=fopen("Tepotzotlan.txt","w");
  if(Tepotzotlan==NULL){
    puts("Error al abrir el archivo");
  return 1;
  }
   char matriz[5][3] = {
    {'L','L','L'},
    {'L','L','L'},
    {'L','L','L'},
    {'L','L','L'},
    {'L','L','L'}

    };
    
    for(int i=0; i<10; i++){
    for(int j=0; j<6; j++){
      fprintf(Tepotzotlan,"%c", matriz[i][j]);
    }
  fprintf(Tepotzotlan,"\n");
  } 
  fclose(Tepotzotlan);
  return 0;
}

int destinoValleDelBravo(){
  FILE *Valle=fopen("Valle.txt","w");
if(Valle==NULL){
  puts("Error al abrir el archivo");
  return 1;
}
   char matriz[4][2] = {
    {'L','L','L'},
    {'L','L','L'},
    {'L','L','L'},
    {'L','L','L'},
    {'L','L','L'}

    };
    
    for(int i=0; i<10; i++){
    for(int j=0; j<6; j++){
      fprintf(Valle,"%c", matriz[i][j]);
    }
  fprintf(Valle,"\n");
  } 
  fclose(Valle);
  return 0;
}
  
  




int main() {
    char Tipo;
    char destino[100];
    char nombre[100], correo[100], telefono[15];
    int op, ticket_numero = 1;
    int continuar = 1;


    mkdir("Tickets", 0777);

    puts("Bienvenido a la compañia TravelBus");
    puts("Explora nuestras opciones de viajes y reserva en minutos\n");

    while (continuar) {
 
        printf("...[Registro del usuario]...\n");
        printf("Ingrese su nombre completo: ");
        getchar(); 
        fgets(nombre, sizeof(nombre), stdin);
        printf("Ingrese su correo electronico: ");
        fgets(correo, sizeof(correo), stdin);
        printf("Ingrese su numero de telefono: ");
        fgets(telefono, sizeof(telefono), stdin);

     
        puts("Estos son nuestros viajes disponibles:\n");
        puts("a) Viajes turisticos:");
        puts("b) Viajes nacionales:");
        puts("c) Pueblos mágicos:");
        puts("Selecciona una letra");
        scanf(" %c", &Tipo);

        switch (Tipo) {
             case 'a':
        puts("¿A que destino deseas ir?");
        puts("1.-Circuito Historico");
        puts("2.-Tour Gastronómico");
        puts("3.-Parque 'La MexicanA'");
        puts("4.-Universum\n");
        scanf("%i",&op);
        if (op == 1){ 
          strcpy(destino, "Circuito Historico");
        }else
        if (op == 2){ 
          strcpy(destino, "Tour Gastronomico");
        }else
        if (op == 3){ 
          strcpy(destino, "Parque 'La MexicanA'");
        }else
        if (op == 4){ 
          strcpy(destino, "Universum");
        }
        break;

        puts("¿A que destino deseas ir?");
        puts("1.-CDMX-Puebla");
        puts("2.-CDMX-Queretaro");
        puts("3.-CDMX-Hidalgo\n");
        scanf("%i",&op);
        if (op == 1){ 
          strcpy(destino, "CDMX-Puebla");
        }else
        if (op == 2){ 
          strcpy(destino, "CDMX-Queretaro");
        }else
        if (op == 3){ 
          strcpy(destino, "CDMX-Hidalgo");    
        
        }
        break;
        

        case 'c':
        puts("¿A que destino deseas ir?");
        puts("1.-CDMX-Tepoztzotlán");
        puts("2.-CDMX-Valle de Bravo");
        scanf("%i",&op);
          if (op == 1){ 
          strcpy(destino, "CDMX-Tepoztzotlan");
        }else
        if (op == 2){ 
          strcpy(destino, "CDMX-Valle de Bravo");  
          
        }
        break;

      default:
          puts("Ingresa alguna de esas opciones a, b, c");
        
        break;
  }

        if (strlen(destino) > 0) {
            generar_ticket(nombre, correo, telefono, destino, ticket_numero);
            ticket_numero++;
        } 

        printf("¿Desea hacer otra reservación? (1: Sí, 0: No): ");
        scanf("%d", &continuar);
    }

    printf("Gracias por usar TravelBus. ¡Buen viaje!\n");
    return 0;
}