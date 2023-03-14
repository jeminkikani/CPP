-- create table client_master
\sql
\connect root@localhost:3306
      
create database dbname
show databases;
use dbname

create table CLIENT_MASTER
(       
    CLIENT_NO varchar(6),
    NAME varchar(20),
    ADDRESS1 varchar(30),
    ADDRESS2 varchar(30),
    CITY varchar(15),
    PINCODE int(8),
    STATE varchar(15),
    BALDUE int(10)
);

desc CLIENT_MASTER;

insert into CLIENT_MASTER values ("C00002","mamta majmudar","A-234 borivali","A-219 borivali","madrash",780001,"tamilnadu",0);
insert into CLIENT_MASTER values ("C00001","IVAN bayros","A-234 borivali","A-219 borivali","mumbai",400054,"maharastra",15000);
insert into CLIENT_MASTER values ("C00003","chhaya bankar","A-234 borivali","A-219 borivali","mumbai",400057,"maharastra",5000);
insert into CLIENT_MASTER values ("C00004","asvini joshi","A-234 borivali","A-219 borivali","bangalore",560001,"karnataka",0);
insert into CLIENT_MASTER values ("C00005","hansal colaco","A-234 borivali","A-219 borivali","mumbai",400060,"maharastra",2000);
insert into CLIENT_MASTER values ("C00006","dipak sharma","A-234 borivali","A-219 borivali","mangalor",560050,"karnataka",0);

select * from CLIENT_MASTER;

----------------------------------------------------------------------------------------------------------------------------
-- product master 

create table PRODUCT_MASTER
(
    PRODUCT_NO varchar(6),
    DESCRIPTION varchar(15),    
    PROFIETPERCENT int(4),
    UNITMEASURE varchar(10),
    QTYONHAND int(8),
    REODEREVAL int(8),
    SALEPRICE int(8),
    COSTPRICE int(8),

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

-------------------------------------------------------------------------------------------------------------------
-- saleman_master

create table saleman_master
(
    SALESMAN_NO varchar(6),
    SALESMAN_NAME varchar(20),
    ADDRESS1 varchar(30),
    ADDRESS2 varchar(30),
    CITY varchar(20),
    PINCODE int(8),
    STATE varchar(20),
    SALMAT int(8),
    TGTTOGET int(6),
    YTDSALES int(6),
    REMARKS varchar(60)
);

desc saleman_master;

insert into saleman_master values("s00001","aman","a-14","worli","mumbai",400002,"maharastra",3000,100,50,"good"),
insert into saleman_master values("s00002","omkar","65","nariman","mumbai",400001,"maharastra",3000,200,100,"good"),
insert into saleman_master values("s00003","raj","p-7","bandra","mumbai",400032,"maharastra",3000,200,100,"good"),
insert into saleman_master values("s00004","ashish","A-5","juhu","mumbai",400044,"maharastra",3500,200,150,"good");


select * from saleman_master;

        
-------------------------------------------------------------------------------------------------------------------------------
-- 1. set from specific column 
select NAME from CLIENT_MASTER;
-- 2.
select * from CLIENT_MASTER;
-- 3.
select NAME,STATE,CITY from CLIENT_MASTER;
-- 4.
select DESCRIPTION from PRODUCT_MASTER;
-- 5.
select * from CLIENT_MASTER where CITY="mumbai";
-- 6.
select * from saleman_master w  here SALMAT=3000;
---------------------------------------------------------------------------------------------------------------------------
-- update query
-- 1.
update CLIENT_MASTER set CITY="banglore" where CLIENT_NO="C00005";
-- 2.
update CLIENT_MASTER set BALDUE=1000 where CLIENT_NO="C00001";
-- 3.
update PRODUCT_MASTER set COSTPRICE=950 where DESCRIPTION="trouser";
-- 4.                                                   
update saleman_master set CITY="pune";

------------------------------------------------------------------------------------------------------------------------------------
-- delete query
-- -1.
delete from CLIENT_MASTER where CLIENT_NO="C00002";

delete from CLIENT_MASTER where NAME="hansal colaco";

delete from CLIENT_MASTER where PINCODE=560050;

delete from CLIENT_MASTER;

-------------------------------------------------------------------------------------------------------------------------------------
-- 2.
delete from PRODUCT_MASTER where PRODUCT_NO="p07868";

delete from PRODUCT_MASTER where DESCRIPTION="skirts";

delete from PRODUCT_MASTER where COSTPRICE=250;

delete from PRODUCT_MASTER;

----------------------------------------------------------------------------------------------------------------------------------------
-- 3.
delete from saleman_master where ADDRESS1="a-5";

delete from saleman_master where ADDRESS2="bandra";

delete from saleman_master where YTDSALES=50;

delete from saleman_master;