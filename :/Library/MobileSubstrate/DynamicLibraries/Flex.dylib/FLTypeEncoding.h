/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/MobileSubstrate/DynamicLibraries/Flex.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FLParameterType, NSArray;

@interface FLTypeEncoding : NSObject {

	NSString* _displayName;
	FLParameterType* _type;
	NSString* _typeEncoding;

}

@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) FLParameterType * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * subTypes; 
@property (retain) NSString * typeEncoding;                       //@synthesize typeEncoding=_typeEncoding - In the implementation block
-(id)initWithTypeEncoding:(id)arg1 ;
-(id)formatMethodName:(id)arg1 prefix:(id)arg2 ;
-(void)setTypeEncoding:(NSString *)arg1 ;
-(NSArray *)subTypes;
-(id)arrayForTypeEncoding:(const char*)arg1 ;
-(id)formatMethodName:(id)arg1 withTypes:(id)arg2 ;
-(id)stringFromEncObject:(id)arg1 ;
-(id)objectForEncoding:(char**)arg1 ;
-(id)parseStruct:(char**)arg1 ;
-(id)parseArray:(char**)arg1 ;
-(id)flParseStruct:(char**)arg1 ;
-(id)flObjectForEncoding:(char**)arg1 ;
-(id)flParseArray:(char**)arg1 ;
-(void)setType:(FLParameterType *)arg1 ;
-(FLParameterType *)type;
-(NSString *)displayName;
-(NSString *)typeEncoding;
-(void)setDisplayName:(NSString *)arg1 ;
@end

