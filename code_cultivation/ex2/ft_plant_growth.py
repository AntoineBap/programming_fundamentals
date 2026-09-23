class Plant:
    def __init__(self, name: str, height: float, days: int):
        self.name: str = name
        self.height: float = height
        self.days: int = days

    def show(self):
        print(f"{self.name}: {self.height} cm, {self.days} days old")

    def grow(self, cm):
        self.height = round(self.height + cm, 2)

    def age(self):
        self.days += 1


def ft_plant_growth(name: str, height: float, days: int):
    plant = Plant(name, height, days)

    print("=== Garden Plant Growth ===")
    plant.show()
    growth = round(plant.height / 10, 2)
    growth_total: float = 0

    for i in range(1, 8):
        print(f"=== Day {i} ===")
        growth_total += growth
        plant.grow(growth)
        plant.age()
        plant.show()

    print(f"Growth this week: {round(growth_total, 2)}cm")


if __name__ == "__main__":
    ft_plant_growth("Rose", 25.0, 30)
