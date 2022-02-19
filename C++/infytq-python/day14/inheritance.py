class Phone:
    def __init__(self,price,brand):
        self.price=price
        self.brand=brand

    def buy(self):
        print("Buying a phone")


    def return_phone(self):
        print("Returing a phone")

class Smartphone:
    def __init__(self,price,brand,camera):
        self.price=price 
        self.brand=brand 
        self.camera=camera