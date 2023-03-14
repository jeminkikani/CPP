create table CLIENT_MASTER1
(
    CLIENT_NO varchar(6),
    NAME varchar(20),
    ADDRESS1 varchar(30),
    ADDRESS2 varchar(30),
    CITY varchar(15),
    PINCODE int(8),
    STATE varchar(15),
    BALDUE int(10),
    constraint jk_cm1 primary key(CLIENT_NO)
);


insert into CLIENT_MASTER1 values ("C00001","mamta majmudar","A-234 borivali","A-219 borivali","madrash",780001,"tamilnadu",0);
insert into CLIENT_MASTER1 values ("C00002","IVAN bayros","A-234 borivali","A-219 borivali","mumbai",400054,"maharastra",15000);
insert into CLIENT_MASTER1 values ("C00003","chhaya bankar","A-234 borivali","A-219 borivali","mumbai",400057,"maharastra",5000);
insert into CLIENT_MASTER1 values ("C00004","asvini joshi","A-234 borivali","A-219 borivali","bangalore",560001,"karnataka",0);
insert into CLIENT_MASTER1 values ("C00005","hansal colaco","A-234 borivali","A-219 borivali","mumbai",400060,"maharastra",2000);
insert into CLIENT_MASTER1 values ("C00006","dipak sharma","A-234 borivali","A-219 borivali","mangalor",560050,"karnataka",0);

-------------------------------------------------------------------------------------------------------------------

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
    REMARKS varchar(60),
    constraint jk_sm primary key(SALESMAN_NO),
    constraint ck_product_master_1 check(SALESMAN_NO like 'S%'),
    constraint ck_product_master_2 check(SALMAT NOT in(0)),
    constraint ck_product_master_3 check(TGTTOGET NOT in(0))
);

insert into saleman_master values("S00001","aman","a-14","worli","mumbai",400002,"maharastra",3000,100,50,"good");
insert into saleman_master values("S00002","omkar","65","nariman","mumbai",400001,"maharastra",3000,200,100,"good");
insert into saleman_master values("S00003","raj","p-7","bandra","mumbai",400032,"maharastra",3000,200,100,"good");
insert into saleman_master values("S00004","ashish","A-5","juhu","mumbai",400044,"maharastra",3500,200,150,"good");

-------------------------------------------------------------------------------------------------------------------

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
    constraint ck_product_master check(PRODUCT_NO like 'P%'),
    constraint jk_pm primary key(PRODUCT_NO)
);

desc PRODUCT_MASTER;

insert into PRODUCT_MASTER values("P00001","t-shirt",5,"piece",200,50,350,250);
insert into PRODUCT_MASTER values("P0345","shirt",6,"piece",150,50,500,350);
insert into PRODUCT_MASTER values("P06734","cotten-jeans",5,"piece",100,20,600,450);
insert into PRODUCT_MASTER values("P07865","jeans",5,"piece",100,20,750,500);
insert into PRODUCT_MASTER values("P07868","trouser",2,"piece",150,50,850,550);
insert into PRODUCT_MASTER values("P07885","pullovers",2.5,"piece",80,30,700,450);
insert into PRODUCT_MASTER values("P07965","denim_shirt",4,"piece",100,40,350,250);
insert into PRODUCT_MASTER values("P07975","lycra-tops",5,"piece",70,30,300,175);
insert into PRODUCT_MASTER values("P08865","skirts",5,"piece",75,30,450,300);
insert into PRODUCT_MASTER values("P03453","Hoddis",5,"piece",150,50,550,300);

select * from PRODUCT_MASTER;

-------------------------------------------------------------------------------------------------------------------   

create table sales_order(
    Ordar_no varchar(6),
    CLIENT_NO varchar(6),
    ordar_date varchar(8),
    delyaddr varchar(25),
    SALESMAN_NO varchar(6),
    delytype varchar(8),
    billyn varchar(9),
    delydate varchar(6),
    ordarstatus varchar(10),

    constraint jk_sa primary key(Ordar_no),
    constraint pk_so foreign key(CLIENT_NO) references client_master(CLIENT_NO),
    constraint pk_je foreign key(SALESMAN_NO) references saleman_master(SALESMAN_NO),
    -- keyword     name    key     cloumn naME     keyword  table name   column name 
    constraint ck_sales_order_1 check(Ordar_no like 'O%'),
    constraint ck_sales_order_2 check(delytype=upper(delytype)),
    constraint ck_sales_order_3 check(ordarstatus in('in-process','cancelled','fulfilled','back-order'))   
);

