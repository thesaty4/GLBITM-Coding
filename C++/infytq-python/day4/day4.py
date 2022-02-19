# First and last charecter is upper case without loop
# name=input("Enter your name : ")
# first=name[0].upper()
# mid=name[1:len(name)-1]
# last=(name[len(name)-1]).upper()
# print(f'{first}{mid}{last}')
fruits=['Apple','Banana','Orange','Orange','Orange','Orange','Orange','Orange']
data=fruits.pop(1) 
data=fruits.pop() # it will pop last element and
print(fruits)

del fruits[1] # delete first index
del fruits # delete entire list index

fruits=['Apple','Banana','Orange','Orange','Orange','Orange','Orange','Orange']
# Question : list string element can be delete?
# Solution : No because of string object doesn't support item deleteion
# Example :
# del fruits[0][1] #TypeError: 'str' object doesn't support item deletion
print(fruits)


# Slicing
MyList=[112,3,4,5,33,44,'satya']
String='welcome'
print(MyList[0:4]) # output : [112, 3, 4, 5]
print(String[0:4]) # output : welc

# print etire list
print(MyList[:])

# print etire list
print(String[:])

# skipping element
list=[13,4,34,34,5,2,2,'satya',4.53,00.23]
string="Satya Mishra"
print(list[::2]) #Output :  [13, 34, 5, 2, 4.53] <- each second element of the list will be print
print(string[::2]) #Output : StaMsr
print(list[::4]) #Output : [13, 5, 4.53]
print(list[::-2]) #Output : [0.23, 'satya', 2, 34, 4]


list=[13,4,34,34,5,2,'satya',4.53,00.23]
print(list[-1::-3]) #Output : [0.23, 2, 34, 13]

# print String/List in reverse order
print(string[::-1]) #arhsiM aytaS < reverse string 

list=[1,2,3,4,5,6,7,8,9]
print(list[::2]) # [1, 3, 5, 7, 9] PRINT EACH 2ND VALUE

print(list[::-2]) #[9, 7, 5, 3, 1] Print each 2nd element from ending

print(list[:4000]) #[1, 2, 3, 4, 5, 6, 7, 8, 9] <- print from 0 to 40000 | No error 


list=[1,2,3,4,5,6,7,8,9]
print(list[::-4000]) #[9] <- print from 0 to -40000 | Result will be [9] 

list=['ABCSDE',2,3,4,5,6,7,8,9]
print(list[0][3:]) # OUTPUT : SDE
print(list[0][3], end=" ")

print("\n")
message="welcome to Mysore"
word=message[-7:] #" Mysore"
if(word=="mysore"):
    print("got it")
else:
    message=message[3:14] #"come to Mys"
    print(message)

# OUTPUT => come to Mys

song="JINGLE Bells jingle Bells Jingle All The Way"
song.upper()
song_words=song.split()
count=0
for word in song_words:
    if(word.startswith("jingle")):
        cout=count+1
print(count)
print(song_words)

list=[2,3,4,56]
# print(list[0:2:-1])