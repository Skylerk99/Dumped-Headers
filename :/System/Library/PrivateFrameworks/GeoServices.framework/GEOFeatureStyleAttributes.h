/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOFeatureStyleAttributes : NSObject <NSCopying> {

	SCD_Struct_GE172* v;
	GEOFeatureStyleAttributes* _sharedAttributes;
	SCD_Struct_GE173* extAttrs;
	unsigned char countExtAttrs;
	unsigned char countAttrs;
	char featureType;

}
-(int)drivingSide;
-(BOOL)hasDrivingSide;
-(BOOL)isFreeway;
-(int)rampDirection;
-(BOOL)isRamp;
-(BOOL)isRailway;
-(int)rampType;
-(BOOL)isTunnel;
-(BOOL)shouldSuppress3DBuildingStrokes;
-(BOOL)isDrivable;
-(BOOL)isWalkable;
-(id)initWithPlaceDataStyleAttributes:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeKey:(unsigned)arg1 ;
-(char)featureType;
-(void)replaceAttributes:(SCD_Struct_GE172*)arg1 count:(unsigned)arg2 ;
-(BOOL)isSuperset:(id)arg1 ;
-(void)sort;
-(void)setExtAttributes:(SCD_Struct_GE173*)arg1 count:(unsigned)arg2 ;
-(id)initWithSharedStyleAttributes:(id)arg1 extAttributes:(SCD_Struct_GE173*)arg2 extAttributeCount:(unsigned char)arg3 ;
-(id)initWithAttributes:(unsigned)arg1 ;
-(id)initWithStyleAttributes:(id)arg1 ;
-(id)initWithGEOStyleAttributes:(id)arg1 ;
@end

