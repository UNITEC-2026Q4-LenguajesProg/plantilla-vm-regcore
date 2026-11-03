# Proyecto: VM-RegCore (Intérprete Binario basado en Registros)

**Clase:** Lenguajes de Programación
**Docente:** Ing. Jose Isaac Orellana Velasquez
**Periodo:** II - 2026

## Descripción
Este repositorio contiene la plantilla base para el desarrollo de la Máquina Virtual basada en Registros (VM-RegCore). A diferencia de los intérpretes tradicionales de texto, este proyecto exige que la máquina virtual lea y decodifique un archivo binario `.bin` (Bytecode) compuesto por *opcodes* en formato hexadecimal.

## Estructura del Repositorio
* `CMakeLists.txt`: Configuración de construcción (C++23).
* `include/VM_REGCORE.h`: Definición base de la máquina virtual y el banco de registros.
* `src/`: Directorio donde el estudiante debe implementar la lógica (`.cpp`).
* `tests/`: Directorio para las pruebas unitarias (Catch2/DocTest).

## Instrucciones de Construcción
Este proyecto utiliza CMake. Para compilar:
```bash
mkdir build
cd build
cmake ..
cmake --build .
