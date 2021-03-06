/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:17 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOComponentAction : PBCodable <NSCopying> {

	SCD_Struct_GE1* _actions;
	int _component;
	BOOL _handleLocally;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasComponent; 
@property (assign,nonatomic) int component;                                  //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) unsigned long long actionsCount; 
@property (nonatomic,readonly) int* actions; 
@property (assign,nonatomic) BOOL hasHandleLocally; 
@property (assign,nonatomic) BOOL handleLocally;                             //@synthesize handleLocally=_handleLocally - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int*)actions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasComponent;
-(void)setActions:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)actionsCount;
-(int)component;
-(int)actionsAtIndex:(unsigned long long)arg1 ;
-(void)setHasComponent:(BOOL)arg1 ;
-(void)clearActions;
-(BOOL)hasHandleLocally;
-(void)setHasHandleLocally:(BOOL)arg1 ;
-(void)setHandleLocally:(BOOL)arg1 ;
-(void)addActions:(int)arg1 ;
-(void)setComponent:(int)arg1 ;
-(BOOL)handleLocally;
-(BOOL)readFrom:(id)arg1 ;
@end

