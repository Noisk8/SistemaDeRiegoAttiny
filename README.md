# SistemaDeRiegoAttiny
cahcharreo en la jaquer es cool 2015

27 JUNIO 2015 

Regador de plantas con   con attiny 45 

Programación en  arduino 


 nos basamos en este tutorial para la programacion del microcontrolador Attiny 45,  http://highlowtech.org/?p=1706

Necesitamos  el software de aurduino y la libreria  para programar  el micrcontrolador attiny 45 
http://highlowtech.org/?p=1695


en esta ocasión utilizamos 

un arduino uno
Un microcontrolador attiny 45
Un potenciometro  de 5  k
Una protoboard 
cables para hacer conexiones entre arduino y la protoboard  
un led (si para simular la electroválvula)
2 tornillos 
2 cables de 1mt 

podemos arrancar con instalar la librería después de descargarla, descomprimimos la carpeta y la metemos en el archivador de datos del arduino en la carpeta hardware, en otras ocasiones es en el sketchbook que crea arduino en la carpeta de documentos. 



nosotros cogemos un ejemplo de blink  y alteramos  el codigo a partir de lo que necesitamos, en este caso una configuración para  tres sensores de humedad 
  nos basamos en esta imagen, pero ignoramos la fotoresistencia y simulamos que  son los dos tornillos con  con el cable. 


 
para  el sensor de humedad lo HIcimos un con dos cables de sonido, aderidos a dos tornillos, al otro lado del cable va la conexion que debe ser puesta a la entrada analoga del microcontolador,  en este caso el pin 7.   
 con una resistencia   de 100k funciono , pero debemos ubicar una variable que nos de el punto exacto  que elijamos, (donde  consideremos que el estado de la tierra esta en las condiciones excatads para ser hidratada) por eso  posteriormente   intentamos con una resistencia variable (potenciometro de 10k )(probablemente funcione mejor con uno de 5 k  
 asi ubicamos el punto  

Para conectar el relevo de 5 voltios se 

