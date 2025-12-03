def count(l):
    return sum([len(x) for x in l])

single_digit_nums = ["one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
teen_nums= ["ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"]
tens= ["twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"]

one_hundred_nums = count(single_digit_nums) + count(teen_nums) + sum([len(ten)*10 + count(single_digit_nums) for ten in tens])

total_arr = [
    one_hundred_nums,
    len("one")*100 +   len("hundred")*100 + len("and")*99 + (one_hundred_nums),
    len("two")*100 +   len("hundred")*100 + len("and")*99 + (one_hundred_nums),
    len("three")*100 + len("hundred")*100 + len("and")*99 + (one_hundred_nums),
    len("four")*100 +  len("hundred")*100 + len("and")*99 + (one_hundred_nums),
    len("five")*100 +  len("hundred")*100 + len("and")*99 + (one_hundred_nums),
    len("six")*100 +   len("hundred")*100 + len("and")*99 + (one_hundred_nums),
    len("seven")*100 + len("hundred")*100 + len("and")*99 + (one_hundred_nums),
    len("eight")*100 + len("hundred")*100 + len("and")*99 + (one_hundred_nums),
    len("nine")*100 +  len("hundred")*100 + len("and")*99 + (one_hundred_nums),
    len("onethousand")
 ]

print(sum(total_arr))
