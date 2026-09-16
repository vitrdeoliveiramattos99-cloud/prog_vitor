"""Aula 01 - De C para Python.

NAO mude o nome deste arquivo nem a assinatura das funcoes.
Escreva sua solucao no lugar do 'pass'.
"""


def soma_lista(lista):
    """Devolve a soma de todos os numeros da lista. Lista vazia devolve 0."""
    soma = 0
    for n in lista:
        soma = soma + n

    return soma

def conta_pares(lista):
    """Devolve quantos numeros da lista sao pares."""
    quantPar = 0
    for i in lista:
        if lista[i] % 2 == 0:
            quantPar += 1

    return quantPar


def maior_valor(lista):
    """Devolve o maior numero da lista. A lista nao esta vazia."""
    maior = lista[0]

    for i in lista[1:]:
        if maior < i:
            maior = i

    return maior        


def existe(lista, alvo):
    """Devolve True se o alvo esta na lista, False se nao esta."""
    for i in lista:
        if alvo == i:
            return True

    return False


def busca_linear(lista, alvo):
    """Devolve a posicao do alvo na lista, ou -1 se ele nao estiver."""
    for i in range(len(lista)):
        if lista[i] == alvo:
            return i
    
    return -1


def segundo_maior(lista):
    """(Desafio) Devolve o segundo maior, percorrendo a lista uma unica vez."""
    maior = lista[0]
    segundo_maior = lista[1]
    if segundo_maior > maior:
        maior = segundo_maior
        segundo_maior = maior

    for i in lista:
        if i > maior:
            segundo_maior = maior
            maior = i
        elif i > segundo_maior:
            segundo_maior = i

    return segundo_maior
