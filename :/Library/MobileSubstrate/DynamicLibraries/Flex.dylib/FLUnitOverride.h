/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/MobileSubstrate/DynamicLibraries/Flex.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, FYUnit, NSString;

@interface FLUnitOverride : NSObject {

	int _flType;
	int _argument;
	NSMutableDictionary* _dictionary;
	FYUnit* _unit;
	NSString* _cMethod;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (assign,nonatomic) int flType;                                    //@synthesize flType=_flType - In the implementation block
@property (nonatomic,retain) NSString * type; 
@property (__weak) FYUnit * unit;                                           //@synthesize unit=_unit - In the implementation block
@property (nonatomic,retain) id value; 
@property (assign) int argument;                                            //@synthesize argument=_argument - In the implementation block
@property (retain) NSString * cMethod;                                      //@synthesize cMethod=_cMethod - In the implementation block
-(int)flType;
-(id)initWithReturnTypeForUnit:(id)arg1 ;
-(void)setFlType:(int)arg1 ;
-(NSString *)cMethod;
-(void)setCMethod:(NSString *)arg1 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(void)save;
-(int)argument;
-(void)setArgument:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableDictionary *)dictionary;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)dictionaryRepresentation;
-(FYUnit *)unit;
-(void)setUnit:(FYUnit *)arg1 ;
-(id)charSet;
@end

