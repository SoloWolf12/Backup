pico-8 cartridge // http://www.pico-8.com
version 29
__lua__
function _init()
game_over=false
win=false
g=0.025
make_player()
make_ground()
end

function make_ground()
 --create the ground
 gnd={}
 local top=96 --highest point
 local btm=120 --lowest point
 --set up the landing pad
 pad={}
 pad.width=15
 pad.x=rndb(0,126-pad.width)
 pad.y=rndb(top,btm)
 pad.sprite=2
 --create ground at pad
 for i=pad.x,pad.x+pad.width do
 gnd[i]=pad.y
 end
 --create ground right of pad
 for i=pad.x+pad.width+1,127 do
 local h=rndb(gnd[i-1]-3,gnd[i-1]+3)
 gnd[i]=mid(top,h,btm)
 end
 --create ground left of pad
 for i=pad.x-1,0,-1 do
 local h=rndb(gnd[i+1]-3,gnd[i+1]+3)
 gnd[i]=mid(top,h,btm)
 end
end
function draw_ground()
 for i=0,127 do
 line(i,gnd[i],i,127,5)
 end
 spr(pad.sprite,pad.x,pad.y,2,1)
end

function _update()
if (not game_over) then
move_player()
check_land()
else
if (btnp(5)) _init()
end
end

function check_land()
 l_x=flr(p.x) --left side of ship
 r_x=flr(p.x+7) --right side of ship
 b_y=flr(p.y+7) --bottom of ship
 over_pad=l_x>=pad.x and r_x<=pad.x+pad.width
 on_pad=b_y>=pad.y-1
 slow=p.dy<1
 if (over_pad and on_pad and slow) then
 end_game(true)
 elseif (over_pad and on_pad) then
 end_game(false)
 else
 for i=l_x,r_x do
 if (gnd[i]<=b_y) end_game(false)
 end
 end
end

function end_game(won)
 game_over=true
 win=won
if (win) then 
sfx(1)
else
sfx(2)
end
end

function move_player()
p.dy+=g      --aceleracion inicial es 0 pero le damos gravedad
thrust()
p.x+=p.dx
p.y+=p.dy  --ahora a la posicion inical le agregamos la aceleracion

stay_on_screen()
end

function thrust()

if (btn(0)) p.dx-=p.thrust
if (btn(1)) p.dx+=p.thrust
if (btn(2)) p.dy-=p.thrust

if (btn(0) or btn(1) or btn(2)) sfx(0)
end

function _draw()
cls()
draw_stars()
draw_ground()
draw_player()

if (game_over) then
 if (win) then
 print("no es divertido, lo se",48,48,11)
 else
 print("la cagaste",48,48,8)
 end
 print("x para seguir perdiendo el tiempo",20,70,5)
 end

end

function rndb(low,high)
return flr(rnd(high-low+1)+low)
end

function draw_stars()
srand(1)
for i=1,50 do
pset(rndb(0,127),rndb(0,127),rndb(5,7))
end
srand(time())
end

function make_player()
p={}
p.x=60
p.y=8
p.dx=0
p.dy=0
p.sprite=1
p.alive=true
p.thrust=0.075
end

function draw_player()
spr(p.sprite,p.x,p.y)
if (game_over and win) then
 spr(4,p.x,p.y-8) --flag
 elseif (game_over) then
 spr(5,p.x,p.y) --explosion
 end
end
-->8
function stay_on_screen()
if (p.x<0) then
p.x=0
p.dx=0
end

if (p.x>119) then
p.x=119
p.dx=0
end

if (p.y<0) then
p.y=0
p.dy=0
end
end

__gfx__
0000000000666600761dddddddddd766000000000088880000000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000066c76607666666666666660000000000899998000000000000000000000000000000000000000000000000000000000000000000000000000000000
0070070066ccc766007666666666660000000000899aa99800000000000000000000000000000000000000000000000000000000000000000000000000000000
0007700066cccc6600000000000000000000000089aaaa9800000000000000000000000000000000000000000000000000000000000000000000000000000000
0007700066555566000000000000000000b6000089aaaa9800000000000000000000000000000000000000000000000000000000000000000000000000000000
007007000666666000000000000000000bb60000899aa99800000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000050550500000000000000000bbb600000899998000000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000660660660000000000000000000600000088880000000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000000000000000000000000000000600000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
__sfx__
000100000b05000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00100000160501705013050130500f0500f0501605016050000000000011050130501305000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00100000310502b0502805025050200501f0501c050190501605012050100500c0500905007050060500505004050030500305003050000000000000000000000000000000000000000000000000000000000000
