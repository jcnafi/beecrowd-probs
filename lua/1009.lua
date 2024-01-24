local name = io.read()
local fxd_salary = io.read("*n")
local month_total = io.read("*n")

month_total = month_total * 0.15

print("TOTAL = R$ " .. string.format("%0.2f", (fxd_salary+month_total)))
