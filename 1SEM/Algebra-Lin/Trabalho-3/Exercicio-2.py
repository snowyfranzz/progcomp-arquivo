import numpy as np
import sympy as sp

kEx2 = 1 - (0.1 + 0.5 + 0.2) # "Bruteforce" somente para inicialização, reatribuida depois usando a forma certinha
# Constantes
MATRIZ_P = sp.Matrix([[0.75, 0, 0.15, 0.1],
                      [0.2, 0.5, 0.2, 0.1],
                      [0.1, kEx2, 0.5, 0.2],
                      [0, 0.1, 0.2, 0.7]])

# Funcoes
def EstadoEstacionario(matrizEntrada):
    kEx2 = 1 - (MATRIZ_P[2, 0] + MATRIZ_P[2, 2] + MATRIZ_P[2, 3])
    matriz = matrizEntrada
    counter = 0

    while True:
        counter += 1;
        matrizStore = matriz
        matriz = matriz @ matrizEntrada

        if matriz == matrizStore:
            return counter, matriz

print("=" * 62)

# ================= EXERCICIO 2A =================
print("Exercício 2A:\n")
print("Pij significa a probabilidade de Ei virar Ej a cada hora.")

kEx2 = 1 - (MATRIZ_P[2, 0] + MATRIZ_P[2, 2] + MATRIZ_P[2, 3])
print(f"k = {kEx2:.2f}")

print("=" * 62)
# ================= EXERCICIO 2B =================
print("Exercício 2B:\n")
matDigrafo = sp.Matrix([[0, 0, 0, 0],
                        [0, 0, 0, 0],
                        [0, 0, 0, 0],
                        [0, 0, 0, 0]])

for i in range(4):
    for j in range(4):
        if MATRIZ_P[i, j] > 0:
            matDigrafo[i, j] = 1
print("Matriz do dígrafo:")
sp.pprint(matDigrafo)

print("=" * 62)
# ================= EXERCICIO 2C =================
print("Exercício 2C:\n")
matC = sp.Matrix([[1, 0, 0, 0]]) @ MATRIZ_P**3

print("Matriz P após 3h:")
sp.pprint(MATRIZ_P**3)
print("\nMatriz C:")
sp.pprint(matC)

print(f"\nA probabilidade do servidor estar no estado E1 e depois de 3 horas ir para o estado E3 é de {matC[0, 2]*100:.2f}%")

print("=" * 62)
# ================= EXERCICIO 2D =================
print("Exercício 2D:\n")

for i in range(4):
    for j in range(4):
        if i == j and MATRIZ_P[i, j] == 1:
            print("A matriz entra em estado absorvente.")

        elif i == 3 and j == 3:
            print("A matriz não entra em estado absorvente.")


print("=" * 62)
# ================= EXERCICIO 2E =================
print("Exercício 2E:\n")

if sp.det(MATRIZ_P) != 0:
    print("A matriz é regular.")
else:
    print("A matriz não é regular.")


print("=" * 62)
# ================= EXERCICIO 2F =================
print("Exercício 2F:\n")
numEstadoEstacionario, matEstacionaria = EstadoEstacionario(MATRIZ_P)

if numEstadoEstacionario != 0:
    print(f"O estado estacionário será atingido em E{numEstadoEstacionario}.\n")
    print("Matriz no estado estacionário:")
    sp.pprint(matEstacionaria)

else:
    print("O estado estacionário não será atingido.")

print("=" * 62)
