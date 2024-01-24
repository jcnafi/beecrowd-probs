time = io.read("*n")

part = time // 3600
time = time % 3600
io.write(part .. ":")

part = time // 60
time = time % 60
print(part .. ":" .. time)
