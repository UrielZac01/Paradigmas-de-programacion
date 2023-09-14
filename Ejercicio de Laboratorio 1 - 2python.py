num1 = int(input("Ingresa el primer numero: "))
num2 = int(input("Ingresa el segundo numero: "))

resultado = 0
for _ in range(num2):
    resultado += num1

print("Resultado de la multiplicacion:", resultado)