# clase-07

martes 26 abril 2022, presencial

## repaso clase anterior y programa hoy (15 min)

la clase pasada fue cancelada, pero la anterior aprendimos:

* botón pulsador
* delay() y maneras de evitarlo
* potenciómetro
* PWM

hoy aprenderemos:

* sonido
* diseño de sintetizadores
* protocolo MIDI

## sonido (45 min)

el sonido es una perturbación de la presión atmósferica, que nuestros oídos son capaces de escuchar.

usaremos nuestro microcontrolador Arduino para generar voltajes que pueden ser alimentados a un parlante, para así transducir energía eléctrica en mecánica y con esto generar sonido.

en este curso usaremos un parlante pequeño, típico en usos de proyectos de electrónica para principiantes como este [https://www.adafruit.com/product/1891]
(https://www.adafruit.com/product/1891).

en particular, usamos un parlante de 8 Ohm y de 0.25 W de potencia. les soldé cables cables de distintos colores para señalizar los terminales positivos y negativos.

esta es la vista frontal del parlante.

![parlante frente](./imagenes/00-parlante-frente.jpg "parlante frente")

y esta es la vista trasera donde se ven sus especificaciones eléctricas.

![parlante atrás](./imagenes/01-parlante-atras.jpg "parlante atrás")

para probar el funcionamiento de nuestro parlante, conectaremos el parlante a nuestro Arduino, primero a tierra. 

![parlante tierra](./imagenes/02-parlante-tierra.jpg "parlante tierra")

y después al pin 8 digital, en el lado derecho del Arduino.

![parlante pin](./imagenes/03-parlante-pin.jpg "parlante pin")

para que se vea así.

![parlante conexión](./imagenes/04-parlante-conexion.jpg "parlante conexión")

subimos el código [ej_00_probar_parlante/](./ej_00_probar_parlante/) para probar el funcionamiento. este código solamente emite sonido durante setup(), no en loop().

para poder volver a escuchar el sonido, conectar y desconectar el cable USB, o presionar el botón rojo para reiniciar.

probemos cambiando la frecuencia, encontrar el menor y mayor número de frecuencia que podemos escuchar.

en el ejemplo [ej_01_melodia](./ej_01_melodia/) tenemos una melodía de 8 notas, usaremos 2 arreglos de tipo int y tamaño 8, uno para almacenar las frecuencias y otro para las duraciones.

los arreglos nos permiten almacenar conjuntos de valores relacionados, e iterar a través de ellos fácilmente, usando un bucle for.

## diseño de sintetizadores (45 min)

hasta el momento tenemos un instrumento muy difícil de manejar, que solamente podemos encender y apagar. agreguemos una interfaz electrónica para poder controlar diversos aspectos del sonido.

hoy construiremos nuestro primer sintetizador, que es un instrumento electrónico que permite sintetizar o crear sonidos.

primero traspasemos el circuito con nuestro parlante a nuestra protoboard, para así añadir más componentes.

partamos de nuestra protoboard anterior, con un botón pulsador en el extremo inferior.

![protoboard pulsador](./imagenes/05-protoboard-pulsador.jpg "protoboard pulsador")

conectemos la tierra del parlante a la protoboard.

![parlante tierra](./imagenes/06-protoboard-parlante-tierra.jpg "parlante tierra")

conectemos la señal del parlante a la fila 1 de la protoboard.

![parlante señal](./imagenes/07-protoboard-parlante-senal.jpg "parlante señal")

usemos un cable para acceder a los 5v desde nuestro Arduino.

![Arduino 5V](./imagenes/08-arduino-5v.jpg "Arduino 5V")

el otro extremo del cable se conecta al riel de alimentación de la protoboard.

![protoboard 5V](./imagenes/09-protoboard-5v.jpg "Protoboard 5V")

usamos otro cable para acceder a tierra en Arduino.

![Arduino tierra](./imagenes/10-arduino-tierra.jpg "Arduino tierra")

y el otro extremo lo usamos para conectar al riel de tierra de la protoboard.

![protoboard tierra](./imagenes/11-protoboard-tierra.jpg "protoboard tierra")

conectamos otro cable a la señal de salida de audio del Arduino.

![Arduino señal](./imagenes/12-arduino-senal.jpg "Arduino señal")

conectamos el otro extremo del cable a la fila 1 de la protoboard, para conectar con el parlante.

![protoboard señal](./imagenes/13-protoboard-senal.jpg "protoboard señal")

el circuito del parlante se ve así, y si presionamos el botón rojo podemos escuchar de nuevo la melodía.

![circuito parlante](./imagenes/14-circuito-parlante.jpg "circuito parlante")

usemos ahora el ejemplo [ej_02_sonido_pulsador/](./ej_02_sonido_pulsador/) para lograr que nuestro sonido ocurra solamente mientras tenemos el pulsador presionado, como en un teclado.

conectamos un resistor entre tierra y el terminal inferior del pulsador.

![pulsador resistor](./imagenes/15-pulsador-resistor.jpg "pulsador resistor")

el terminal superior del pulsador lo conectamos al riel de alimentación 5V de la protoboard.

![pulsador 5V](./imagenes/16-pulsador-5v.jpg "pulsador 5V")

en el mismo terminal donde está el resistor, conectamos un cable para medir el voltaje.

![pulsador señal](./imagenes/17-pulsador-senal.jpg "pulsador señal")

el otro extremo de ese cable lo conectamos al pin digital 7 de nuestro Arduino.

![Arduino entrada](./imagenes/18-arduino-entrada.jpg "Arduino entrada")

en mi protoboard noté que la tierra no se transmite bien a lo largo del riel, lo que hace que la lectura del pulsador sea ruidosa y no funcione bien, por lo que conecté un cable entre la parte superior del riel y la parte inferior, lo que solucionó el problema.

![ruido tierra](./imagenes/19-ruido-tierra.jpg "ruido tierra")

el ejemplo [ej_03_sonido_pulsador_aleatorio](./ej_03_sonido_pulsador_aleatorio/) detecta cuando el pulsador es presionado y elige una frecuencia aleatoria cada vez. este ejemplo también enseña una manera de cómo usar más variables para almacenar la historia de los estados, y así diferenciar entre los actos de presionar el pulsador, y de mantener presionado el pulsador.

ahora usaremos un potenciómetro para manipular la frecuencia. ya habíamos usado un potenciómetro de alta precisión la clase pasada, esta vez usaremos uno más grande y de una sola vuelta.

![potenciometro](./imagenes/20-potenciometro.jpg "potenciometro")

lo conectamos en la columna a de la protoboard, con el terminal izquierdo en la fila 10, el central en la 12, y el derecho en la 14.

![potenciometro en protoboard frente](./imagenes/21-potenciometro-protoboard-frente.jpg "potenciometro en protoboard frente")

así se ve atrás donde realizaremos las conexiones.

![potenciometro en protoboard atrás](./imagenes/22-potenciometro-protoboard-atras.jpg "potenciometro en protoboard atrás")

el terminal derecho en la fila 14 lo conectamos a 5V con un cable.

![potenciómetro conectado a 5V](./imagenes/23-potenciometro-5v.jpg "potenciómetro conectado a 5V")

el terminal izquierdo en la fila 10 lo conectamos a tierra con un cable.

![potenciómetro conectado a tierra](./imagenes/24-potenciometro-tierra.jpg "potenciómetro conectado a tierra")

conectamos un cable al terminal central en la fila 12 para su lectura análoga.

![potenciómetro y cable señal](./imagenes/25-potenciometro-senal.jpg "potenciómetro y cable señal")

el otro extremo del cable de señal lo conectamos al pin A0 de entrada analógica del Arduino.

![Arduino lectura en pin A0](./imagenes/26-potenciometro-a0.jpg "Arduino lectura en pin A0")

subimos el ejemplo [ej_04_sonido_pulsador_potenciometro](./ej_04_sonido_pulsador_potenciometro/) para así tener dos controles, el botón pulsador para controlar inicio y fin del sonido, y el potenciómetro para manipular la frecuencia.

si hubiéramos invertido los terminales de poder del potenciómetro, hubiéramos invertido la curva de los valores, con el valor más a la izquierda siendo el mayor, y el más a la derecha siendo el menor, lo que puede ser útil en algunos casos, o puede ser también invertido en software si es necesario.

el siguiente ejemplo [ej_05_sonido_pulsador_fotorresistor/](./ej_05_sonido_pulsador_fotorresistor/) reemplaza el potenciómetro por un fotorresistor, que permite aumentar la frecuencia a mayor luz percibida.

![fotorresistor](./imagenes/27-fotorresistor.jpg "fotorresistor")

para lograr el mismo efecto de una resistencia variable que podamos leer, conectamos el terminal de arriba del fotorresistor a 5V, y el de abajo a tierra a través de una resistencia.

![fotorresistor y divisor de voltaje](./imagenes/28-fotorresistor-divisor-voltaje.jpg "fotorresistor y divisor de voltaje")

 con eso, podemos usar un cable para leer el voltaje en el terminal negativo del fotorresistor, que conectamos al pin A1 de entrada análoga del arduino.

![Arduino entrada A1](./imagenes/29-arduino-a1.jpg "Arduino entrada A1")

 el código tiene variables internas de valores mínimo y máximo, lo que permite afinar el circuito a las condiciones actuales de uso, sin tener que preocuparnos de los valores de voltaje que nos brinda el potenciómetro.

## protocolo MIDI (60 min)

el protocolo MIDI nos permite comunicar información musical entre instrumentos.

hoy usaremos nuestros Arduino para enviar señales a instrumentos MIDI externos.

en particular usaremos el sintetizadores de piano KORG volca keys y el de ritmos KORG volca beats.

