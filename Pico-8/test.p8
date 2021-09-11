pico-8 cartridge // http://www.pico-8.com
version 29
__lua__
x=1
y=1

function draw_target(x,y)
circfill(x,y,16,8)
circfill(x,y,12,7)
circfill(x,y,8,8)
circfill(x,y,4,7)
end

function _init()
cls()
end

function _update()
draw_target(x,y)
x+=1
y+=1
end

function _draw()
x+=1
y+=1
cls()
end
__gfx__
00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00700700000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00077000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00077000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00700700000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
