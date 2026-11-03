#ifndef VM_REGCORE_H
#define VM_REGCORE_H

#include <vector>
#include <cstdint>
#include <variant>
#include <string>
#include <expected>
#include <span>

// Tipos de errores que la VM puede devolver
enum class VMError {
    INVALID_OPCODE,
    REG_OUT_OF_BOUNDS,
    DIVISION_BY_ZERO,
    TYPE_MISMATCH,
    FILE_NOT_FOUND
};

// Puntero simulado para gestión de memoria futura
using HeapPointer = size_t;

// Banco de registros dinámico usando std::variant (C++17/23)
using RegisterData = std::variant<int, float, std::string, HeapPointer>;

class VM_RegCore {
private:
    // Banco de 16 registros (R0 a R15)
    std::vector<RegisterData> registers;
    
    // Memoria RAM virtual (almacena el bytecode binario)
    std::vector<uint8_t> instruction_memory;
    
    // Program Counter
    size_t pc;

public:
    // Constructor: Inicializa los 16 registros y el PC en 0
    VM_RegCore();

    // Carga un archivo .bin a la memoria de instrucciones
    // Prohibido usar std::getline. Se debe leer a nivel de bytes.
    std::expected<void, VMError> load_binary(const std::string& filename);

    // Ciclo principal de ejecución (Fetch - Decode - Execute)
    std::expected<void, VMError> run();

private:
    // Funciones auxiliares que el estudiante debe implementar en el .cpp
    std::expected<uint8_t, VMError> fetch();
    std::expected<void, VMError> execute_instruction(uint8_t opcode);
};

#endif // VM_REGCORE_H
