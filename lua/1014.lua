local dis, time = io.read("*n", "*n")
local speed = dis/time
print(string.format("%0.3f", speed) .. " km/l")
