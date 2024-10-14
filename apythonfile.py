#To Ping the google DNS 5 times

import os

if __name__ == "__main__":
    os.system("ping google.com -c 5")
    print("pinging google")
    print("Ping complete")