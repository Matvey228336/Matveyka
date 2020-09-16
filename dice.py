import random

input("ENTER - бросить кости")
user_score = random.randrange(2, 12)
ai_score = random.randrange(2, 12)
print("У вас - ", user_score)
print("У компьютера - ", ai_score)
if user_score > ai_score:
    print("Вы выиграли!")
elif user_score == ai_score:
    print("Ничья!")
else :
    print("Вы проиграли!")
input("Нажмите ENTER для выхода!")