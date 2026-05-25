import pandas as pd

def rising_temperature(weather: pd.DataFrame) -> pd.DataFrame:
    weather = weather.sort_values("recordDate")

    weather["previous_date"] = weather["recordDate"].shift(1)
    weather["previous_temp"] = weather["temperature"].shift(1)

    result = weather[
        (weather["recordDate"] - weather["previous_date"]).dt.days == 1
    ]

    result = result[result["temperature"] > result["previous_temp"]]

    return result[["id"]]
