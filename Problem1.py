
K = 17

def k_check(list):
    for index1, number1 in enumerate(list):
        for index2, number2 in enumerate(list):
            if number1 != number2:
                if number1 + number2 == 17:
                    return True
    return False


numbers = [17,17,17,17]
k_boolean = k_check(numbers)
if k_boolean:
    print("Two numbers in this list add up to ",K)
else:
    print("There are no pairs of numbers in this list which add up to ",K)