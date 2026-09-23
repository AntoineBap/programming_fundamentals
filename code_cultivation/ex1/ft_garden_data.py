class Plant:
    def __init__(self, name: str, height: float, age: int):
        self.name = name
        self.height = height
        self.age = age

    def show(self) -> None:
        print(f"{self.name}: {self.height}cm, {self.age} days old")


def ft_garden_data():
    first_plant = Plant("Rose", 25.0, 30)
    second_plant = Plant("Sunflower", 80.0, 45)
    third_plant = Plant("Cactus", 15.0, 120)

    print("=== Garden Plant Registry ===")
    first_plant.show()
    second_plant.show()
    third_plant.show()


if __name__ == "__main__":
    ft_garden_data()
