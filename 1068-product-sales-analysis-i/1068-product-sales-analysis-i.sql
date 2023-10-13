# Write your MySQL query statement below
 SELECT product_name, year,price
 From Sales
 left join Product
 On Sales.product_id=Product.product_id;