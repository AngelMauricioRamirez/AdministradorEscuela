# Administrador de escuela
## Prerrequisitos
Haber instalado un [compilador de c++](https://sourceforge.net/projects/mingw/files/latest/download)

> compilar con: "g++ main.cpp"

> 1- correr en windows: "a.exe"

> 2- correr en windows: "g++ -o (Nombre del ejecutable) main.cpp"

> correr en linux: "/a.out"

Este administrador de escuela cuenta con la capacidad de administrar profesores y alumnos registrados, así como las materias y cursos que tiene registrados un alumno, su objetivo es brindar una representación visual y estructurada del sistema que permita comprender y diseñar el funcionamiento de la gestión académica y administrativa de la escuela.

## Objetivos

 1. El diagrama de clases muestra las entidades principales de la escuela, como profesores, alumnos, materias, cursos y aulas, y cómo están relacionadas entre sí. Esto proporciona una visión clara de la organización y estructura del sistema.
 2. Permite gestionar la información de los profesores y alumnos registrados en la escuela. Se definen atributos y métodos relevantes para almacenar y acceder a los datos de cada individuo, como nombre, edad, dirección, teléfono, entre otros.
 3. Proporciona una representación de las materias y los cursos ofrecidos por la escuela. Permite asignar calificaciones a las materias, así como que cada alumno agregue sus cursos correspondientes.
 4. Permite asignar departamentos a los administrativos de la escuela. Esto ayuda a organizar y estructurar la gestión administrativa de la escuela, permitiendo una asignación eficiente de responsabilidades y tareas.

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
Proporciona la opcion (Numero): 
```

 2. La consola te pedirá datos como el Nombre, Edad, Telefono, Direccion y Matricula (En este caso).

 > Se debe de considerar que todos son tipos de dato string, excepto Edad

 ```bash
 Proporciona el nombre:
 Proporciona la edad:
 Proporciona el numero de telefono:
 Proporciona la direccion:
 Proporciona la matricula:
```

 3. Dirigete a la opción Administrar Alumnos.

```bash
(1) Agregar alumno:
(2) Agregar profesor:
(3) Agregar administrativo:
(4) Administrar alumnos: <-
(5) Ver personas en la escuela
Proporciona la opcion (Numero):
```

 4. Ahora podrás agregar o remover cursos para un alumno específico. Además, podrás administrar las calificaciones de cada materia para cada alumno. Ten en cuenta que la búsqueda de un alumno se realiza mediante su matrícula, por lo que cada matrícula debe ser única.

 ```bash
 (1) Agregar curso
 (2) Asignar calificacion
 (3) Remover curso
 (4) Salir de Administrador de alumnos
 Proporciona la opcion (Numero):
```

5. Para agregar un curso o eliminar un curso, se pedirá que proporciones el nombre del curso, este se encuentra listado antes de que proporciones el nombre del curso y se encuentra de la siguiente forma:

Ejemplo:

> Curso: F203

6. Si se requiere del nombre del curso o del nombre de la materia, se tiene que proporcionar exactamente como se tiene registrado.

## Consideraciones

- No se cuenta con una base de datos, por lo que todo lo que se genera se borra después de terminar de ejecutar el programa. Además, los datos se deben generar desde cero.

- No se pueden editar los datos de las personas una vez registradas en la escuela. Esto se debe a que no quiero hacer el programa tan largo. Sin embargo, las clases consideran que se pueden editar los datos tanto de Alumno, Profesor y Administrativo, por lo que se pueden implementar funciones para editar datos.

- Solo se pueden ingresar números cuando se solicita elegir una opción. No se aceptan cadenas de texto, de lo contrario, el programa arrojará un error.

- No se utilizan algunas funciones que están declaradas en las clases debido a que si se usaran, el programa sería demasiado extenso. Sin embargo, se consideran diversas situaciones en las que se deseen cambiar o administrar los datos, por lo que las clases tienen métodos específicos para estas situaciones (Un ejemplo de una función importante que no se utiliza es la de remove_materia() en la clase Curso.h)

***

## Casos de falla

Entrada incorrecta de datos:

- Si se ingresan datos no válidos al solicitar información del alumno, profesor o administrativo (por ejemplo, ingresar una cadena en lugar de un número para la edad), podría causar errores.

Búsqueda de cursos y materias:

- Al buscar cursos y materias en las listas, se utilizan comparaciones de cadenas exactas. Si hay errores tipográficos o diferencias de mayúsculas y minúsculas en los nombres proporcionados por el usuario, la búsqueda no será exitosa.

Inserción duplicada de cursos:

- Si se intenta agregar un curso que ya está registrado para un alumno, actualmente se muestra un mensaje indicando que el curso ya está registrado, pero no se impide la inserción duplicada.

Manejo de excepciones:

- El código no maneja explícitamente excepciones que puedan ocurrir durante la entrada de datos o la ejecución de operaciones. Si ocurren excepciones, el programa podría finalizar.

***

## Correcciones

***Se identificaron los casos en donde puede dejar de funcionar el programa
