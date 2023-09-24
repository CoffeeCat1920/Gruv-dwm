echo "copying files"
cp -r dwm ~/.dwm
cp -r status ~/.config/status
cp -r rofi ~/.config/rofi
cp -r wallpapers ~/.wallpapers
cp picom.conf ~/.config/picom.conf  

cd ~/.dwm
echo "password to build dwm"
sudo make install
