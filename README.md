# SSOO-tarea01
AUGUSTO PINOCHET CONTRERAS RUT: 19.619.383-9

Se solitica realizar un programa que:
	- Muestre el proceso actual del sistema.
	- Mostrar el tiempo en el cual se envia una señal de interrupcion al proceso actual.

Para esto se necesita las siguientes librerias:
	- time.h relacionado con formato de hora y fecha es un archivo de cabecera de la biblioteca estándar del lenguaje de programación C que 		contiene funciones para manipular y formatear la fecha y hora del sistema.
	- signal.h el cual contiene la definición de todas las señales. La ubicación definitiva de las señales depende del sistema operativo de su 	 máquina.
	
El programa mostrara en pantalla que necesita una señal llamada SIGUSR1(una señal especifica para ser usada por el usuario en el programa.), una vez enviada la señal y tomada por nuestro metodo handler, esta se mostrara en pantalla con la fecha y hora exacta en la cual se envio la señal, luego mediante otra funcion, tendremos que el primer ctrl+c sera ignorado hasta que se ingrese el siguiente ctrl+c donde se detendra el programa ejectuado. 
