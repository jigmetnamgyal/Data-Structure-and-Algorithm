no = int(input("Enter the number: "))
count = 0
if no == 0:
    count = 1
while no > 0:
    no = no // 10
    count += 1

print(count)


