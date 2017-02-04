basket = ['Apple', 'Bun', 'Cola']
crate = ['Egg', 'Fig', 'Grape']

print('Basket List:', basket)
print('Basket Elements:', len(basket)) # Return the amount of items in a list using len()

basket.append('Damson')
print('Appended:', basket)
print('Last Item Removed:', basket.pop())
print('Basket List:', basket)

basket.extend(crate)
print('Extended:', basket)

del basket[1]
print('Item Removed:', basket)

del basket[1:3]
print('Slice Removed:', basket)
