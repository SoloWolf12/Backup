pico-8 cartridge // http://www.pico-8.com
version 29
__lua__
function _init()
    balldir=flr(rnd(2))
    gravity=true
    spriteselect()
    particles={}
    max_vel=3
    min_life=5
    max_life=12
    colors={8,9,9,10,6,6,7}
    g=0.1
    min_amount=2
    max_amount=5
    contact = false
end

function gameover()
    if spry>=119 then
        print ("chupala",50,50,1)
        stop()
    end
end

function _draw()
    --cls()
    background()
    drawplayer()
    drawball()
    foreach(particles,draw_spark)
end

function _update()
    gameover()
    spriteselect()
    changesprite()
    movement()
    ballmovement()
    checkhit()
    collision()
end

-->8
--player
palx=50
paly=123
palx2=80
paly2=126
--enemy
sprite=1
randomsprte=1
sprx=63
spry=10
--physics
speed=1
playerspeed=1

function spriteselect()
    if randomsprte % 2 == 0 then
        sprite= 2
    else
        sprite= 3
    end
end

function changesprite()
    if sprx <= 1 then
        randomsprte+=1
        sfx(0)
    end
    if sprx >= 119 then
        randomsprte+=1
        sfx(0)
    end
end

function background()
    rectfill(0,0,127,127,6)
    rectfill(1,1,126,126,3)
end

function movement()
    if btn(0) and not (palx==1) then
        palx-=playerspeed
        palx2-=playerspeed
    end
    if btn(1) and not (palx2==126)then
        palx+=playerspeed
        palx2+=playerspeed
    end
end

function drawplayer()
    rectfill(palx,paly,palx2,paly2,1)
end

function drawball()
    spr(sprite,sprx,spry)
end

function ballmovement()
    if balldir==1 then
        sprx+=1 * speed
    end
    if balldir==0 then
        sprx-=1 * speed
    end
    changedir()
end

function changedir()
    if sprx <= 1 then
        balldir=1
    end
    if sprx >= 119 then
        balldir=0
    end
--randomsprte+=1
end

function checkhit()
    if gravity == true then -- -Y
        spry+=1
    end
    if spry >= 116 and sprx >= palx and sprx <= palx2 then
        gravity = false
        spark_position(sprx, spry)
        randomsprte+=1
        sfx(0)
    end
    if gravity == false then -- +Y
        spry-=1
    end
    if spry <=1 then
        gravity = true
        spark_position(sprx, spry) --(x, 1)
        randomsprte+=1
        sfx(0)
    end
end

function draw_spark(spark)
local sparkcol=flr(spark.life/spark.life_start*#colors+1)
pset(spark.x,spark.y,colors[sparkcol])
end
-->8
--to do list
--elevar la paleta
--poner personas debajo corriendo
--la pelota si golpea las personas estas mueren, si no quedan personas perdemos
--poder capturar la pelota con la paleta
--3 capturas y podemos nosotros tirar la pelota
--hay que golpear a una nave que se mueve en la parte superior del mapa
-->8
function collision()
    if (contact) then
        for i=1, rndb(min_amount,max_amount) do
            add_spark(sparx,spary)
                --4dir  (ver la direcccion de la bola)
        end
    end
    foreach(particles,update_spark)
end

sparx=0
spary=0

function spark_position(ball_x, ball_y) --x 1
    contact = true
    sparx = sprx
    spary = spry + 4
end

function add_spark(x,y)
    local spark={}
    spark.x=x
    spark.y=y
    spark.dx=rnd(max_vel)-max_vel/2 --4direcciones
    spark.dy=rnd(max_vel)*-1  -- -2-1
    spark.life_start=rndb(min_life,max_life)
    spark.life=spark.life_start
    add(particles,spark)
end

function update_spark(spark)
    if spark.life <=0 then
    del(particles,spark)
    else
        spark.life-=1
        spark.dy+=g
        if ((spark.y+spark.dy)>127) spark.dy*=-0.8  --bounce
        spark.x=spark.x+spark.dx
        spark.y=spark.y+spark.dy
    end
    contact = false
end

function rndb(low,high)
    return flr(rnd(high-low+1)+low)
end
__gfx__
00000000009999000099990000aaaa00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
000000000999999009aaaa900a9999a0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00700700999999999a9889a9a9a88a9a000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00077000999999999a8888a9a982289a000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00077000999999999a8888a9a982289a000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00700700999999999a9889a9a9a88a9a000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
000000000999999009aaaa900a9999a0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000009999000099990000aaaa00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
0000cccccccccccccccccccccccccc00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
000c11111111111111111111111111c0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00c111ccccccccc0000ccccccccc111c000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
0cc1cc111111c00000000c111111cc1c000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
0cccccccc0000000000000000ccccccc000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
__sfx__
000100000000000000000000000005070000000000000000000000000000000000000000000000000000000000000240000f00007000000000000000000000000000000000000000000000000000000000000000
