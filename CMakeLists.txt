cmake_minimum_required(VERSION 3.20)
project(VM_RegCore VERSION 1.0 LANGUAGES CXX)

# Exigir estándar C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Especificar el directorio de archivos de cabecera
include_directories(include)

# Definir los archivos fuente del proyecto principal
set(SOURCES
    src/VM_REGCORE.cpp
    main.cpp
)

# Crear el ejecutable principal
add_executable(VM_RegCore_App ${SOURCES})

# ---------------------------------------------------------
# Configuración para Pruebas Unitarias (Opcional para el estudiante, pero requerido por TDD)
# Si se desea agregar Catch2 o DocTest, se configura aquí.
# ---------------------------------------------------------
# enable_testing()
# add_executable(VM_RegCore_Tests tests/test_main.cpp src/VM_REGCORE.cpp)
# ...
