friend_age={'riye':59,'ram':44,'ritu':38}

print(friend_age['riye'])

friend_age['ram']=64
print(friend_age)


dic={'abc':4,'key1':55,'key1':66} # not genrate any error but key1 change 66
print(dic['key1'])

dic.clear()
print(dic) # clear etire dictionary

friend_age={'riye':59,'ram':44,'ritu':38,9:55}
# friend_age['ram'] =95
print(friend_age[9])
print(friend_age)

friend_age={'riye':59,'ram':44,'ritu':38,'dic2':(2,34)} #put multiple value to key
print(friend_age['dic2'][1]) #34


# tuple within dictionary
car_name=(
    {'name':'Scross','year':2009},
    {'name':'fieasta','year':2008},
    {'name':'maruti','year':2007}
)

print(car_name[0]['name']) #Scross
print(car_name) #({'name': 'Scross', 'year': 2009}, {'name': 'fieasta', 'year': 2008}, {'name': 'maruti', 'year': 2007})

# ##################################### These are datastructure ################################
# list : Orderd, change, duplicacy ---- represent []
# tuple : Orderd, unchangable, duplicacy allowed ------ represent () without parenthis (make tuple with single element (,))
# set : Unorderd, changable, duplicacy not allowed ------ represent {}
# dictionary : orderd, changeable, duplicacy not allowed, {key:value}
# ##################################### These are datastructure ################################

friend_age={'riye':59,'ram':44,'ritu':38,'dic2':(2,34)} #put multiple value to key
print(friend_age.keys())
print(friend_age.values())

# dict_keys(['riye', 'ram', 'ritu', 'dic2'])
# dict_values([59, 44, 38, (2, 34)])


# find out common city between UP and NCR,
# I have provided two variables: 
# up_city={"Noida","Kanpur","Lucknow"}
# ncr_city=set() # or {}
# city=input("ENTER THE CITY : ")
# ncr_city.add(city)
# print(up_city.intersection(ncr_city))


lottery_numbers={34,46,9,67,12}
players={{'name':'satya','numbers':{12,3,45,6}},{'name':'Anoop','numbers':{46,3,67,6}}}
# print(players)
firstPlayer = lottery_numbers.intersection(players[0]['numbers'])
print(f'{players[0]["name"]}, GOT Lottery Numbers : {firstPlayer}, Number of Lottery {len(firstPlayer)}')
secondPlayer = lottery_numbers.intersection(players[1]['numbers'])
print(f'{players[1]["name"]}, GOT Lottery Numbers : {secondPlayer}, Number of Lottery {len(secondPlayer)}')
