class ColaBuffer:
    def __init__(self, capacidad):
        self.capacidad = capacidad
        self.buffer = [None] * capacidad
        self.indice_escritura = 0
        self.indice_lectura = 0
        self.size = 0

    def esta_vacia(self):
        return self.size == 0

    def esta_llena(self):
        return self.size == self.capacidad

    def agregar_dato(self, dato):
        if self.esta_llena():
            print("El búfer está lleno. No se pueden agregar más datos.")
        else:
            self.buffer[self.indice_escritura] = dato
            self.indice_escritura = (self.indice_escritura + 1) % self.capacidad
            self.size += 1
            print(f"Dato agregado al búfer: {dato}")

    def obtener_dato(self):
        if self.esta_vacia():
            print("El búfer está vacío. No se pueden obtener más datos.")
            return None
        else:
            dato = self.buffer[self.indice_lectura]
            self.indice_lectura = (self.indice_lectura + 1) % self.capacidad
            self.size -= 1
            print(f"Dato obtenido del búfer: {dato}")
            return dato

# Crear una cola de búfer con capacidad para 5 datos
mi_cola_buffer = ColaBuffer(5)

# Agregar datos al búfer
mi_cola_buffer.agregar_dato(100)
mi_cola_buffer.agregar_dato(200)
mi_cola_buffer.agregar_dato(300)

# Mostrar el estado del búfer
print("Estado del búfer:")
print(f"¿Está vacío? {mi_cola_buffer.esta_vacia()}")
print(f"¿Está lleno? {mi_cola_buffer.esta_llena()}")

# Obtener datos del búfer
mi_cola_buffer.obtener_dato()
mi_cola_buffer.obtener_dato()

# Mostrar el estado del búfer después de operaciones de agregado y obtención de datos
print("Estado del búfer:")
print(f"¿Está vacío? {mi_cola_buffer.esta_vacia()}")
print(f"¿Está lleno? {mi_cola_buffer.esta_llena()}")
