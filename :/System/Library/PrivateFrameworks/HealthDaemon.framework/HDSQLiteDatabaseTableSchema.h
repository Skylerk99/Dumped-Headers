/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSSet;

@interface HDSQLiteDatabaseTableSchema : NSObject {

	NSString* _name;
	NSDictionary* _columns;
	NSSet* _indices;

}

@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * columns;              //@synthesize columns=_columns - In the implementation block
@property (nonatomic,retain) NSSet * indices;                     //@synthesize indices=_indices - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSSet *)indices;
-(void)setIndices:(NSSet *)arg1 ;
-(NSDictionary *)columns;
-(void)setColumns:(NSDictionary *)arg1 ;
@end

