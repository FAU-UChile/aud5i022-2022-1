# clase-10

martes 24 mayo 2022, presencial

esta clase y las siguientes del curso fueron canceladas por paro

## repaso clase anterior y programa hoy (15 min)

la clase pasada aprendimos:

- documentación de proyectos en GitHub
- trabajo en grupo

hoy aprenderemos:

- retroalimentación de usuarios

## retroalimentación de usuarios

### usuarios

- personas que interactúan con la interfaz electrónica
- diseñadores y constructores de la interfaz electrónica
- constructores de la interfaz electrónica

todos estos agentes pueden ser la misma persona, o grupos de personas.

puede haber una clara división entre diseño (planear) y construcción (seguir los planos), y entre agentes que inciden en el desarrolllo la interfaz electrónica y agentes que solamente la usan. pueden haber o no canales de comunicación entre los distintos agentes, haciendo circuitos abiertos o cerrados.

todas estas personas están separadas en distintos grados y cantidades de distancia, tiempo, habilidades, necesidades.

### retroalimentación

señales que permiten dar señales sobre el funcionamiento interno

la retroalimentación es multimedia y puede incluir distintas combinaciones de información:

- luces con sus respectivas intensidades, ubicaciones, colores
- pantallas con información de parámetros
- sonidos de éxito, error, espera, confirmación
- mensajes de consola para programadores o mantenedores
- perillas con posición, colores, ubicación, tamaño
- deslizadores con su posición y ubicación

### fallas

cuando un aparato electrónico falla, puede dar o no indicios de esto:

- no da indicios: una calculadora que suma 1 + 3 y da como resultado 7
- sí da indicios: luces o pantallas de error, sonido de error

cuando un aparato electrónico falla, puede fallar de forma contenida o catastrófica:

- forma contenida: un computador tiene un error y se reinicia para volver a un estado estable
- forma catastrófica: un computador tiene un error y no puede volver a encenderse

### tradiciones y nuevas tecnologías

los motores a combustión usados en automóviles generan ruidos que nos permiten detectar su presencia y estimar su posición y velocidad con nuestros oídos. los motores eléctricos no producen ese sonido, lo que puede convertirse en un problema, ya que ese cambio de paradigma hace que peatones puedan no advertir su presencia, o incomodidad en la persona conduciendo al no tener un sonido que acompañe la aceleración.

la alimentación para pedales de guitarra se puede hacer con fuentes de poder o con baterías. algunos pedales al usar baterías gastadas crean sonidos distintos, que para algunos músicos ruidistas o experimentales puede ser atractivo, por lo que se han creado fuentes de poder que permiten simular una batería gastada con un potenciómetro para elegir el voltaje.

http://www.voodoolab.com/pedalpower_mondo.htm

### retroalimentación tras bambalinas

muchas veces

para eso, podemos recurrir a modos de debug(),

insertar origen palabra debug https://en.wikipedia.org/wiki/Software_bug

también podemos tener mensajes en consola como los que hemos hecho con nuestros microcontroladores Arduino al usar Serial.println().

entrada en un computador:

en un teclado, la tecla bloq mayus puede tener una luz interna, que avisa si está encendida o no.

en un teclado, la tecla no se mantiene presionada, se devuelve al ser soltada.

el ratón tiene un sonido cuando se hace click.

en un trackpad, los cambios pueden ser absolutos o relativos: absoluto significa que el cursor salta inmediatamente a la posición, relativo significa que la posición es mapeada.

en la tetera eléctrica perfectemp de cuisinart, los botones tienen un anillo iluminado en torno a ellos.

https://youtu.be/8EwTods_W1A?t=34

perillas

las perillas pueden controlar valores continuos o discretos.

faders / deslizadores?

en el pedal preamp MKii de Chase Bliss Audio y Meris, los faders son motorizados y pueden volver a su posición original.

https://youtu.be/-2ytNM_7FWY?t=83

deslizadores con motores

encoders

retroalimentación con sonido: su origen puede ser mecánico o electrónico.

salidas

pantallas

las pantallas pueden ser de segmentos para formar palabras.

LED

OLED

### caso de estudio: moog little phatty

4 encoders con luces de retroalimentación sobre posición

korg volca beats

perillas transparentes brillan

https://www.korg.com/us/products/dj/volca_beats/