insert into sales_order values("O19001","C00001","12june04","mumbai","S00001","F","N","2-july","in-process");
insert into sales_order values("O19002","C00002","12june04","mumbai","S00002","p","N","27june","cancelled");
insert into sales_order values("O46865","C00003","12june04","mumbai","S00003","F","y","20feb","fulfilled");
insert into sales_order values("O19003","C00004","12june04","mumbai","S00001","F","y","07apr","fulfilled");
insert into sales_order values("O46866","C00005","12june04","mumbai","S00002","p","N","22may","cancelled");
insert into sales_order values("O19008","C00006","12june04","mumbai","S00004","F","N","26july","in-process");

    select * from sales_order;

-----------------------------------------------------------------------------------------------------------------


create table sales_order_detail(
    Ordar_no varchar(6),
    PRODUCT_NO varchar(6),
    QTYordered int(8),
    qtydisp int(8),
    productrate int(10),

    constraint so_kj foreign key(Ordar_no) references sales_order(Ordar_no),
    constraint so_vk foreign key(PRODUCT_NO) references PRODUCT_MASTER(PRODUCT_NO) 
);

insert into sales_order_detail values("O19001","P00001",4,4,525);
insert into sales_order_detail values("O19001","P07965",2,1,8400);
insert into sales_order_detail values("O19001","P07885",2,1,5250);
-- update sales_order_detail set Ordar_no=019002 where productrate=5250;
-- update sales_order_detail set Ordar_no=019001 where productrate=5250;
insert into sales_order_detail values("O19002","P00001",10,0,525);
insert into sales_order_detail values("O46865","P07868",3,3,3150);
insert into sales_order_detail values("O46865","P07885",3,1,5250);
insert into sales_order_detail values("O46865","P00001",10,10,525);
insert into sales_order_detail values("O19001","P0345",4,4,1050);
insert into sales_order_detail values("O19003","P03453",2,2,1050);
insert into sales_order_detail values("O19003","P06734",1,1,12000);
insert into sales_order_detail values("O46866","P07965",1,0,8400);
insert into sales_order_detail values("O46866","P07975",1,0,1050);
insert into sales_order_detail values("O19008","P00001",10,5,525);
insert into sales_order_detail values("O19008","P07975",5,3,1050);

------------------------------------------------INBUILT FUNCTION IN SQL----------------------------------------------------
keyword function_name(column_name) from table_name;  

select length(city) from client_master1;
select min(baldue) from client_master1;
select upper(city) from client_master1;
select max(baldue) from client_master1;
select round(10.3);
select sqrt(30);

-------------------------------------------------------------JOIN QUERY-----------------------------------------------------
-- PAGE NO :-67----------------------------------------------------------------------------------------------------------- 

A.-----------------------------------------------------------------------------------------------------------------

select sod.PRODUCT_NO,pm.DESCRIPTION,cm.name
from sales_order_detail sod,sales_order so,PRODUCT_MASTER pm,  client_master1 cm
where sod.product_no=pm.product_no
and so.ordar_no=sod.ordar_no
and cm.CLIENT_NO=so.CLIENT_NO
and cm.name="IVAN bayros";

B.------------------------------------------------------------------------------------------------------------------

select pm.product_no,sod.qtydisp,so.ordar_date
from PRODUCT_MASTER pm,sales_order_detail sod,sales_order so
where pm.product_no=sod.PRODUCT_NO
and sod.ordar_no=so.ordar_no
and so.ordar_date="12june04";

C.------------------------------------------------------------------------------------------------------------------

select distinct pm.DESCRIPTION 
from sales_order_detail sod, product_master pm 
where sod.product_no=pm.product_no; 

D.--------------------------------------------------------------------------------------------------------------------

select description,product_master.product_no,name
from product_master,client_master1,sales_order,sales_order_detail
where description = 'trouser'
and product_master.PRODUCT_NO = sales_order_detail.PRODUCT_NO
and sales_order_detail.ordar_no = sales_order.ordar_no
and sales_order.client_no = client_master1.client_no ;

E.--------------------------------------------------------------------------------------------------------------------

SELECT SOD.PRODUCT_NO, SOD.ORDER_NO 
FROM SALES_ORDER_DETAILS SOD, SALES_ORDER SO, PRODUCT_MASTER PM 
WHERE SO.ORDER_NO = SOD.ORDER_NO 
AND PM.PRODUCT_NO = SOD.PRODUCT_NO 
AND SOD.QTYORDERED description ="pullovers";

F.--------------------------------------------------------------------------------------------------------------------

