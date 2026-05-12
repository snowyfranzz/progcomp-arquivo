def retornaMaiorQueSete(num):
    soma = 0
    num = int(num)
    algarismo = []
    while num > 0:
        if num % 10 > 7:
            algarismo.append(num % 10)
        num //= 10
    
    for i in algarismo:
        soma += i
    
    return soma


num = int(input("Insira um número inteiro > "))
soma = retornaMaiorQueSete(num)

print(f"A soma dos algarismos maiores que sete dos número inserido é igual a: {soma}")




