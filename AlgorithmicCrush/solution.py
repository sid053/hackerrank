input().split(" ")       
mylist = [0] * long(int(x[0])+1)
sum = 0

for i in range (long(x[1])):
        op = raw_input().split()  
        mylist[long(op[0])-1] += long(op[2])
        mylist[long(op[1])] -= long(op[2])
        
max = temp = 0 
for i in range (len(mylist) - 1):
    temp = temp+mylist[i]
    if(max<temp):
            max = temp;
        
    
               
print max


       
