
salary=350 
hours=0
total=0
minH= 40

hours= int(input("Please write how many hours you worked this week"))

if (hours > 40 ):
    total= (1.5)(salary)*(hours-40) + (40)(salary)
else:
    total= salary*hours

print("Your salary is: ", total)

