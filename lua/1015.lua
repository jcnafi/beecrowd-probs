x1, y1 = io.read("*n", "*n")
x2, y2 = io.read("*n", "*n")

x = x2-x1
y = y2-y1

x = x*x
y = y*y

s = math.sqrt(x+y)

print(string.format("%0.4f" .. s))
