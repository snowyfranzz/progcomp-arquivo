import numpy as np
import sympy as sp

# Constantes
MODULO = 27
MATRIZ_A = sp.Matrix([[2, 5], [1, 3]])
DET_A = int(sp.det(MATRIZ_A))
FRASE_ENCRIPT = [7, 6, 5, 13, 16, 26, 9, 18, 14, 16, 24, 8, 16, 22, 3, 15]
cifraNums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 0]
cifraChar = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "#"]

# Funções
def ReturnK(determinante):
    # encontrar k -> (det(A) * k) % 27 = 1
    for i in range(100):
        if np.mod(determinante * i, 27) == 1:
            return i
    return None

def Decifrador(matriz): # Transforma os numeros em letras
    stringDecifrada = ""
    for i in matriz:
        for j in range(len(cifraNums)):
            if i == cifraNums[j]:
                stringDecifrada += cifraChar[j]
                break
    return stringDecifrada

def Cifrador(matriz): # Transforma as letras em numeros (Oposto do decifrador) // Retorna um array em vez de uma string.
    arrayCifrado = []
    for i in matriz:
        for j in range(len(cifraChar)):
            if i == cifraChar[j]:
                arrayCifrado.append(cifraNums[j])
                break
    return arrayCifrado

# ================= EXERCICIO 1A =================
print("Exercício 1A:\n")
k = ReturnK(DET_A)
if k is not None:
    print(f"Sim, a matriz é inversível no módulo {MODULO}, pois det(A)={DET_A} e k={k} satisfaz (det(A)*k) mod {MODULO} = 1.")
else:
    print(f"Não, a matriz não é inversível no módulo {MODULO}.")

print("=" * 62)

# ================= EXERCICIO 1B =================
print("Exercício 1B:\n")
decodA = MATRIZ_A.inv_mod(MODULO)
print("A matriz decodificadora é:\n")
sp.pprint(decodA)

print("=" * 62)

# ================= EXERCICIO 1C =================
print("Exercício 1C:\n")
matM = sp.Matrix([[7,  6,  5, 13, 16, 26,  9, 18], [14, 16, 24,  8, 16, 22,  3, 15]])
# Caso 1: (A*M)
matN = decodA @ matM
matMsgCifradaC1 = matN % MODULO

print("Caso 1 // Mensagem Decifrada:", Decifrador(matMsgCifradaC1))

#Caso 2: Multiplicação por vetores 2x1
msgDecod = []
for i in range(0, len(FRASE_ENCRIPT), 2):
    vetor = sp.Matrix([[FRASE_ENCRIPT[i]], [FRASE_ENCRIPT[i + 1]]])
    resultado = decodA @ vetor
    msgDecod.append(int(resultado[0, 0]) % MODULO)
    msgDecod.append(int(resultado[1, 0]) % MODULO)

print("Caso 2 // Valores decodificados:", msgDecod)
print("Caso 2 // Mensagem decodificada:", Decifrador(msgDecod))

print("=" * 62)

# ================= EXERCICIO 1D =================
print("Exercício 1D:\n")
msgCod = []
frase = ["M", "O", "N", "I", "T", "O", "R", "A", "R", "#"] # Monitorar (MONITORAR#)
fraseCifrada = Cifrador(frase);

for i in range(0, len(fraseCifrada), 2):
    vetor = sp.Matrix([[fraseCifrada[i]], [fraseCifrada[i + 1]]])
    resultado = MATRIZ_A @ vetor
    msgCod.append(int(resultado[0, 0]) % MODULO)
    msgCod.append(int(resultado[1, 0]) % MODULO)

print(f"Mensagem original: MONITORAR# ({frase})")
print("Mensagem codificada (numeros):", msgCod)
print("Mensagem codificada final (letras):", Decifrador(msgCod))