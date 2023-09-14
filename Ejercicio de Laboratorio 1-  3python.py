n = int(input("Ingresa un numero entero no negativo: "))

if n <= 0:
    print("El numero debe ser no negativo.")
else:
    factorial = 1
    for i in range(1, n + 1):
        factorial *= i
    print(f"Factorial de {n} es {factorial}")
