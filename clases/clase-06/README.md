# clase-06

martes 19 abril 2022, clase originalmente presencial, pero fue cancelada por enfermedad y reemplazada con contenido teórico asíncrono.

## conceptos de programación

bucle for



## sonido

el sonido es una vibración mecánica

## protocolo MIDI



hoy aprenderemos:

* conexión de parlante
* función tone()
* relación frecuencia y percepción de nota o pitch

## parlantes

los parlantes tienen una resistencia pequeña, se recomienda usar de 8 Ohm.

[referencia de tone() en arduino.cc](https://www.arduino.cc/reference/en/language/functions/advanced-io/tone/)

tone() genera una onda cuadrada de la frecuencia especificada, y con un ciclo de trabajo de 50%.

se puede especificar una duración, y si no hay una, se emite hasta que se corra la función noTone().

el pin o la patita puede ser conectada a un parlante o piezo buzzer para emitir tonos.

solamente un tono puede ser emitido a la vez. si ya hay un tono sonando en otra patita, la llamada a tone() no tendrá efecto.

## ejercicio

todes usamos un código con tone() donde la frecuencia es random() y no tiene duración, es drone tone.

cada vez que presionamos un botón, cambiamos la frecuencia a otra random(), escuchamos los batimientos en el sonido a través de la sala.

## ejercicio

programar una melodía con varios Arduino

programar un acorde triada o tétrada, con varios Arduino haciendo los acordes.

efecto Doppler? ya que Arduino es móvil