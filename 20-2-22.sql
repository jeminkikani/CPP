create table client_master
(
cid int(10),
cname varchar(20),
email varchar(10),

constraint cm_pk primary key(cid)
);

    insert into client_master values(1,'jemin','j@mail.com');                                        
 
    select * from client_master;


create table client_master1
(
id int(10),
cid int(10),
cname varchar(20),
email varchar(10),
                  
constraint cm_pk1 foreign key(cid) references client_master(cid)  
);

     
    insert into client_master1 values(1,1,'jemin','j@mail.com');
    -- query has been not inserted why ?
    -- this reason has been frpm client_master table data in id has primary KEY so has not 
    -- collect the data in client_master table that reason of the data has not inserted
    insert into client_master1 values(1,2,'jemin','j@mail.com');

    select * from client_master;


drop table client_master1;

drop table client_master;