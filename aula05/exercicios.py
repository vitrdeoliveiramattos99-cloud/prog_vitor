def bubble_sort(lista):
    nova_lista = lista.copy()
    comparacoes = 0
    trocas = 0

    for i in range(len(nova_lista) - 1):
        for j in range(len(nova_lista) - 1 - i):
            comparacoes += 1
            if nova_lista[j] > nova_lista[j + 1]:
                nova_lista[j], nova_lista[j + 1] = nova_lista[j + 1], nova_lista[j]
                trocas += 1

    return nova_lista, comparacoes, trocas


def selection_sort(lista):
    nova_lista = lista.copy()
    comparacoes = 0
    trocas = 0

    for i in range(len(nova_lista) - 1):
        menor = i

        for j in range(i + 1, len(nova_lista)):
            comparacoes += 1

            if nova_lista[j] < nova_lista[menor]:
                menor = j

        if menor != i:
            nova_lista[i], nova_lista[menor] = nova_lista[menor], nova_lista[i]
            trocas += 1

    return nova_lista, comparacoes, trocas


def insertion_sort(lista):
    nova_lista = lista.copy()

    for i in range(1, len(nova_lista)):
        valor = nova_lista[i]
        j = i - 1

        while j >= 0 and nova_lista[j] > valor:
            nova_lista[j + 1] = nova_lista[j]
            j -= 1

        nova_lista[j + 1] = valor

    return nova_lista


def quicksort(lista):
    def ordenar(sublista):
        if len(sublista) <= 1:
            return sublista.copy()

        pivo = sublista[len(sublista) // 2]
        menores = []
        iguais = []
        maiores = []

        for valor in sublista:
            if valor < pivo:
                menores.append(valor)
            elif valor == pivo:
                iguais.append(valor)
            else:
                maiores.append(valor)

        return ordenar(menores) + iguais + ordenar(maiores)

    return ordenar(lista)