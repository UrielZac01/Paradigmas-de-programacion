dividendo = int(input("Ingresa el dividendo: "))
divisor = int(input("Ingresa el divisor: "))

cociente = 0
while dividendo >= divisor:
    dividendo -= divisor
    cociente += 1

print("Cociente:", cociente)
print("Residuo:", dividendo)
