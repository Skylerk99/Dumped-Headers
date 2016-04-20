/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssertionServices/BKSProcessAssertionUpdateEvent.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface BKSProcessAssertionCreateEvent : BKSProcessAssertionUpdateEvent <BSXPCCoding> {

	unsigned _reason;
	NSString* _targetBundleIdentifier;
	int _targetPID;

}

@property (assign,nonatomic) unsigned reason;                              //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) int targetPID;                                //@synthesize targetPID=_targetPID - In the implementation block
@property (nonatomic,copy) NSString * targetBundleIdentifier;              //@synthesize targetBundleIdentifier=_targetBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setReason:(unsigned)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(unsigned)reason;
-(void)setTargetBundleIdentifier:(NSString *)arg1 ;
-(NSString *)targetBundleIdentifier;
-(int)targetPID;
-(void)setTargetPID:(int)arg1 ;
@end

