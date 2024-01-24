age = io.read("*n")

part = age // 365
age = age % 365
print(part .. " ano(s)")

part = age // 30
age = age % 30
print(part .. " mes(es)")
print(age .. " dia(s)")
