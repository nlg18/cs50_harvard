from cs50 import get_string

answer = get_string("What's your name? ")

a = [1, 2, 3, 4, 5, 6, 7, 8]

# for i in [0, 1, 2]:
for i in range(0, len(a), 2):
    print("hello, " + answer + "!", end="! \n")



# Exemplo de uso de range para imprimir os números de 1 a 10
for i in range(1, 11):
    print(i)

# Exemplo de uso de list para criar uma lista de frutas
frutas = ['maçã', 'banana', 'laranja']

# Exemplo de uso de tuple para criar uma tupla de coordenadas
coordenadas = (4, 5)

# Exemplo de uso de dictionary para criar um dicionário de pessoas e suas idades
pessoas = {'João': 25, 'Maria': 30, 'Pedro': 35}
# good performance
# hash table use

# Exemplo de uso de set para criar um conjunto de números inteiros
conjunto = {1, 2, 3, 4, 5}
# hash table use
