def ft_count_harvest_recursive(total_days=None, day=1):
    if total_days is None:
        total_days = int(input("Days until harvest: "))
    if day > total_days:
        print("Harvest time!")
        return
    print("Day ", day)
    ft_count_harvest_recursive(total_days, day + 1)
