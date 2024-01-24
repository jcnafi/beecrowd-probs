local A = io.read("*n");
local B = io.read("*n");

A = A * 3.5
B = B * 7.5

local MEDIA = (A+B)/11.0

print("MEDIA = " .. string.format("%0.5f", MEDIA))
