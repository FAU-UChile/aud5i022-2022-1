# clase-04

martes 05 abril 2022, presencial

## repaso clase anterior y programa hoy (10 min)

la clase pasada aprendimos:

* electricidad y magnetismo
* componentes eléctricos
* circuitos eléctricos
* instalación de software para el curso

hoy aprenderemos:

* fundamentos de programación en Arduino
* comunicación serial entre Arduino y computador
* programar semáforo en Arduino
* construir circuito para semáforo

## fundamentos de programación en Arduino

Arduino está basado en Processing, y hereda las dos funciones principales:

* setup() para configuración inicial. ocurre una vez, al principio de los tiempos.
* loop() para refrescar. ocurre después de setup(), en bucle, hasta el fin.

nuestro Arduino Uno tiene un LED interno conectado internamente al pin 13.

creamos una variable de tipo número entero para almacenar el valor 13.

en la configuración (setup) hacemos que el pin digital 13 sea una salida (OUTPUT).

en el refresco (loop) hacemos que la nuestra salida digital del pin 13 alterne entre valores digitales 1 y 0, con una pausa de 1 segundo entre cada estado.

```C++
int pinLED = 13;

void setup() {
  pinMode(pinLED, OUTPUT);
}

void loop() {
  digitalWrite(pinLED, HIGH);
  delay(1000);
  digitalWrite(pinLED, LOW);
  delay(1000);
}
```



## comunicación con puerto serial

para comunicar nuestro Arduino a través del puerto serial, debemos abrir el puerto y configurar una velocidad.

```C++
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("hola :)");
}
```

## conectar Arduino con componentes

## qué es código

Diferencias entre espacios y tabulaciones.

Diferencias entre UTF-8 y emojis y sistemas de Strings.

