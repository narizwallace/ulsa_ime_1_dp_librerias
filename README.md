# Librerías: archivos .h

Ejemplos de la clase de librerías de Diseño de Programas. Los archivos `.h` están en la carpeta `include` y los programas en la carpeta `src`.

## Ejemplos

| Archivo | Tema | Qué observar |
| --- | --- | --- |
| `src/ejemplo_0_sin_libreria.cpp` | Programa sin librería propia | La función vive en el mismo archivo que `main` |
| `src/ejemplo_1_una_libreria.cpp` | Usar una librería propia | La función vive en `saludos.h`; el programa imprime lo mismo |
| `src/ejemplo_2_sin_pragma_once.cpp` | Sin `#pragma once` | No compila a propósito: la función queda repetida |
| `src/ejemplo_3_dos_librerias.cpp` | Usar dos librerías | Cada librería tiene un tema y `main` las reúne |

## Librerías

| Archivo | Contenido |
| --- | --- |
| `include/saludos.h` | Función `saludar` |
| `include/despedidas.h` | Función `despedir` |
| `include/saludos_sin_pragma.h` | Igual a `saludos.h`, pero sin `#pragma once`. Solo para el ejemplo 2 |

## Cómo compilar y ejecutar

Desde la carpeta del proyecto, cambia el nombre del archivo por el ejemplo que quieras probar:

```
g++ -Wall -Wextra -std=c++17 -Iinclude src/ejemplo_1_una_libreria.cpp -o ejemplo
./ejemplo
```

En Windows, ejecuta con `.\ejemplo.exe`.

La opción `-Iinclude` le dice al compilador que busque los archivos `.h` en la carpeta `include`.

## Cómo estudiar los ejemplos

1. Compara el ejemplo 0 con el ejemplo 1: ¿a dónde se fue la función `saludar`?
2. Compila el ejemplo 2 y lee el error. Después agrega `#pragma once` como primera línea de `include/saludos_sin_pragma.h` y vuelve a compilar.
3. En el ejemplo 3, abre las dos librerías y revisa qué incluye cada una.
