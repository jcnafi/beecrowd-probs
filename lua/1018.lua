n = io.read("*n")
notes = {100, 50, 20, 10, 5, 2, 1}

print(n)
for i, v in pairs(notes) do 
    times = n // v;
    n = n % v;
    print(times .. " nota(s) de R$ " .. v .. ",00")
end
