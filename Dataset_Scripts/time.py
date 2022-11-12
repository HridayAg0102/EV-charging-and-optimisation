import pandas as pd
# Python script for dataset generation.

Time = []

def fill_time(Time):
	mi = 0
	hr = 0
	for i in range(96):
		mi += 15
		if mi >= 60:
			hr += 1
			mi = 0
			Time.append(f"{hr}:{mi}")
		else:
			Time.append(f"{hr}:{mi}")

	return Time


list_ = fill_time(Time)

time = pd.DataFrame(
	{
	"Time": list_	
	})

time.to_csv("time.csv", index = False)
