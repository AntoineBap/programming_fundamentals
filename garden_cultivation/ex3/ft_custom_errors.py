class GardenError(Exception):
    def __init__(self, message="Unknown garden error"):
        self.message = message
        super().__init__(self.message)


class PlantError(GardenError):
    def __init__(self, message="Unknown plant error"):
        self.message = message
        super().__init__(self.message)


class WaterError(GardenError):
    def __init__(self, message="Unknown water error"):
        self.message = message
        super().__init__(self.message)


def raise_plant():
    raise PlantError("The tomato plant is wilting!")


def raise_water():
    raise WaterError("Not enough water in the tank!")


def main_errors():
    print("=== Custom Garden Errors Demo ===")
    print("\nTesting PlantError...")
    try:
        raise_plant()
    except PlantError as e:
        print(f"Caught PlantError: {e}")
    print("\nTesting WaterError...")
    try:
        raise_water()
    except WaterError as e:
        print(f"Caught WaterError: {e}")
    print("\nTesting catching all garden errors...")
    for f in (raise_water, raise_plant):
        try:
            f()
        except GardenError as e:
            print(f"Caught GardenError: {e}")
    print("\nAll custon error types work correctly!")


if __name__ == "__main__":
    main_errors()
