/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/MobileSubstrate/DynamicLibraries/Flex.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FLParameterType, FLParameterValue, FLUnit;

@interface FLParameterOverride : NSObject {

	FLParameterType* _type;
	FLParameterValue* _value;
	unsigned long long _argument;
	FLUnit* _unit;

}

@property (retain) FLParameterType * type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) FLParameterValue * value;              //@synthesize value=_value - In the implementation block
@property (assign) unsigned long long argument;                     //@synthesize argument=_argument - In the implementation block
@property (__weak) FLUnit * unit;                                   //@synthesize unit=_unit - In the implementation block
-(id)initWithReturnType:(id)arg1 ;
-(void)save;
-(unsigned long long)argument;
-(void)setArgument:(unsigned long long)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setType:(FLParameterType *)arg1 ;
-(FLParameterType *)type;
-(FLParameterValue *)value;
-(void)setValue:(FLParameterValue *)arg1 ;
-(id)dictionaryRepresentation;
-(FLUnit *)unit;
-(void)setUnit:(FLUnit *)arg1 ;
-(id)initWithType:(id)arg1 argument:(unsigned long long)arg2 ;
@end

