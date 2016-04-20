/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CADObjectInterface
@required
-(void)CADObjectExists:(SCD_Struct_CA1)arg1 reply:(/*^block*/id)arg2;
-(void)CADObjectsExist:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADObject:(SCD_Struct_CA1)arg1 getPropertiesWithNames:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADObject:(SCD_Struct_CA1)arg1 getPropertyWithName:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADObject:(SCD_Struct_CA1)arg1 getStringPropertyWithName:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADObject:(SCD_Struct_CA1)arg1 getNumberPropertyWithName:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADObject:(SCD_Struct_CA1)arg1 getDatePropertyWithName:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADObject:(SCD_Struct_CA1)arg1 getDataPropertyWithName:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADObject:(SCD_Struct_CA1)arg1 getRelatedObjectWithRelationName:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADObject:(SCD_Struct_CA1)arg1 getRelatedObjectsWithRelationName:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADObject:(SCD_Struct_CA1)arg1 setAttributes:(id)arg2 andRelations:(id)arg3 reply:(/*^block*/id)arg4;
-(void)CADDatabaseInsertObjectsWithTempObjectIDs:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseDeleteObjectsWithObjectIDs:(id)arg1 reply:(/*^block*/id)arg2;

@end

