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

int tepotzotlan(){
  for(int i=0;i<5;i++){
    for(int j=0;j<3;j++){
        printf("%c",matriz[i][j]);
    }
    printf("\n");
  }
  
  puts("Ingresa la fila que deseas apartar (1-5)");
  scanf("%d",&F);
  puts("Ingresa la columna que deseas apartar (1-3)");
  scanf("%d",&C);
  
  F=F-1;
  C=C-1;
  if(matriz[F][C]=='O'){
    puts("El asiento ya esta ocupado");
    printf("¿Deseas continuar con la reserva? (Y/N)\n");
    getchar();
    scanf("%c",&s);
    if (s==Y || s==y){
      destinoTepotzotlan();
    }else{
      printf("Muchas gracias por considerar viajar con nosotros.\n Hasta luego.");
      system("exit");
    }

  }else{
    if(F<5 && F>=0 && C<3 && C>=0){
        puts("Su asiento ha sido reservado\n")
        matriz[F][C]= 'O';

    }else{ 
      puts("EL numero de filas o columnas esta mal ingresado");
      printf("¿Deseas continuar con la reserva? (Y/N)\n");
      getchar();
      scanf("%c",&s);
      if (s==Y || s==y){
        destinoTepotzotlan();
      }else{
        printf("Muchas gracias por considerar viajar con nosotros.\n Hasta luego.");
        system("exit");
      }
    }
  }

  for(int i=0;i<5;i++){
    for(int j=0;j<3;j++){
        printf("%c",matriz[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}

int valledebravo(){
  for(int i=0;i<5;i++){
    for(int j=0;j<3;j++){
        printf("%c",matriz[i][j]);
    }
    printf("\n");
  }
  
  puts("Ingresa la fila que deseas apartar (1-5)");
  scanf("%d",&F);
  puts("Ingresa la columna que deseas apartar (1-3)");
  scanf("%d",&C);
  
  F=F-1;
  C=C-1;
  if(matriz[F][C]=='O'){
    puts("El asiento ya esta ocupado");
    printf("¿Deseas continuar con la reserva? (Y/N)\n");
    getchar();
    scanf("%c",&s);
    if (s==Y || s==y){
      destinoValleDelBravo();
    }else{
      printf("Muchas gracias por considerar viajar con nosotros.\n Hasta luego.\n");
      system("exit");
    }

  }else{
    if(F<5 && F>=0 && C<3 && C>=0){
        puts("Su asiento ha sido reservado\n")
        matriz[F][C]= 'O';

    }else{ 
      puts("EL numero de filas o columnas esta mal ingresado");
      printf("¿Deseas continuar con la reserva? (Y/N)\n");
      getchar();
      scanf("%c",&s);
      if (s==Y || s==y){
        destinoValleDelBravo();
      }else{
        printf("Muchas gracias por considerar viajar con nosotros.\n Hasta luego.\n");
        system("exit");
      }
    }
  }

  for(int i=0;i<5;i++){
    for(int j=0;j<3;j++){
        printf("%c",matriz[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}


}


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
 for(i=0; i<10; i++){
  for(j=0; j<6; j++){
    printf("%c", matriz[i][j]);
  }

 }
}
int destinoTourGastronmico (){
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
 
}
int destinoParqueLaMexicana(){
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
}

int destinoQueretaro(){
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
}

int destinoHidalgo(){
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
}

int destinoTepotzotlan(){
    int F, C;
    char s;
    char Y='Y';
    char y='y';
   char matriz[5][3] = {
    {'L','L','L'},
    {'L','L','L'},
    {'L','L','L'},
    {'L','L','L'},
    {'L','L','L'}

    };
    

}

int destinoValleDelBravo(){
   char matriz[4][2] = {
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

  registro();
  
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
      switch (op)
      {
      case 1:
        puts("Usted eligió Circuito Historico");
        
        break;
      
      default:
        break;
      }
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
