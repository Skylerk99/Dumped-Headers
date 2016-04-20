/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBSApplicationTerminationAssertion : NSObject {

	NSString* _bundleID;
	NSString* _reason;
	long long _assertionState;
	unsigned long long _serialNumber;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                   //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) long long assertionState;                   //@synthesize assertionState=_assertionState - In the implementation block
@property (assign,nonatomic) unsigned long long serialNumber;              //@synthesize serialNumber=_serialNumber - In the implementation block
-(NSString *)bundleID;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSString *)reason;
-(id)initWithBundleID:(id)arg1 reason:(id)arg2 acquisitionHandler:(/*^block*/id)arg3 ;
-(long long)assertionState;
-(void)setSerialNumber:(unsigned long long)arg1 ;
-(unsigned long long)serialNumber;
@end

