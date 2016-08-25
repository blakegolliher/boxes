#!/usr/bin/env ruby

width = ARGV[0].to_i
height = ARGV[1].to_i

def box(x,y)
    puts "*" * x 
    0.upto(y-2) do 
    puts("|" + ' ' * (x- 2) + "|")
    end
  puts "*" * x 
end

box(width,height)
