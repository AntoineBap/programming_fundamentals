def input_temperature(temp_str: str):
    print(f"Input data is '{temp_str}'")
    try:
        res = int(temp_str)
        if res < 0:
            raise ValueError(
                f"Caught input_temperature error: {res}°C"
                f" is too cold for plants (min 0°C)"
            )
        elif res > 40:
            raise ValueError(
                f"Caught input_temperature error: {res}°C"
                f" is too hot for plants (max 40°C)"
            )
        else:
            print(f"Temperature is now {res}°C\n")
    except ValueError as e:
        print(e)
        print("")


def test_temperature():
    input_temperature("25")
    input_temperature("abc")
    input_temperature("100")
    input_temperature("-50")


if __name__ == "__main__":
    print("=== Garden Temperature ===\n")
    test_temperature()
    print("All tests completed - program didn’t crash!")
