import subprocess

result = subprocess.run(
    [r"./c/analyzer.exe",r"logs/sample.log"],
    capture_output=True,
    text=True
)

stats = {}

for line in result.stdout.strip().splitlines():
    key, value = line.split("=")
    stats[key] = int(value)


print(stats)