"""Aula 02 - Listas em Python.

NAO mude o nome deste arquivo nem a assinatura das funcoes.
Escreva sua solucao no lugar do 'pass'.
"""


def remove_negativos(lista):
    """Devolve uma lista nova so com os numeros que nao sao negativos."""
    sem_negativos = []
    for i in lista:
        if i >= 0:
            sem_negativos.append(i)

    return sem_negativos


def inverte(lista):
    """Devolve uma lista nova na ordem contraria.
    Sem usar reverse() e sem usar [::-1]."""
    lista_invertida = []
    i = len(lista)-1

    while i >= 0:
        lista_invertida.append(lista[i])

    return lista_invertida


def busca_binaria(lista, alvo):
    """Recebe uma lista JA ORDENADA. Devolve a posicao do alvo, ou -1."""
    ini = 0
    fim = len(lista) -1
    meio = (ini + fim) // 2

    while ini <= fim:
        if lista[meio] == alvo:
            return meio
        elif lista[meio] < alvo:
            ini = meio + 1
        elif lista[meio] > alvo:
            fim = meio -1

    return -1   
        


def intercala(lista_a, lista_b):
    """Devolve uma lista nova alternando os elementos das duas.
    As duas listas tem o mesmo tamanho."""
    lista_c = []

    for i in range(len(lista_a)):
        lista_c.append(lista[i])
        lista_c.append(lista[i])

    return lista_c


def remove_repetidos(lista):
    """(Desafio) Devolve uma lista nova sem repetidos,
    mantendo a ordem da primeira aparicao."""
    lista_nova = []

    for i in lista:
        if i not in lista_nova:
            lista_nova.append(i)

    return lista_nova
