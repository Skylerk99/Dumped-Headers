/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLProperty.h>

@class NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {

	NSSQLEntity* _destinationEntity;
	NSSQLRelationship* _inverse;

}
-(id)destinationEntity;
-(id)correlationTableName;
-(id)foreignKey;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)relationshipDescription;
-(void)_setInverseRelationship:(id)arg1 ;
-(id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setForeignOrderKey:(id)arg1 ;
-(void)dealloc;
-(id)sourceEntity;
-(BOOL)isOrdered;
-(id)inverseRelationship;
@end

