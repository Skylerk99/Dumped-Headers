/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLEntity, NSString, NSArray;

@interface NSSQLSelectIntermediate : NSSQLIntermediate {

	NSSQLEntity* _entity;
	NSString* _entityAlias;
	NSString* _correlationTarget;
	NSArray* _fetchColumns;
	BOOL _useDistinct;
	NSString* _columnAlias;
	BOOL _isCount;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)isTargetColumnsScoped;
-(void)setFetchColumns:(id)arg1 ;
-(void)setUseDistinct:(BOOL)arg1 ;
-(void)setIsCount:(BOOL)arg1 ;
-(BOOL)onlyFetchesAggregates;
-(id)initWithEntity:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4 ;
-(id)resolveVariableExpression:(id)arg1 inContext:(id)arg2 ;
-(id)initForCorrelationTarget:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4 ;
-(void)setColumnAlias:(id)arg1 ;
-(void)setFetchEntity:(id)arg1 ;
-(void)dealloc;
@end

