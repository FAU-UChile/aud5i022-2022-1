# clase-05

martes 12 abril 2022, presencial

## repaso clase anterior y programa hoy (10 min)

la clase pasada aprendimos:

* fundamentos de programación en Arduino
* comunicación serial entre Arduino y computador
* programar semáforo en Arduino
* construir circuito para semáforo

hoy aprenderemos:

* botón pulsador
* potenciómetro
* timing y tap tempo

## repaso botón pulsador (60 min)

repasemos cómo conectar un botón pulsador como entrada digital al microcontrolador Arduino.

este es un pulsador.

![pulsador](./imagenes/00-pulsador.jpg "pulsador")

lo conectamos al extremo inferior de la protoboard, con pins repartidos entre columnas d y g.

esta es la vista desde la izquierda.

![pulsador en una protoboard por lado izquierdo](./imagenes/01-pulsador-proto-izquierda.jpg "pulsador en una protoboard por lado izquierdo")

esta es la vista desde la derecha.

![boton pulsador en una protoboard por lado derecho](./imagenes/02-pulsador-proto-derecha.jpg "boton pulsador en una protoboard por lado derecho")

después conectamos cables a los pins 5V y GND de nuestro Arduino, convención es colores rojo o naranjo para voltaje de alimentación (5V) y colores café o negro para tierra (GND).

![pins de poder de Arduino conectados a protoboard](./imagenes/03-arduino-poder-zoom.jpg "pins de poder de Arduino conectados a protoboard")

conectamos los otros extremos de los cables a los rieles de alimentación izquierdos de la protoboard. 5V desde Arduino se conecta a + rojo, y GND de Arduino se conecta a - azul.

![Arduino compartiendo poder con protoboard](./imagenes/04-arduino-poder-general.jpg "Arduino compartiendo poder con protoboard")

hasta el momento el pulsador está solamente conectado mecánicamente a la protoboard, pero no tiene conexiones eléctricas.

conectemos su pin superior a 5V con un cable rojo.

![conexión de pin superior de pulsador a 5V](./imagenes/05-pulsador-5v.jpg "conexión de pin superior de pulsador a 5V")

un circuito por donde circula corriente necesita de un camino entre los terminales de la fuente de poder, en nuestro caso los pins 5V y GND de Arduino.

queremos entonces conectar el otro pin del botón a tierra GND, pero no podemos hacer una conexión directamente con un cable, ya que eso haría un cortocircuito o conexión directa entre los terminales 5V y GND.

en vez de un cable, usamos un resistor para conectar el pin inferior a tierra.

![conexión de pin inferior de pulsador a tierra a través de resistencia](./imagenes/06-pulsador-resistencia-tierra.jpg "conexión de pin inferior de pulsador a tierra a través de resistencia")

podemos leer el voltaje en los pines superior e inferior del pulsador, para obtener información digital, donde 1 es 5V y 0 es GND, en lógica digital.

el pin superior está conectado directamente a 5V, por lo que no aporta información, siempre es 1.

el pin inferior es el que alterna entre estados. está en 0 cuando no está pulsado, y cambia a 1 cuando está pulsado, por lo que conectamos un cable a esta fila en la protoboard.

![conexión de cable para sensor a pin inferior de pulsador](./imagenes/07-pulsador-cable-sensor.jpg "conexión de cable para sensor a pin inferior de pulsador")

el otro extremo del cable lo conectamos a la sección digital de Arduino, para este ejemplo al pin 7.

![conexión de cable para sensor a pin 7 digital en Arduino](./imagenes/08-pulsador-entrada-digital.jpg "conexión de cable para sensor a pin 7 digital en Arduino")

esta es la vista final del circuito.

![circuito completo de pulsador](./imagenes/09-pulsador-circuito-general.jpg "circuito completo de pulsador")

subamos el código de [ej_00_lectura_pulsador](./ej_00_lectura_pulsador/) de lectura de pulsador a nuestro Arduino.

expliquemos con ley de Ohm la razón por la que el pin inferior alterna entre voltajes.

la ley de Ohm postula que ΔV = I * R, lo que se puede interpretar así:

* R = ΔV / I: resistencia R es la constante de proporcionalidad directa entre diferencia de voltaje ΔV y corriente I.
* cuando no hay corriente (I = 0) a través de una resistencia R, no hay caída de voltaje en una resistencia (ΔV = 0), por lo que ambos terminales tienen el mismo voltaje.

cuando el pulsador NO ESTÁ PRESIONADO, no puede circular corriente (I = 0) a través de la resistencia R, por lo que no hay diferencia de voltaje (ΔV = 0) entre los terminales de la resistencia R, por lo que ambos comparten voltaje. Como Arduino hace que un terminal sea GND (V = 0), el otro también es 0, y eso es lo que lee Arduino.

cuando el pulsador SÍ ESTÁ PRESIONADO, se convierte en un cable, que conecta 5V la resistencia y al pin de lectura de Arduino, y ese voltaje cae a GND a través de la resistencia, circulando corriente y disipando energía.

## pulsador y luz (6   0 min)

agregaremos a nuestro circuito un LED que pueda ser encendido o apagado según el pulsador.

seguiremos la convención de orientar terminales positivos arriba y terminales positivos abajo.

nuestro LED estará en la columna c de la protoboard, con el pin positivo en el terminal c5 y el pin positivo en el terminal c6. recordatorio: pin negativo (-) es el que tiene el lado plano.

![LED conectado en la protoboard](./imagenes/10-led.jpg "[LED conectado en la protoboard")

conectamos una resistencia entre tierra y la fila 6 para así conectar el pin negativo del LED a tierra a través de una resistencia, como lo hicimos con el pulsador.

![terminal negativo de LED conectado a tierra a través de resistor](./imagenes/11-led-resistencia-tierra.jpg "terminal negativo de LED conectado a tierra a través de resistor")

si conectamos el pin positivo del LED a 5V directamente, estará prendido sin interrupciones.

como queremos controlar el encendido y apagado del LED con el pulsador, conectaremos un cable a la fila 5 para conectarlo a un pin digital del microcontrolador Arduino.

![terminal positivo de LED controlado digitalmente](./imagenes/12-led-control-digital.jpg "terminal positivo de LED controlado digitalmente")

usamos el pin 6 digital que está definido vía software como una salida digital, permitiendo así programar salidas de 5V o tierra para encender o apagar el LED respectivamente.

![pin 6 de Arduino conectado como salida digital](./imagenes/13-arduino-salida-digital.jpg "pin 6 de Arduino conectado como salida digital")

así se ve el circuito completo.

![circuito completo pulsador y LED](./imagenes/14-arduino-pulsador-led.jpg "circuito completo pulsador y LED")

para probar este funcionamiento, subimos el código del ejemplo [ej_01_pulsador_luz](./ej_01_pulsador_luz/).

conectar LED y resistencia a salida digital de Arduino para prender y apagar Arduino.

explicar diferentes comportamientos: toggle switch, momentary on, 

ej_00

ej_01_sin_delay

ej_02_potenciometro


ejemplo con Line 6 DL4

aplicar tap tempo a Arduino