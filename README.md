# Administrador de escuela
## Prerrequisitos
Haber instalado un [compilador de c++](https://sourceforge.net/projects/mingw/files/latest/download)

> compilar con: "g++ main.cpp"

> 1- correr en windows: "a.exe"

> 2- correr en windows: "g++ -o (Nombre del ejecutable) main.cpp"

> correr en linux: "/a.out"

Este administrador de escuela cuenta con la capacidad de administrar profesores y alumnos registrados, así como las materias, cursos y aulas, su objetivo es brindar una representación visual y estructurada del sistema que permita comprender y diseñar el funcionamiento de la gestión académica y administrativa de la escuela.

## Objetivos

 1. El diagrama de clases muestra las entidades principales de la escuela, como profesores, alumnos, materias, cursos y aulas, y cómo están relacionadas entre sí. Esto proporciona una visión clara de la organización y estructura del sistema.
 2. El diagrama de clases permite gestionar la información de los profesores y alumnos registrados en la escuela. Se definen atributos y métodos relevantes para almacenar y acceder a los datos de cada individuo, como nombre, edad, dirección, teléfono, entre otros.
 3. El diagrama de clases proporciona una representación de las materias y los cursos ofrecidos por la escuela. Permite asignar profesores a las materias, así como alumnos a los cursos correspondientes.
 4. El diagrama de clases incluye la representación de las aulas disponibles en la escuela. Se definen atributos relacionados, como el número de aula y la capacidad, para facilitar la asignación adecuada de aulas a los cursos.
 5. El diagrama de clases permite asignar departamentos a los administrativos de la escuela. Esto ayuda a organizar y estructurar la gestión administrativa de la escuela, permitiendo una asignación eficiente de responsabilidades y tareas.

***

## Funcionalidad

El programa está orientado a funcionar en la administración de las personas que integran una escuela. Para usar el programa, se debe considerar que no se cuenta con una base de datos, por lo que los datos de las personas que integran una escuela deben declararse desde cero.

Se puede registrar a alumnos, profesores y administrativos dentro de la escuela, pero no se pueden eliminar de la escuela. También se pueden administrar los cursos a los que asiste un alumno, lo que permite registrar cursos nuevos o eliminarlos. Además, cada curso tiene materias con distintas calificaciones y profesores asignados, pero las calificaciones son particulares de cada alumno.

La forma más facil de utilizar el programa es la siguiente:

 1. Registrar un nuevo alumno
 
```bash
(1) Agregar alumno: <-
(2) Agregar profesor:
(3) Agregar administrativo:
(4) Administrar alumnos:
(5) Ver personas en la escuela
Proporciona la opcion: 
```

 2. La consola te pedirá datos como el Nombre, Edad, Telefono, Direccion y Matricula (En este caso).

> Se debe de considerar que todos son tipos de dato string, excepto Edad

 3. Dirigete a la opción Administrar Alumnos.

```bash
(1) Agregar alumno:
(2) Agregar profesor:
(3) Agregar administrativo:
(4) Administrar alumnos: <-
(5) Ver personas en la escuela
Proporciona la opcion:
```

 4. Ahora podrás agregar o remover cursos para un alumno específico. Además, podrás administrar las calificaciones de cada materia para cada alumno. Ten en cuenta que la búsqueda de un alumno se realiza mediante su matrícula, por lo que cada matrícula debe ser única.

## Consideraciones

- No se cuenta con una base de datos, por lo que todo lo que se genera se borra después de terminar de ejecutar el programa. Además, los datos se deben generar desde cero.

- No se pueden editar los datos de las personas una vez registradas en la escuela. Esto se debe a que no quiero hacer el programa tan largo. Sin embargo, las clases consideran que se pueden editar los datos tanto de Alumno, Profesor y Administrativo, por lo que se pueden implementar funciones para editar datos.

- Solo se pueden ingresar números cuando se solicita elegir una opción. No se aceptan cadenas de texto, de lo contrario, el programa arrojará un error.

- No se utilizan algunas funciones que están declaradas en las clases debido a que si se usaran, el programa sería demasiado extenso. Sin embargo, se consideran diversas situaciones en las que se deseen cambiar o administrar los datos, por lo que las clases tienen métodos específicos para estas situaciones (Un ejemplo de una función importante que no se utiliza es la de remove_materia() en la clase Curso.h)

***

## Correcciones

***Se corrigió el UML para que fuera más congruente con sus métodos.

***Se corrigieron los constructores de cada clase para que el código quede mejor ordenado.

***Se agregaron las consideraciones del programa.

***Se explica como usar el programa.