select name,description,QTYordered 
from client_master1,product_master,sales_order,sales_order_detail 
where name in('Ivan Bayross','mamta majmudar') 
and client_master1.client_no = sales_order.client_no 
and sales_order.Ordar_no = sales_order_detail.Ordar_no 
and sales_order_detail.product_no = product_master.product_no;

g---------------------------------------------------------------------------------------------------------------------

select DESCRIPTION,QTYordered 
from product_master,sales_order_detail,sales_order 
where product_master.product_no = sales_order_detail.product_no 
and sales_order_detail.Ordar_no = sales_order. Ordar_no 
and client_no in('C00001','C00002');

-------------------------------------------------------------------------------------------------------------------------
-- page no:-48-----------------------------------------------------------------------------------------------------------

-- (1)
select NAME from CLIENT_MASTER1 where SUBSTR(NAME,2,1)='a';

-- (2)
select CITY from CLIENT_MASTER1 where CITY like 'M%';

-- (3)
select name, CITY from CLIENT_MASTER1 where CITY like 'bangalore%';

--- (4)
select NAME, BALDUE from CLIENT_MASTER1 where BALDUE>10000;

-- (5)
select * from sales_order 
where (ordar_date='12june04' or ordar_date='12june04');
-- where dateformat (ORDERDATE, %d-%M-%y) like -JUNE-_* 25

-- (6)
select sod.PRODUCT_NO, pm. DESCRIPTION, cm.CLIENT_NO
from sales_order_detail sod, sales_order so,PRODUCT_MASTER pm, CLIENT_MASTER1 cm 
where sod.PRODUCT_NO = pm. PRODUCT_NO
and so.ordar_no = sod.ordar_no
and cm.CLIENT_NO = so.CLIENT_NO
and (cm.CLIENT_NO = 'C00001' or cm.CLIENT_NO='C00002');

-- (7)
select from PRODUCT_MASTER where SELLPRICE>500 and SELLPRICE<=750;

-- (8) 
SELECT SELLPRICE AS new_price FROM PRODUCT_MASTER where SELLPRICE>=500;

-- (9)
select NAME, CITY, STATE from CLIENT_MASTER1 where STATE!= 'Maharashtra ';

-- (10)
select count(DESCRIPTION) from PRODUCT_MASTER;

-- (11)
select AVG(COSTPRICE) from PRODUCT_MASTER;

-- (12) 
SELECT MIN(SALEPRICE) AS min_price, MAX(SALEPRICE) AS max_price FROM PRODUCT_MASTER;

-- (13)  
select count(DESCRIPTION) from PRODUCT_MASTER where SALEPRICE>=500;

-- (14)
select DESCRIPTION from PRODUCT_MASTER where QTYONHAND>REODEREVAL;


--------------------------------------------------------------GROUP BY-------------------------------------------------------------------
-- PAGE NO :-67---------------------------------------------------------------------------------------------------------

-- EXAMPLE----------------------------------
select product_no ,sum(productrate)
from sales_order_detail
GROUP BY product_no;


-- 1) Print the description and  total qty sold for each product.-----------------------------------------------------------

select DESCRIPTION, sum(sod.qtydisp) 
from sales_order_detail sod,product_master pm
where pm.PRODUCT_NO = sod.PRODUCT_NO
group by DESCRIPTION
having pm.DESCRIPTION = 'shirt';


-- 2) Find the value of each product sold.-----------------------------------------------------------------------------------

select pm.DESCRIPTION,sum(sod.qtydisp*sod.productrate) 
from sales_order_detail sod,product_master pm 
where pm.PRODUCT_NO = sod.PRODUCT_NO
group by pm.DESCRIPTION;

-- 3) Calculate the avarage qty sold for each client that has a maximum order value of 15000.00-------------------------------

select NAME,avg(qtydisp) 
from sales_order_detail sod,sales_order so,client_master1 cm
where cm.client_no = so.CLIENT_NO 
and so.ordar_no = sod.ordar_no
group by NAME
HAVING MAX(sod.QTYordered*sod.productrate)>15000;

--  (4) find out the total of all the billed orders for the month of june-----------------------------------------------------  
SELECT so.ordar_date,sod.Ordar_no,SUM(QTYordered) 
from sales_order so,sales_order_detail sod
where sod.ordar_no = so.ordar_no 
group by sod.ordar_no
having (so.ordar_date)='12june04';   


----------------------------------------------------------------------------------------------------------------------------

-- view -----------------------------------------------------------------------------------------------
create view vw_