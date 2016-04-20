/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataKeyEntity : HDHealthEntity
+(id)databaseTable;
+(id)columnsDefinition;
+(long long)protectionClass;
+(id)_entityForKey:(id)arg1 database:(id)arg2 ;
+(id)_insertEntityWithKey:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)entityForKey:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)insertEntityWithKey:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)resultForKeyID:(id)arg1 healthDatabase:(id)arg2 ;
+(id)_keyForPersistentID:(id)arg1 database:(id)arg2 ;
+(id)_propertySettersForResult;
-(id)resultWithDatabase:(id)arg1 ;
@end

