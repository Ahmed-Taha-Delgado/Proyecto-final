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

int registro(){

  FILE *file = fopen("Registro de Usuarios.txt", "w");
    if (file == NULL){
      printf("Error al abrir el archivo. \n");
    }
    
      char nombre[100];
      char correo[100];
      char telefono[15];
  
  printf("...[Registro del usuario]...\n");
  printf("Ingrese su nombre completo: ");
  fgets(nombre, sizeof(nombre), stdin);
  printf("Ingrese su correo electronico: ");
  fgets(correo, sizeof(correo), stdin);
  printf("Ingrese su numero de telefono: ");
  fgets(telefono, sizeof(telefono), stdin);
  
  fprintf(file, "Nombre: %s", nombre);
  fprintf(file, "Correo: %s", correo);
  fprintf(file, "Telefono: %s", telefono);
  fclose(file);
  printf("Su registro se ha concretado\n");
  
  
  return 0;
}




int destinoCircuitoHistorico(){
 char matriz[10][7]={
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}
      };
 
}
int destinoTourGastronmico (){
 char matriz[10][7]={
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}
      };
 
}
int destinoParqueLaMexicana(){
 char matriz[10][7]={
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}
      };
 
}
int destinoUniversum(){
 char matriz[10][7]={
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}, 
        {'L', 'L', 'L', ' ', 'L', 'L', 'L'}
      };
 
}

int destinoPuebla(){
  char matriz [10][5]={
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'}
    
  };
}

int destinoQueretaro(){
  char matriz [10][5]={
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'}
    
  };
}

int destinoHidalgo(){
  char matriz [10][5]={
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'},
    {'L', 'L',' ','L', 'L'}
    
  };
}

int destinoTepotzotlan(){
   char matriz[5][3] = {
    {'L','L','L'},
    {'L','L','L'},
    {'L','L','L'},
    {'L','L','L'},
    {'L','L','L'}

    };
   
  return 0;
}

int destinoValleDelBravo(){
   char matriz[5][3] = {
    {'L','L','L'},
    {'L','L','L'},
    {'L','L','L'},
    {'L','L','L'},
    {'L','L','L'}

    };

    
   
  return 0;
}


int main(){
  char Tipo;

  puts("Bienvenido a la compañia TravelBus");
  puts("Explora nuestras opciones de viajes y reserva en minutos\n");
  puts("¿Desea hacer una reservacion?");
  puts("Presiona Enter para continuar");
  getchar();

  puts("Ingresa tu nombre completo");
  scanf("%s",nombre);
  
  puts("Ingresa tu correo electronico");
  scanf("%s",correo);
  
  puts("Estos son nuestros viajes disponibles:\n");
  puts("a) Viajes turisticos:");
  puts("b) Viajes nacionales:");
  puts("c) Pueblos mágicos:");
  puts("Selecciona una letra");
  scanf("%c",&Tipo);
  


  switch (Tipo){
    case a:
      puts("¿A que destino deseas ir?");
      puts("1.-Circuito Historico");
      puts("2.-Tour Gastronómico");
      puts("3.-Parque "La Mexicana"");
      puts("4.-Universum\n");
      scanf("%i",&op);
      break;

    case b:
      puts("¿A que destino deseas ir?");
      puts("1.-CDMX-Puebla");
      puts("2.-CDMX-Queretaro");
      puts("3.-CDMX-Hidalgo\n");
      break;
      
    case c:
      puts("¿A que destino deseas ir?");
      puts("1.-CDMX-Tepoztzotlán");
      puts("2.-CDMX-Valle de Bravo");
      break;

    default:
        puts("Ingresa alguna de esas opciones");
      break;
  }


  switch (Destino)
  {
    case CDMX:
        int destinoCDMX;
        if (){
        
        }
    break;

    case Nacionales:
          
    break;
        
    case Pueblos Mágicos:
          
    break;
   
     default:
      printf("EL autobus que busca no es del tipo que la empresa tiene");
  }

  return 0;
}



