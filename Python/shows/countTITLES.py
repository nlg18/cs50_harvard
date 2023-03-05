import csv

titles = {} #(dict)

with open("CS50 2019 - Lecture 7 - Favorite TV Shows (Responses) - Form Responses 1.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        title = row["title"].upper()
        if title not in titles:
            titles[title] = 0
        titles[title] += 1

#def f(title):
#    return titles[title]
#substituida pelo lambda abaixo

for title in sorted(titles, key=lambda title: titles[title], reverse=True):
    print(title)
    print(titles[title])
