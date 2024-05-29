class ColaCircular:
    def __init__(self, capacidad):
        self.capacidad = capacidad
        self.cola = [None] * capacidad
        self.front = self.rear = -1

    def esta_vacia(self):
        return self.front == -1

    def esta_llena(self):
        return (self.rear + 1) % self.capacidad == self.front

    def encolar(self, elemento):
        if self.esta_llena():
            print("La cola está llena. No se puede encolar.")
        else:
            if self.front == -1:
                self.front = 0
            self.rear = (self.rear + 1) % self.capacidad
            self.cola[self.rear] = elemento
            print(f"Encolado: {elemento}")

    def desencolar(self):
        if self.esta_vacia():
            print("La cola está vacía. No se puede desencolar.")
            return None
        else:
            elemento = self.cola[self.front]
            if self.front == self.rear:
                self.front = self.rear = -1
            else:
                self.front = (self.front + 1) % self.capacidad
            print(f"Desencolado: {elemento}")
            return elemento

    def mostrar(self):
        if self.esta_vacia():
            print("La cola está vacía.")
        else:
            i = self.front
            elementos = []
            while True:
                elementos.append(str(self.cola[i]))
                if i == self.rear:
                    break
                i = (i + 1) % self.capacidad
            print("Cola: " + " -> ".join(elementos))

# Crear una cola circular con capacidad para 5 elementos
mi_cola_circular = ColaCircular(5)

# Encolar algunos elementos
mi_cola_circular.encolar(1)
mi_cola_circular.encolar(2)
mi_cola_circular.encolar(3)
mi_cola_circular.encolar(4)

# Mostrar el estado de la cola circular
mi_cola_circular.mostrar()

# Desencolar algunos elementos
mi_cola_circular.desencolar()
mi_cola_circular.desencolar()

# Encolar más elementos
mi_cola_circular.encolar(5)
mi_cola_circular.encolar(6)

# Mostrar el estado de la cola circular después de operaciones de encolado y desencolado
mi_cola_circular.mostrar()
