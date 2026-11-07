def bubble_sort(lista):
    a = lista.copy()
    comparacoes = 0
    trocas = 0
    
    for fim in range(len(a) - 1, 0, -1):
        for j in range(fim):
            comparacoes += 1
            if a[j] > a[j + 1]:
                a[j], a[j + 1] = a[j + 1], a[j]
                trocas += 1
                
    return a, comparacoes, trocas


def selection_sort(lista):
    a = lista.copy()
    comparacoes = 0
    trocas = 0
    
    for i in range(len(a) - 1):
        menor = i
        for j in range(i + 1, len(a)):
            comparacoes += 1
            if a[j] < a[menor]:
                menor = j
        if menor != i:
            a[i], a[menor] = a[menor], a[i]
            trocas += 1
            
    return a, comparacoes, trocas


def insertion_sort(lista):
    a = lista.copy()
    for i in range(1, len(a)):
        valor = a[i]
        j = i - 1
        while j >= 0 and a[j] > valor:
            a[j + 1] = a[j]
            j -= 1
        a[j + 1] = valor
    return a


def quicksort(lista):
    if len(lista) <= 1:
        return lista.copy()
        
    pivo = lista[len(lista) // 2]
    menores = []
    iguais = []
    maiores = []
    
    for valor in lista:
        if valor < pivo:
            menores.append(valor)
        elif valor > pivo:
            maiores.append(valor)
        else:
            iguais.append(valor)
            
    return quicksort(menores) + iguais + quicksort(maiores)
