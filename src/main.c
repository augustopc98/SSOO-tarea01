#include <global.hh>

#include <unistd.h> 

// Author : Augusto Ignacio Pinochet Contreras , RUT: 19.619.383-9.

void ignore_signal(int sig) // Funcion que ignora la señal del primer ctrl + c ejecutado en la terminal.
{
    printf("\n");
    signal(SIGINT, SIG_DFL); //Señal de ctrl + c manejada.
    
    
}

void s_manejador(int signal) //Funcion que entrega informacion del tiempo local del computador. 
{
    time_t tiempo_r;  // Tiempo de calendario.
    struct tm * tiempo_sistema; // Struct donde se almacena tiempo y fecha.
    time (&tiempo_r); 
    tiempo_sistema = localtime (&tiempo_r); // Esta funcion toma la hora actual en tics de reloj y devuelve un puntero a estructura tiempo_sistema.
	
   if (signal == SIGUSR1) { // Condicion que evalua si se recibe la señal SIGUSR1.
       printf("Señal SIGUSR1 recibida: %s", asctime(tiempo_sistema)); // Muestra en consola el tiempo en que fue emitida la señal.
   }



int main(int argc, char *argv[]){
    
    
    printf("Programa hora ejecutandose. PID=%d.\n", getpid()); // getpid() muestra el proceso.
    printf("Listo para recibir la señal SIGUSR1.\n"); 
    signal(SIGINT, ignore_signal);	// Se toma el ctrl + c con el metodo ignore_signal.
    
    
    while(1) {
	
        signal(SIGUSR1, s_manejador); // Invoca funcion manejador para la obtencion del tiempo del sistema.
        pause(); // Funcion que deja en espera el programa hasta que se detecte una señal.
	     
	}
      
    return(EXIT_SUCCESS);
    
