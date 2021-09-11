"""

                      PYTHON, Index
 
                  Caracteristicas generales
 
Lenguaje de alto nivel:Gramatica simple clara y legible
 
Recordamos que el lenguaje de bajo nivel es el que es mas
proximo al lenguaje "maquina" o "binario", en cambio un
lenguaje de alto nivel recuerda mas al lenguaje humano.
 
Tipado Fuerte:El lenguaje distingue de forma clara los
tipos de variables, como resultado el lenguaje no permite
trabajar con tipos de variables distintas a menos que se
genere una conversión y como resultado todas las variables
sean del mismo tipo Algunos lenguajes como PHP no poseen
este formato en cambio se les llama de tipado debil o
"debilmente tipado" y en cambio permiten usar variables
de distinto tipo sin conversión mediante
 
Tipado dinamico: Python distingue en el momento de
establecer la variable cual es su tipo sin necesidad de
aclararlo, por lo cual no es necesario por ejemplo aclarar
que un valor es un "int" o un "str". Los lenguajes que no
cumplen con esta condición se denominan se denominan
estaticos y siempre necesitan declarar el tipo de
variable.
 
Orientado a Objetos: rellenar cuando lo sepas realmente
 
Interpretado: same
 
Versatil: Sirve para cualquier tipo de aplicación
 
   
   
                 Signos Generales


"=" = el signo igual se llama asignación y como su nombre
indica se usa para asignar valores a las distintas
variables
 
"==" = el doble signo igual se usa en el momento de hacer
comparaciones entre valores y ver si estos son iguales.    
            
";" = permite multiples instrucciones en el mismo renglon
por ejemplo print ("hola"); print ("adios")

# = esto permite poner comentarios en el codigo, el cual
no va a ser leido por el programa
 
\ = permite que una instrucción se siga escribiendo en
el renglon siguiente. Es un Salto de linea

"" = Las comillas sirven para hacer una variable tipo
"str" o de tipo texto
 
"" " = La triple comilla tiene la misma utilidad que la
doble con la salvedad que esta permite escribir multiples
lineas antes de cerrar las comillas, teniendo una función
similar a "\" pero con la salvedad de limitarse al uso de
"str", mientras que "\" puede permitir que una linea de
codigo se escriba debajo sin alterar la interpretación
del lenguaje
 
"identaciñon" = esto es una sangria que se usa a la hora
de escribir el codigo, en muchos casos esta se genenera
por si misma, en caso de no generarse y ser necesaria se
puede generar con Tab o 4 veces barra espaciadora. La
función de la identación es facilitar la lectura del
codigo
 
+-/* = Mismo valor y uso que sus equivalentes matematicos,
sumar restar dividir y multiplicar
 
** = esto es un exponente y permite calulcar la potencia
de un valor.
 
// = Es lo mismo que una división normal salvo que esta
no tiene en cuenta decimales y de ser necesario redondear 
al entero mas cercano

% = El modulo sirve para calcular el resto de un división 
  




                        TIPOS DE DATOS
                  _____________|___________
                 |             |           |
              NUMERICOS      TEXTO      Booleanos              
           ______|____________             _|___
          |        |          |           |     |
       Enteros Coma flotante complejos   True  False
 

Numericos
 
Enteros(int)=2,4,10,-800.. numeros sin coma
 
Coma flontante(float)=Numeros que contienen decimales,
igualmente se los carga siempre con punto y no con coma
5.5,3.4,-100.1..
 
Complejos= Dunno..
 
Texto
 
cualquier texto entra en este tipo de variable y se
identifican por estar entre comillas ""
 
 
Booleanos
  
Los boleanos son un tipo de variable que puede tener
unicamente 2 estados posibles, o verdadero (True) o
falso (False)
 
 
 
                      Operadores
 
 
Los operadores pueden ser de 5 tipos, aritmeticos, de
comparación,lógicos, de asignación o especiales
 
Operadores Aritmeticos
 
Suma (+) Resta (-) Multiplicación (*) División (/) modulo (%)
Exponente (**) y división entera (//)
 
Comparación
 
Igual que (==) Diferente que (!=) Mayor que (>) menor que (<)
Mayor o igual que (>=) menor o igual que (<=)
 
Lógicos
 
AND, OR, NOT
 
Asigación
 
Igual (=) Incremento (+=) Decremento (-=) (*=) (/=) (%=)
(**=) (//=)
 
Especiales 
 
IS, IS NOT, IN, NOT IN
 
 
 
 
 
                        Variables



"Una variable es un espacio en la memoria de un ordenador
donde se almacenara un valor que podra cambiar durante la
ejecución del programa."
En este lenguaje las varialbes se definen por el contenido
y no por el contenedor, por lo que "x=5" se entiende como
un variable de tipo entero, aunque la esta no este
declarada igualmente python nos permite declarar el tipo
de variable pudiendo expresarse la misma de esta forma
"x=int(5)"
 
           Contenedor
               |
               X = 5
                   |
               Contenido
 
En Java por ejemplo, el tipo de variable se establece en
el contenedor, por lo que la expresion x=int(5) no es
correcta ya que el tipo de variable fue expresada en el
contenido cuando la forma correcta seria "int x = 5"
quedando dentro del contenedor
 
Un nombre de variable puede comenzar con mayuscula o
minuscula puede contener numeros y puede usar varias
palabras si se concatena con "_"

Algunos ejemplos de nombres posibles: 
Nombre, nombre, nombre2, mi_nombre, mi_primer_nombre
 
Toda variable para este lenguaje es siempre un objeto
 
Existe un llamada "type" que lo que hace es devolvernos el
tipo de variable llamada por la función
Se la expresa de la siguiente forma:
type()
 
Por ejemplo:
 
x=5     
type(x)
<class "int">


 
                  if...elif...else...
 
 
Los condicionales del tipo if se usan para ejecutar
sentencias o intrucciones si se cumple algun tipo de
variables, la forma  mas simple de pensar estos
condicionales se resume a "si pasa esto, entonces como
respuesta pasará esto otro" 
 
La sintaxis en su forma mas simple es la siguiente:
 
if "condicion" :   
"instrucciones que se van a realizar si la condición se
cumple"

Note que luego de escrita la condición hay que poner ":"
precionar enter y luego tab (o 4 veces espacio) para asi
poder ir a las instrucciones
 
Ejemplo: 

x=5 
if x == 5:
    print ("X vale 5")
 
Notece que el condicional no usa "=" sino "==" porque esto
es una operación de tipo comparativa y el para hacer uso
del "igual que" es necesario el "=="
 
El primer ejemplo establece una condición donde la misma
se cumple pero lo normal es que en el momento de hacer el
codigo se establezca tambien que sucede en el caso de que
la condición no se cumpla 
  
Sintaxis

x=5
if x == 5:
    print ("X vale 5")
else:
    print ("X no vale 5")
 
 
CONTINUARLO (elif)
 
 
                       FUNCIONES
 
Las funciones son un conjunto de instrucciones que
funcionan como una unidad realizando una tarea especifica,
se puede interpretar y entender mas facilmente como
pequeños programas automonos dentro de nuestro mismo
código. Una de sus mayores utilidades consiste en su
facilidad para reutilizar el codigo.Las funciones pueden o
no devolver valores y pueden tener parametros y argumentos 
 
Las funciones de les denomina metodos si estan dentro de
una clase

Las funciones pueden ser propias (hechas por nosotros) o
bien en pueden ser predefinidas, estas son las que vienen
con nuestro lenguaje de programación, por ejemplo
"print()" es una funcion predefinida de python que
escribe lo que pongamos dentro de print
 

Sintaxis 

palabra reservada "def" seguida del nombre de la función
luego "()" que son la zona de parametros o argumentos, dos
puntos ":" entrer, identación (tab/4 veces B.espaciadora)
y por ultimo enter y si queremos, colocamos identacion y
"return" 
 
def "nombre_funcion"():
    *Instrucciones de la función
    *return (no obligario)
 
 
Partes de la funcion:
 
def funcion_propia():              <-declaración
    print("esto es un ejemplo")    <-cuerpo de función
     
funcion_propia()                   <-llamada a la función

 
  Ejemplos
 
def funcion_uno():
    print(5+5)
 
funcion_uno()
 
Ejemplo mas simple, la funcion es llamada
y esta se ejecuta
 
def funcion_dos(num1,num2):
     print(num1+num2)
     
funcion_dos(5,5)
 
Este segundo ejemplo es una funcion con parametros los
cuales tienen que ser declarado al momento de llamar la
función, en el primer ejemplo siempre tendremos el mismo
resultado a menos que alteremos direcamente la función
misma, este segundo ejemplo aprovechamos que la función
no cambia y le ponemos nosotros las variables
 
def funcion_tres():
    resultado=5+5
    return resultado
 
print (funcion_tres())
 
este tercer ejemplo nos da un nuevo elemento
y es el return, el cual nos indica que nos
devuelva un valor
 
def funcion_cuatro(a,b):
    resultado=a+b
    return resultado
 
print (funcion_cuatro(5,5))
 
esto es lo mismo que el tercer ejemplo solo que agregando
parametros, como el ejemplo 2 respecto al uno
 
 
si ente este momento intentamos hacer algo mas complejo
que llamar a la función y la queremos hacer interactuar
con otros valores, por ejemplo "print(funcion)+5" vamos
a notar que las funciones uno y dos nos dan error, esto
es porque al no tener un return el lenguaje no interpreta
el resultado como una variable de un tipo concreto, pero
si en cambio ponemos "print (funcion_tres()+5)" o en
cambio "print (funcion_cuatro(5,5)+5) si tendremos un
resultado gracias a que el return nos otorga un int.
 
 
 
                          Listas


Una lista es ua estructira de datos que nos permiten
almacenar gran cantidad de valores, seria un equivalente
a un "array" en otros lenguajes de programacion, las
listas pueden almacenar distintos tipos de valores, y se
pueden expanndiar dinamicamente
 
Las listas siempre parten de un primer elemento
posicionado en el lugar 0, no en el 1 como cabria esperar,
a su vez una lista puede tener posiciones negativas
comenzando desde el ultimo elemento (y ocupando este el
-1) y siguendo hasta llegar al inicio de la misma 
 
 
Sintaxis
 
"nombre de la lista" = [elemento1,elemento2,elemento3..]
                            |          |         |
                           pos0       pos1      pos2
 
Ejemplos
 
miLista=[1,2,3,4,5]

print(miLista[:])    <-Al momento de llamar la lista no
                       basta con solo poner el nombre y
                       los corchetes, tambien es necesario
                       poner ":" dentro de la misma

En este caso la lista de numeros saldra como fue escrita,
pero si queremos un pedazo de la misma y no la totalidad
podremos usar los esparcios dentro del corchete para
delimitar el pedazo deseado, si vemos el ejemplo podemos
ver que la lista solicitada para la función print tiene
":" dentro de los corchetes, esto sirve para pedir la
lista en su totalidad, pero si en el primer espacio antes
del ":" ponemos un numero va a saltear posiciones hasta
llegar al numero escrito, y por el contrario, si ponemos
un numero luego del ":" este delimitara hasta donde va a
llagar la lista, si vemos el ejemplo, y en la lista
pedimos [1:] vamos a ver que esta dira "2,3,4,5", si
ponemos [:2] esta nos mostrara "1,2" y si es [1:3] veremos
"2,3". Si solo queremos un elemento puntual basta con
poner la posicion que ocupa dentro del corche, ej:[2] y
listo


append
  
Con esto vamos a ponder agregar un nuevo elemento a la
lista siempre el elemento se agrega al final
 
sintaxis
 
"nombre de lista".append("nuevo elemento")
 

extend

Con esto podemos agregar multiples elmentos a la vez en un
solo paso, pero igual que append los agrega siempre al
Insert

sintaxis
 
"nombre de lista".extend(["nuevo elemento"])

 
insert 
 
Con esto podemos agregar elementos en la lista, pero
declarando la posicion correspondiente, si ya existe un
elemento en esa posicion, el elemento viejo pasa a ocupar
el lugar inmediamente posterior

sintaxis

"nombre de lista".insert("posicion deseada","nuevo
elemento")
 

index

cuando una lista es muy larga y queremos saber que
elemento se encuentra en una posicion especifica usamos
este metodo
 
stx

"nombre de lista".index("nombre del elemento")
 

remove/pop

Esta funcion elimina un elemento de la lista

sintaxis
 

 
 
"in"

Este metodo es basicamente un condicional que devuelve
un booleano, se usa para preguntar si X elemento esta 
en la lista, con lo cual devuelve "true" o "false"
tambien podemos ponerle respuestas especificas para que 
de en lugar de los booleanos
 
Sintaxis
 
print("nombre elemento" in "nombre de lista")

esta sintaxis solo nos devolvera un booleano

Sintasix

if "nombre elemento" in "nombre de lista":
    print(respuesta en lugar de bool "true")

 
                      TUPLAS

Son listas inmutables, no se pueden modificar luego de su
creación
-Se permite extrar porcione de la tupla (creando una nueva
tupla)
-Permite comprobar si un elemento esta en la tupla
usando el "in" así como buscarlo con "index"
-si se permite preguntar cuantas veces se repite un
elemento concreto usando "count"
-con la funcion "len" podemos saber cuantos elementos
posee la tupla
-Se pueden usar como claves en un diccionario, algo que un
diccionario no permite

Sintaxis

"nombredelatupla"=("nuevo elemento","nuevo elemento")

Existen dos diferencias en la sintaxis con respecto a las
listas, primero, estas no usan corchetes sino parentesis y
segundo, los parentesis no son obligatorios, pero se
recomienda igualmente agregarlos para saber que el
elemento en uso es en efecto una tupla


Es posible convertis una tupla en una lista o vicevera
esto de hacer con el metodo "list"

Ejemplo

"nombretupla"=("elementos")
"nombrelista"="list"("nombretupla")

Con esto vamos a tener una copia de la tupla convertida en
una lista, pero en realidad no es una conversión autentica
ya que ambos elementos son accesibles, tanto la tupla
orginal como la lista, lo que tenemos en realidad, es una
copia pero con conversión de formato


Para hacer lo contrario, en vez de usar "list", usamos
"tuple".


Empaquetado y desempaquetado de tuplas

Las tuplas normalmente estan "empaquetadas" lo que
significa es que los elementos puestos en dicha tupla
estan contenidos en la misma y como resultado estan
unificados, puede ser un poco dificil de ver porque lo
esperable es que una lista o tupla siempre tengan
elementos del mismo tipo y de tener elementos distintos
simplemente se usen mas listas o tuplas; A pesar de esto
podriamos crear una tupla que tenga elementos distintos
como por ejemplo nombres y años de personas, los cuales
no podran ser separados logicamente por el lenguaje, pero
con el desempaquetado podemos separarlos cuando nos sea
necesario

Ejemplo

"nombretupla"=("Juan",25)
Nombre=Juan
Edad=25

Con esto ahora podemos por ejemplo pedir un print a
"Nombre" y meter todas las variables dentro de esta
variable

Otra utilidad que puede tener el desempaquetado de tuplas
es que podemos llamar a los nuevos elementos en un orden
distinto al que se encuentran en la tupla original




                   DICCIONARIOS


Son similares a la listas y a las tuplas pero con una
diferencia muy relevante, los datos poseen una asociacion
de tipo "clave:valor", esto significa que si queremos
llamar a un elemento de la lista, podemos usar el elemento
"clave" y llamar a elemento "valor", para imaginar su
utilidad pensemos en una lista que por ejemplo tenga
paises y capitales, con poner el pais podriamos saber la
capital. Un dato importante es que los elementos no estan
ordenados, esto es así porque esta pensado no para mostrar
listas de datos sino para que llamemos un elemento en
particular (clave) y tengamos una respuesta especifica
(valor)


Sintaxis

"nombrediccionario"={"elemento clave":"elemento valor"}


Para agregar elementos esta es la sintaxis

"nomdiccionario"["nuevoelementoclave"]="nuevoelentovalor"

Si queremos cambiar un elemento por uno nuevo simplemente
volver a hacer la operación de agregar elemento y va a
sobreescribirlo 


para elimitar un elemeno usamos "del" 



             
               Condicionales y bucles


                    Condicionales

If 



























"""