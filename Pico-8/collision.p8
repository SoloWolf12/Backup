pico-8 cartridge // http://www.pico-8.com
version 29
__lua__
--collision

function _init()
    particles={}
    max_vel=3
    min_life=5
    max_life=12
    colors={8,9,9,10,6,6,7}
    g=0.1
    min_amount=2
    max_amount=5
end

function _update()
    collision()
end

function collision()
    if (btn(4)) then
        for i=1, rndb(min_amount,max_amount) do
            add_spark(64,64)
                --4dir  (ver la direcccion de la bola)
        end
    end
    foreach(particles,update_spark)
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
end

function rndb(low,high)
    return flr(rnd(high-low+1)+low)
end

function _draw()
    cls()
    foreach(particles,draw_spark)
end

function draw_spark(spark)
local sparkcol=flr(spark.life/spark.life_start*#colors+1)
pset(spark.x,spark.y,colors[sparkcol])
end













__gfx__
00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00700700000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00077000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00077000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00700700000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
