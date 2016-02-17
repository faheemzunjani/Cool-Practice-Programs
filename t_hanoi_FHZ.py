# Program to solve the Tower Of Hanoi problem
# Faheem Hassan Zunjani

def towerHanoi(n,src,dest,temp):
    if(n==1):
        print('Move from '+str(src)+' to '+str(dest))
    else:
        towerHanoi(n-1,src,temp,dest)
        print('Move from '+str(src)+' to '+str(dest))
        towerHanoi(n-1,temp,dest,src)


n=int(input("No of discs: "))

towerHanoi(n,'X','Y','Z')
