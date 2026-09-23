def ft_seed_inventory(seed_type: str, quantity: int, unit: str) -> None:
    if unit == "packets":
        unit_display = "packets available"
        suffix = ""
    elif unit == "grams":
        unit_display = "grams total"
        suffix = ""
    elif unit == "area":
        unit_display = "square meters"
        suffix = "covers"
    else:
        print("Unknown unit type")
        return
    print(seed_type, " seeds: ", suffix, quantity, unit_display)
