from collections import deque

class Impresora:
    def __init__(self):
        self.cola_impresion = deque()  # Inicializar una cola para trabajos de impresión

    def agregar_trabajo(self, trabajo):
        print(f"Se ha agregado el trabajo '{trabajo}' a la cola de impresión.")
        self.cola_impresion.append(trabajo)

    def imprimir_siguiente(self):
        if self.cola_impresion:
            trabajo = self.cola_impresion.popleft()
            print(f"Imprimiendo: {trabajo}")
        else:
            print("No hay trabajos en la cola de impresión.")

    def estado_cola_impresion(self):
        print(f"Trabajos en cola de impresión: {', '.join(self.cola_impresion)}")

# Crear una instancia de la impresora
mi_impresora = Impresora()

# Agregar trabajos a la cola de impresión
print("¿Que quieres imprimir?")
char = mi_impresora.agregar_trabajo(input())
print("¿Que quieres imprimir?")
char = mi_impresora.agregar_trabajo(input())
print("¿Que quieres imprimir?")
char = mi_impresora.agregar_trabajo(input())

# Mostrar el estado de la cola de impresión
mi_impresora.estado_cola_impresion()

# Imprimir trabajos
mi_impresora.imprimir_siguiente()
mi_impresora.imprimir_siguiente()

# Mostrar el estado de la cola de impresión después de imprimir algunos trabajos
mi_impresora.estado_cola_impresion()

# Imprimir trabajos
mi_impresora.imprimir_siguiente()

# Mostrar el estado de la cola de impresión
mi_impresora.estado_cola_impresion()