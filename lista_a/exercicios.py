"""Lista A - Python, listas, busca e custo.

NAO mude o nome deste arquivo nem a assinatura das funcoes.
Escreva sua solucao no lugar do 'pass'.

Os exercicios do Bloco 3 devolvem DOIS valores: o resultado e a contagem.
"""

# ---------- Bloco 1: listas e percurso ----------

def conta_negativos(lista):
    """Quantos numeros da lista sao menores que zero."""
    total = 0
    for n in lista:
        if n < 0:
            total = total + 1
    return total


def media(lista):
    """Media dos numeros. Lista vazia devolve 0."""
    if not lista:
        return 0
    
    soma = 0
    for n in lista:
        soma = soma + n
        
    return soma / len(lista)


def sem_o_maior(lista):
    """Lista NOVA sem o maior valor. Se o maior repete, tira so o primeiro."""
    if not lista:
        return []
    
    maior = lista[0]
    
    for i in lista[1:]:
        if maior < i:
            maior = i
    

    nova = []
    ja_tirou = False

    for n in lista:
        if n == maior and not ja_tirou:
            ja_tirou = True
        else: 
            nova.append(n)

    return nova


def acumulada(lista):
    """Lista NOVA onde cada posicao e a soma de tudo ate ali.
    acumulada([1, 2, 3]) -> [1, 3, 6]"""
    nova = []
    soma = 0

    for n in lista:
        soma = soma + n
        nova.append(soma)

    return nova
    


def achata(lista_de_listas):
    """(Desafio) Junta as sublistas numa lista so.
    achata([[1, 2], [3]]) -> [1, 2, 3]"""
    nova = []

    for sublista in lista_de_listas:
        for item in sublista:
            nova.append(item)

    return nova



# ---------- Bloco 2: busca ----------

def busca_ultima(lista, alvo):
    """ULTIMA posicao do alvo, ou -1."""
    posicao = -1
    for i in range(len(lista)):
        if lista[i] == alvo:
            posicao = i

    return posicao


def conta_ocorrencias(lista, alvo):
    """Quantas vezes o alvo aparece."""
    total = 0
    for n in lista:
        if n == alvo:
            total = total + 1

    return total


def primeiro_maior_que(lista, limite):
    """Posicao do primeiro elemento maior que limite, ou -1."""
    for i in range(len(lista)):
        if lista[i] > limite:
            return i

    return -1


def busca_binaria_primeira(lista, alvo):
    """(Desafio) Lista JA ORDENADA, o alvo pode repetir.
    Devolve a PRIMEIRA posicao do alvo, ou -1. Sem percorrer tudo."""
    ini = 0
    fim = len(lista) - 1
    posicao = -1

    while ini <= fim:
       meio = (ini + fim) // 2 
       if lista[meio] == alvo:
            posicao = meio
            fim = meio -1
       elif lista[meio] < alvo:
            ini = meio + 1
       elif lista[meio] > alvo:
            fim = meio - 1
   
    return posicao
   



# ---------- Bloco 3: custo ----------

def soma_pares_contando(lista):
    """(soma_dos_pares, operacoes). Conte 1 por elemento examinado."""
    soma = 0
    operacoes = 0

    for n in lista:
        operacoes = operacoes + 1
        if n % 2 == 0:
            soma = soma + n

    return soma, operacoes


def maior_contando(lista):
    """(maior, comparacoes). Lista nao vazia.
    Conte 1 comparacao por elemento a partir do segundo."""
    maior = lista[0]
    comparacoes = 0

    for i in range(1, len(lista)):
        comparacoes = comparacoes + 1
        if lista[i] > maior:
            maior = lista[i]

    return maior, comparacoes


def tem_soma_contando(lista, alvo):
    """(True/False, comparacoes). Existem dois elementos que somam alvo?
    Conte 1 por par comparado. Pare assim que achar."""
    comparacoes = 0
    for i in range(len(lista)):
        for j in range(i + 1, len(lista)):
            comparacoes = comparacoes + 1
            if lista[i] + lista[j] == alvo:
                return True, comparacoes

    return False, comparacoes



def ordenada_contando(lista):
    """(Desafio) (True/False, comparacoes). A lista esta em ordem crescente?
    Conte 1 por par de vizinhos comparado. Pare no primeiro fora de ordem."""
    comparacoes = 0

    for i in range(len(lista) -1):
        comparacoes += 1
        if lista[i] > lista[i + 1]:
            return False, comparacoes

    return True, comparacoes



# ---------- Bloco 4: padroes ----------

def inverte_no_lugar(lista):
    """Inverte a PROPRIA lista recebida. NAO cria lista nova e NAO devolve nada."""
    ini = 0
    fim = len(lista) -1

    while ini < fim:
        lista[ini], lista[fim] = lista[fim], lista[ini]
        ini = ini + 1
        fim = fim - 1


def eh_palindromo(lista):
    """True se a lista e igual lida de tras para frente."""
    ini = 0
    fim = len(lista) -1

    while ini < fim:
        if lista[ini] != lista[fim]:
            return False
        
        ini = ini + 1
        fim = fim - 1

    return True



def par_que_soma(lista, alvo):
    """Lista JA ORDENADA. Devolve (i, j) das posicoes cujos valores somam alvo,
    ou (-1, -1). Sem laco dentro de laco."""
    ini = 0
    fim = len(lista) -1

    while ini < fim:
        soma = lista[ini] + lista[fim]

        if soma == alvo:
            return ini, fim
        elif soma < alvo:
            ini = ini + 1
        else:
            fim = fim - 1

    return -1, -1


def soma_maxima_janela(lista, k):
    """Maior soma de k elementos seguidos.
    soma_maxima_janela([1, 2, 3, 4], 2) -> 7"""
    if not lista or k > len(lista):
        return 0
    
    soma = 0
    for i in range(k):
    soma = soma + lista[i]
    melhor = soma

    for i in lista[k:]:
        soma = soma + lista[i] - lista[i - k]

        if soma > melhor:
            melhor = soma

    return melhor



def parenteses_balanceados(texto):
    """(Desafio) True se os ( ) e [ ] do texto abrem e fecham na ordem certa."""
    pilha = []

    for char in texto:
        if char == '(' or char == '[':
            pilha.append(char)
        elif char == ')':
            if not pilha or pilha.pop() != '(':
                return False
        elif char == ']':
            if not pilha or pilha.pop() != '[':
                return False

    return len(pilha) == 0
