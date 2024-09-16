Tarea 1 
Preguntas teoricas

p1) ¿Que es un paradigma de programacion?

En la programacion, se conocen como paradigmas a diferentes modelos utilizados
para realizar determinadas tareas o proyectos. En palabras simples, son distintos
caminos, guias, reglas, teorias y fundamentos que agilizan el desarrollo en codigo 
y evitan tener que reinventar la rueda cada vez que programamos. 

Los paradigmas mas conocidos son :
* Programacion estructurada
* Programacion orientada a objetos
* Programacion funcional

p2) ¿En que se basa la programacion orientada a objetos (POO)? 

La POO es uno de los paradigmas mencinoados en la pregunta anterior, el cual 
esta basado en los conceptos de clases y objetos. Este tipo de programacion 
se emplea para estructurar de manera simple y reutilizable cualquier codigo.

Principalmente se utilizan los terminos de clases, metodos e instancias para 
ir creando lo que se requiera, entendiendo que so objetos los cuales tienen
diferenets funcionalidades y caracteristicas que les definen. 

Con el pradigma de POO lo que se busca es dejar de centrarse en la logica pura
de los programas, para comenzar a pensar en "objetos". Esto permite que en sistemas
grandes, en lugar de pensar en funciones se pueda pensar en las interacciones 
de los distintos elementos dentro del sistema. 

p3) ¿Cual es la diferencia entre recursividad e iteracion y como esto se relaciona
con la notacion big O? 

La recursion y la iteratividad ayudan a resolver problemas grandes mediante la 
repeticion de una serie de pasos, por lo que son tecnicas que solucionan 
los mismos problemas pero con distintos enfoques.

La iteracion se baa en calcular repetidamente un conjunto de pasos con la intencion
de llegar a una meta. Esto nos permite plantear el probema tomando en cuenta 
un caso base, usualmente el caso inicial/mas simple. para luego ir construyendo 
a partir de eso la solucion completa. 

Por otro lado la recursion comienza a atacar un problema tomando lo grande
y diviendo hasta llegar a problemas mas pequeños que son sencillos de resolver. 
"Divide y vencerás" hace mucho sentido cuando hablamos de recursion.

Ahora, en que se mezclan estas definiciones con la notacion big O es una buena
pregunta, ya que si se toma en cuenta la forma en que trabajan cada uno de los 
enfoques, se puede notar que por ejemplo, un problema iterativo puede llegar a una
solucion, tomando en cuenta mas pasos de los que en realidad se necesita, solo 
por el hecho de que trabaja recorriendo todos los caminos posibles hasta llegar 
a la solucion, en cambio la recursividad puede dejar de buscar en lugares donde no
debe, gracias a su forma de trabajo de ir dividiendo en funcion de lo que busca. 

Esto permite empezar a hablar de la "eficiencia" de un algoritmo, a traves de la 
cual es posible conocer cuanto se demorará un codigo en llegar al resultado. 
Y aqui viene la gran relacion, ya que la notacion big O nos proporciona una manera
intuitiva de saber que tanto esfuerzo de computo se necesita para realizar la
operacion de un algoritmo. 

Para que quede claro, se entiende que a medida que aumenta la complejidad, 
será necesario una mayor cantidad de tiempo para completar la tarea. 

p4) Explicar la diferencia de rendimiento entre O(1) y O(n) 

La diferencia es que O(1) permite que la operacion no dependa del tamaño de
los datos. Es el caso deal, pero a la vez probablemente el menos frecuente.
Es decir, que da igual cuantos elementos haya en la lista, la operacion siempre
tarda lo mismo. Por otro lado, en la complejidad O(n) el tiempo necesario para
ejecutar la funcion es funcion directa y lineal del numero de elementos que 
se encuentren en el algoritmo. 

p5) ¿Como se calcula el orden en un programa que funciona por etapas? 

Considerando que estamos hablando de etapas pertenecientes a un mismo programa, 
el orden estará dado por la etapa mas compleja, ya que es esta la cual determinará
el tiempo que demore en ejecutarse el programa. 

p6) ¿Como se puede determinar la complejidad temporal de un algoritmo recursivo? 

a traves del metodo de expansion, sustitucion, metodo del arbol recursivo pero 
el mas completo vendria a ser el teorema maestro, el cual permite determinar 
cuanto tiempo se tardara un algoritmo bajo ciertas hipotesis en dividir el problema
en subproblemas y de combinar sus respuestas. 





He trabajado en la resolución de la tarea a partir de las siguientes paginas:

* https://www.youtube.com/watch?v=SkOuPjtm7D0&ab_channel=OCILabs
* https://intelequia.com/es/blog/post/qu%C3%A9-es-la-programaci%C3%B3n-orientada-a-objetos
* https://platzi.com/blog/paradigmas-programacion/
* https://madi.nekomath.com/P4/TeoremaMaestro.html
* https://ellibrodepython.com/tiempo-ejecucion-python
* https://elmundodelosdatos.com/todo-sobre-big-o-notation-y-su-impacto-en-algoritmos/
* https://www.freecodecamp.org/espanol/news/explicacion-de-la-notacion-big-o-con-ejemplo/
* https://www.campusmvp.es/recursos/post/Rendimiento-de-algoritmos-y-notacion-Big-O.aspx

