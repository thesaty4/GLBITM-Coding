from abc import ABCMeta, abstractmethod
class Shape(metaclass=ABCMeta):
    def __init__(self):
        print("I am in init")

        @abstractmethod
        def draw_shape(self):
            pass
        @abstractmethod
        def set_color(self):
            pass

class Circle(Shape):
    def draw_shape(self):
        print("Draw Circle")


        