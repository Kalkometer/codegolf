#!/usr/bin/ruby
# @author Rene Helmke <rhelmke@uos.de>
# Codegolf Arabic to Roman Numbers Conversion in Ruby with 138 characters.

#|----------------------------------------------------------------------------------------------------------------------------------------| 138 Characters :3
 f=->(n){[1000,900,500,400,100,90,50,40,10,9,5,4,1].zip(%w[M CM D CD C XC L XL X IX V IV I]).each{|v,l|print l*(n/v);return f[n%v]if v<=n}}

# Call
(1..3999).each { |i| print i.to_s<<"->"; f[i]; puts "" }