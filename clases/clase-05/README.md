# clase-05

martes 12 abril 2022, presencial

## repaso clase anterior y programa hoy (10 min)

la clase pasada aprendimos:

* fundamentos de programación en Arduino
* comunicación serial entre Arduino y computador
* programar semáforo en Arduino
* construir circuito para semáforo

hoy aprenderemos:

* botón
* potenciómetro
* timing y tap tempo

## repaso botón (60 min)

primero repasamos cómo leer un botón

![pulsador](./imagenes/00-pulsador.jpg "pulsador")

![pulsador en una protoboard por lado izquierdo](./imagenes/01-pulsador-proto-izquierda.jpg "pulsador en una protoboard por lado izquierdo")

![boton pulsador en una protoboard por lado derecho](./imagenes/02-pulsador-proto-derecha.jpg "boton pulsador en una protoboard por lado derecho")

![pins de poder de Arduino conectados a protoboard](./imagenes/03-arduino-poder-zoom.jpg "pins de poder de Arduino conectados a protoboar")

![Arduino compartiendo poder con protoboard](./imagenes/04-arduino-poder-general.jpg "Arduino compartiendo poder con protoboard")

![conexión de pin superior de pulsador a 5V](./imagenes/05-pulsador-5v.jpg "conexión de pin superior de pulsador a 5V")

![conexión de pin inferior de pulsador a tierra a través de resistencia](./imagenes/06-pulsador-resistencia-tierra.jpg "conexión de pin inferior de pulsador a tierra a través de resistencia")

![conexión de cable para sensor a pin inferior de pulsador](./imagenes/07-pulsador-cable-sensor.jpg "conexión de cable para sensor a pin inferior de pulsador")

![conexión de cable para sensor a pin 7 digital en Arduino](./imagenes/08-pulsador-entrada-digital.jpg "conexión de cable para sensor a pin 7 digital en Arduino")

![circuito completo de pulsador](./imagenes/09-pulsador-circuito-general.jpg "circuito completo de pulsador")

el botón tiene dos patitas, la de arriba la conectamos a la fuente de poder, la de abajo la conectamos a tierra a través de una resistencia de 10k Ohm.

la entrada digital de Arduino lee el voltaje en la patita de la resistencia que está conectada al botón, no a la resistencia.

explicar ley de ohm, en ambos casos, corriente y voltaje.

explicar normally on, normally closed.

conectar LED y resistencia a salida digital de Arduino para prender y apagar Arduino.

explicar diferentes comportamientos: toggle switch, momentary on, 

ej_00

ej_01_sin_delay

ej_02_potenciometro


ejemplo con Line 6 DL4

aplicar tap tempo a Arduino