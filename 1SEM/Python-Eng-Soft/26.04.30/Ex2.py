def leLista():
    lista = []
    for i in range(10):
        num = float(input("Insira um número qualquer: "))
        lista.append(num)
    return lista

def modifica(lista):
    for i in range(len(lista)):
        lista[i] = lista[i] * i
    
    return lista

lista = leLista()
listaMod = modifica(lista)

print(f"A lista modificada é: {lista}")