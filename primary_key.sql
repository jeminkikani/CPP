-------------------------------------------------------------------
-- is allow for singal column for uniquely data 
create table customer (
    cid int primary key,
    cname varchar (20),
    caddress varchar(20)
);

insert into customer values(1,"jemin","a-213");
insert into customer values(2,"jay","a-213");
insert into customer values(3,"jein","a-213");
insert into customer values(4,"jn","a-213");

--------------------------------------------------------------------------
-- is allow for singal column for uniquely data 
constraint jk_sa primary key(Ordar_no);

------------------------------------------------------------------------
-- is not allow for diffrent types of datatype in primary key
-- syntax
create table my_table1 (
    col1 int, 
    col2 char, 
    col3 int,
    primary key (col1, col2, col3)
);

-- EXAMPLE
create table customer1 (
    cid int,
    cname varchar,
    caddress varchar,
    primary key(cid,cname,caddress)
);

-- foreign key declaration -----------------------------------------------------------------------

    -- keyword  name    key      cloumn name     keyword   table_name   column name 
    constraint pk_so foreign key(CLIENT_NO) references client_master(CLIENT_NO),
    constraint pk_je foreign key(SALESMAN_NO) references saleman_master(SALESMAN_NO),

-- check constraint statment-----------------------------------------------------------------------

    -- like statment---------------------------------------------------------------------
    constraint ck_sales_order_1 check(Ordar_no like 'O%'),

    -- INBUILT FUNCTION statment-----------------------------------------------------------------
    constraint ck_sales_order_2 check(delytype=upper(delytype)),

    -- fill up your data FUNCTION-----------------------------------------------------------------------------
    constraint ck_sales_order_3 check(ordarstatus in('in-process','cancelled','fulfilled','back-order'))   