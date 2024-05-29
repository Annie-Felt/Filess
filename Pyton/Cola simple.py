

from collections import deque

class Tienda:
    def __init__(self):
        self.cola_clientes = deque()  # Inicializar una cola vacía
        self.caja_abierta = False

    def llegada_cliente(self, nombre):
        print(f"{nombre} ha llegado a la tienda.")
        self.cola_clientes.append(nombre)

    def abrir_caja(self):
        if not self.caja_abierta:
            if self.cola_clientes:
                cliente_actual = self.cola_clientes.popleft()
                print(f"Caja abierta. {cliente_actual} está siendo atendido.")
                self.caja_abierta = True
            else:
                print("No hay clientes en la cola.")
        else:
            print("La caja ya está abierta.")
    
    def atender_cliente(self):
        
        if self.cola_clientes:
            cliente_actual = self.cola_clientes.popleft()
            print(f"{cliente_actual} está siendo atendido.")
            self.caja_abierta = True
        else:
            print("No hay clientes en la cola.")
        

    def cerrar_caja(self):
        if self.caja_abierta:
            self.caja_abierta = False
            print("Caja cerrada.")
        else:
            print("La caja ya está cerrada.")

    def estado_cola(self):
        print(f"Clientes en la cola: {', '.join(self.cola_clientes)}")

# Crear una instancia de la tienda
mi_tienda = Tienda()

# Simular la llegada de clientes
mi_tienda.llegada_cliente("Annie")
mi_tienda.llegada_cliente("Alastor ")
mi_tienda.llegada_cliente("Esme ")
print(" ")
# Mostrar el estado de la cola
mi_tienda.estado_cola()
print(" ")
# Abrir la caja y atender a los clientes
mi_tienda.abrir_caja()
print(" ")

# Mostrar el estado de la cola
mi_tienda.estado_cola()
print(" ")
# Cerrar la caja
mi_tienda.cerrar_caja()
print(" ")

# Mostrar el estado de la cola
mi_tienda.estado_cola()
print(" ")
# Abrir la caja y atender a los clientes
mi_tienda.abrir_caja()
print(" ")
# Mostrar el estado de la cola
mi_tienda.estado_cola()
print(" ")
# Antender clientes
mi_tienda.atender_cliente()
print(" ")

# Mostrar el estado de la cola
mi_tienda.estado_cola()
print(" ")


