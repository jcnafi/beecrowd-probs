local num = io.read("*n")
local hours = io.read("*n")
local salary = io.read("*n")

print("NUMBER = " .. num)
print("SALARY = U$ " .. string.format("%0.2f", (hours*salary)))
