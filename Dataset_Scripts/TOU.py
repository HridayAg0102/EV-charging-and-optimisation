import pandas as pd
# TOU Prices are provided by the government for the given time duration.

TOU = [7]*36 + [11]*16 + [13]*20 + [11]*8 + [7]*16

# submission = pd.DataFrame({
# 	"TOU Price (Rs/hr)" : TOU
# 	})

print(TOU)
# submission.to_csv("TOU_Price.csv")