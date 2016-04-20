/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:17 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/AppleIDAuthAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleIDAuthAgent/AppleIDAuthAgent-Structs.h>
#import <AppleIDAuthAgent/XMLRPCEncoder.h>

@class NSString, NSArray;

@interface XMLRPCDefaultEncoder : NSObject <XMLRPCEncoder> {

	NSString* myMethod;
	NSArray* myParameters;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)encodeString:(id)arg1 omitTag:(BOOL)arg2 ;
-(id)encodeArray:(id)arg1 ;
-(id)encodeDictionary:(id)arg1 ;
-(id)encodeBoolean:(CFBooleanRef)arg1 ;
-(id)encodeNumber:(id)arg1 ;
-(id)encodeDate:(id)arg1 ;
-(id)encodeData:(id)arg1 ;
-(id)valueTag:(id)arg1 value:(id)arg2 ;
-(id)replaceTarget:(id)arg1 withValue:(id)arg2 inString:(id)arg3 ;
-(id)encodeObject:(id)arg1 ;
-(void)setMethod:(id)arg1 withParameters:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)parameters;
-(id)method;
-(id)encode;
@end

