hero0 = {
    "Имя": "Антоша",
    "Возраст": 39,
    "Здоровье": 94,
    "Сытость": 0,
    }

hero1 = {
    "Имя": "Андрей",
    "Возраст": 16,
    "Здоровье": 150,
    "Сытость": "никакая",
    }


def stolovaya (*geroyi):
    for hero in geroyi:
        hero ["Сытость"] = 100

stolovaya(hero0,hero1)
print (hero0,hero1)


input("нажмите ENTER для выхода")