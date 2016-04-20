/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/MobileSubstrate/DynamicLibraries/Flex.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, FYPatch, FLUnitOverride, NSMutableArray, NSNumber;

@interface FYUnit : NSObject {

	BOOL _doesDisableFunction;
	NSString* _name;
	NSDictionary* _method;
	NSString* _methodC;
	id _overrideValue;
	FYPatch* _patch;
	FLUnitOverride* _returnOverride;
	NSMutableArray* _argumentOverrides;

}

@property (retain) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (retain) NSDictionary * method;                                 //@synthesize method=_method - In the implementation block
@property (retain) NSString * methodC;                                    //@synthesize methodC=_methodC - In the implementation block
@property (assign) BOOL doesDisableFunction;                              //@synthesize doesDisableFunction=_doesDisableFunction - In the implementation block
@property (retain) id overrideValue;                                      //@synthesize overrideValue=_overrideValue - In the implementation block
@property (retain) FYPatch * patch;                                       //@synthesize patch=_patch - In the implementation block
@property (nonatomic,__weak,readonly) NSString * returnType; 
@property (nonatomic,readonly) int flReturnType; 
@property (nonatomic,__weak,readonly) NSNumber * min; 
@property (nonatomic,__weak,readonly) NSNumber * max; 
@property (retain) FLUnitOverride * returnOverride;                       //@synthesize returnOverride=_returnOverride - In the implementation block
@property (retain) NSMutableArray * argumentOverrides;                    //@synthesize argumentOverrides=_argumentOverrides - In the implementation block
+(BOOL)supportsReturnType:(id)arg1 ;
+(id)minMaxes;
+(int)fltypeForType:(id)arg1 ;
+(id)minForType:(id)arg1 ;
+(id)maxForType:(id)arg1 ;
-(NSString *)returnType;
-(void)setPatch:(FYPatch *)arg1 ;
-(id)initWithDictionary:(id)arg1 andPatch:(id)arg2 ;
-(NSString *)methodC;
-(id)initWithPatch:(id)arg1 ;
-(void)setMethodC:(NSString *)arg1 ;
-(void)setDoesDisableFunction:(BOOL)arg1 ;
-(void)setOverrideValue:(id)arg1 ;
-(void)setReturnOverride:(FLUnitOverride *)arg1 ;
-(FLUnitOverride *)returnOverride;
-(BOOL)doesDisableFunction;
-(id)overrideValue;
-(void)setDefaultName;
-(void)setDefaultOverride;
-(int)flReturnType;
-(FYPatch *)patch;
-(NSMutableArray *)argumentOverrides;
-(void)setArgumentOverrides:(NSMutableArray *)arg1 ;
-(NSNumber *)max;
-(void)setDefaults;
-(NSNumber *)min;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSDictionary *)method;
-(id)dictRepresentation;
-(void)setMethod:(NSDictionary *)arg1 ;
@end

