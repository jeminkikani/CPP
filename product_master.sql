-- create table client_master
\sql
\connect root@localhost:3306

create database dbname
show databases;
use dbname

create table PRODUCT_MASTER
(
    PRODUCT_NO varchar(6),
    DESCRIPTION varchar(15),
    PROFIETPERCENT int(4),
    UNITMEASURE varchar(10),
    QTYONHAND int(8),
    REODEREVAL int(8),
    SALEPRICE int(8),
    COSTPRICE int(8)
);

desc PRODUCT_MASTER;

insert into PRODUCT_MASTER values("p00001","t-shirt",5,"piece",200,50,350,250),
insert into PRODUCT_MASTER values("p0345","shirt",6,"piece",150,50,500,350),
insert into PRODUCT_MASTER values("p06734","cotten-jeans",5,"piece",100,20,600,450),
insert into PRODUCT_MASTER values("p07865","jeans",5,"piece",100,20,750,500),
insert into PRODUCT_MASTER values("p07868","trouser",2,"piece",150,50,850,550),
insert into PRODUCT_MASTER values("p07885","pullovers",2.5,"piece",80,30,700,450),
insert into PRODUCT_MASTER values("p07965","denim_shirt",4,"piece",100,40,350,250),
insert into PRODUCT_MASTER values("p07975","lycra-tops",5,"piece",70,30,300,175),
insert into PRODUCT_MASTER values("p08865","skirts",5,"piece",75,30,450,300);


select * from PRODUCT_MASTER;