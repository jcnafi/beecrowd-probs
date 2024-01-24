local a, b, c = io.read("*n", "*n", "*n")

local major = (a+b+math.abs(a-b))/2
major = (major + c + math.abs(major-c))/2

print(string.format("%0.0f", major) .. " eh o maior")
