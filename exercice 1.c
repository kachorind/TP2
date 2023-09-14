# Devina Kachorin
# 14 septembre 2023
# TP2 - exercice 1.c


# Nombre de rangées (11) est défini
rangee = 11

# S’il me reste plus qu'une rangée
while rangee >= 1:
    # Je multiplie le * avec le nombre de rangée pour créer une chaîne de *
    etoile = '*' * rangee

    print(etoile)

    # Le nombre de rangées diminue d’une rangée
    rangee -= 1
