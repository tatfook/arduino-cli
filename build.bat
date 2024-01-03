del /Q /S /F ".\Arduino15\staging\*"
del /Q /S /F "arduino_local.zip"

powershell -Command "Compress-Archive -Path * -DestinationPath arduino_local.zip"


