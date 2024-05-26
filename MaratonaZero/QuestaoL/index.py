N = int(input())
nomes_criancas = input().split()
nomes_ordenados_pela_idade = input().split()

crianca_irritante = nomes_ordenados_pela_idade[0]

nomes_criancas_dict = {nome: False for nome in nomes_criancas}
nomes_ordenados_pela_idade_dict = {nome: False for nome in nomes_ordenados_pela_idade}

for nome, dormindo in nomes_criancas_dict.items():
    print(f"{crianca_irritante}", end=' ')
    nomes_ordenados_pela_idade_dict[nome] = True
    
    if (nome == crianca_irritante and dormindo == False):
        for nova_crianca_irritante, dormindo in nomes_ordenados_pela_idade_dict.items():
            if (dormindo == False):
                crianca_irritante = nova_crianca_irritante
                break
    

