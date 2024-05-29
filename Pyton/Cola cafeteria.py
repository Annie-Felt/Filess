from collections import deque

class Cafeteria:
    def __init__(self):
        self.cola_pedidos = deque()  # Inicializar una cola para los pedidos

    def tomar_pedido(self, cliente, pedido):
        print(f"{cliente} ha hecho el pedido: {pedido}")
        self.cola_pedidos.append((cliente, pedido))

    def atender_pedido(self):
        if self.cola_pedidos:
            cliente, pedido = self.cola_pedidos.popleft()
            print(f"Atendiendo el pedido de {cliente}: {pedido}")
        else:
            print("No hay pedidos en la cola.")

    def estado_cola_pedidos(self):
        if self.cola_pedidos:
            print("Pedidos en cola:")
            for cliente, pedido in self.cola_pedidos:
                print(f"{cliente}: {pedido}")
        else:
            print("No hay pedidos en la cola.")

# Crear una instancia de la cafetería
mi_cafeteria = Cafeteria()

# Tomar pedidos
print("Ingrese su nombre y pedido por favor:")
char = mi_cafeteria.tomar_pedido(input(),input())
print("Ingrese su nombre y pedido por favor:")
char = mi_cafeteria.tomar_pedido(input(),input())
print("Ingrese su nombre y pedido por favor:")
char = mi_cafeteria.tomar_pedido(input(),input())
print("Ingrese su nombre y pedido por favor:")
char = mi_cafeteria.tomar_pedido(input(),input())

# Mostrar el estado de la cola de pedidos
mi_cafeteria.estado_cola_pedidos()

# Atender los pedidos
mi_cafeteria.atender_pedido()
mi_cafeteria.atender_pedido()

# Mostrar el estado de la cola de pedidos después de atender algunos pedidos
mi_cafeteria.estado_cola_pedidos()

# Atender los pedidos
mi_cafeteria.atender_pedido()


# Mostrar el estado de la cola de pedidos después de atender algunos pedidos
mi_cafeteria.estado_cola_pedidos()

# Atender los pedidos
mi_cafeteria.atender_pedido()


# Mostrar el estado de la cola de pedidos después de atender algunos pedidos
mi_cafeteria.estado_cola_pedidos()