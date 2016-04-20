/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TSDPathSource, TSUColor;

@interface KNBuildAttributeValue : TSPObject <NSCopying> {

	int _integerValue;
	double _doubleValue;
	BOOL _boolValue;
	NSString* _stringValue;
	TSDPathSource* _pathSourceValue;
	TSUColor* _colorValue;
	BOOL _definedIntegerValue;
	BOOL _definedDoubleValue;
	BOOL _definedBoolValue;
	BOOL _definedStringValue;
	BOOL _definedPathSourceValue;
	BOOL _definedColorValue;

}

@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) id<NSObject> objectValue; 
@property (nonatomic,readonly) long long integerValue; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,readonly) BOOL boolValue; 
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) TSDPathSource * pathSourceValue; 
@property (nonatomic,readonly) TSUColor * colorValue; 
+(id)valueWithInteger:(long long)arg1 ;
+(id)valueWithDouble:(double)arg1 ;
+(id)valueWithBool:(BOOL)arg1 ;
+(id)valueWithString:(id)arg1 ;
+(id)emptyValue;
+(id)valueWithPathSource:(id)arg1 ;
+(id)valueWithColor:(id)arg1 ;
-(id)initWithPathSourceValue:(id)arg1 ;
-(id)initWithColorValue:(id)arg1 ;
-(id)initWithIntegerValue:(long long)arg1 ;
-(id)initWithDoubleValue:(double)arg1 ;
-(id)initWithBoolValue:(BOOL)arg1 ;
-(TSDPathSource *)pathSourceValue;
-(id)initWithStringValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)integerValue;
-(double)doubleValue;
-(BOOL)boolValue;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id<NSObject>)objectValue;
-(NSString *)stringValue;
-(TSUColor *)colorValue;
@end

