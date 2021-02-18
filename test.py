from cmake_example import *
import cmake_example

print(add(2, 3))
my_dog = Pet('Pluto', 5)
print(my_dog.get_name())
print(my_dog.get_hunger())
my_dog.go_for_a_walk()
print(my_dog.get_hunger())

my_pol = Polynomial(4,5,6,7,8)
my_pol.Set(1,2,3,4,5)
print(my_pol.GetA())
print(my_pol.GetB())
print(my_pol.GetC())
print(my_pol.GetD())


my_pol.SetA(14)
my_pol.SetB(15)
my_pol.SetC(16)
my_pol.SetD(17)

print(my_pol.GetA())
print(my_pol.GetB())
print(my_pol.GetC())
print(my_pol.GetD())

osi_struct = OSIPointStruct(1,2,3,4,5)
print(osi_struct)
print(OSIPoints([osi_struct ]))
"""
my_osi_point = OSIPoints([(1,2,3,4,5)])


[{
  "s": 1,
  "x": 2,
  "y": 3,
  "z":4,
  "h":5,
}, {
  "s": 1,
  "x": 2,
  "y": 3,
  "z":4,
  "h":5,
}]
"""


