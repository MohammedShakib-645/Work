@echo off
cd d:\Work
git add .
git commit -m "Auto update - %date% %time%"
git push origin main
echo.
echo Push complete!
pause
