main = do
   [show x | x <- [1..99], x `mod` 2 == 0]
   