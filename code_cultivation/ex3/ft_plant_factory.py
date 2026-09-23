class Plant:
    def __init__(self, name: str, height: float, days: int):
        self.name: str = name
        self.height: float = height
        self.days: int = days

    def show(self) -> None:
        print(f"{self.name}: {self.height} cm, {self.days} days old")

    def grow(self, cm):
        self.height = round(self.height + cm, 2)

    def age(self):
        self.days += 1


def ft_plant_factory() -> None:
    plants_factory: list[Plant] = []
    plants_factory.append(Plant("Rose", 25.0, 30))
    plants_factory.append(Plant("Tulip", 21.7, 22))
    plants_factory.append(Plant("Petunias", 12.3, 12))
    plants_factory.append(Plant("Sword Lily", 14.6, 14))
    plants_factory.append(Plant("Lycoris", 22.1, 27))

    print("===== Plant Factory Output =====")
    for plant in plants_factory:
        print("Created: ", end="")
        plant.show()


if __name__ == "__main__":
    ft_plant_factory()
