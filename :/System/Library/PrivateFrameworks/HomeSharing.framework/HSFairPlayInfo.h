/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <HomeSharing/HomeSharing-Structs.h>
@class NSObject, NSString;

@interface HSFairPlayInfo : NSObject {

	NSObject*<OS_dispatch_queue> _sapQueue;
	void* _hwInfo;
	void* _session;

}

@property (nonatomic,readonly) NSString * deviceGUID; 
-(NSString *)deviceGUID;
-(id)securityInfoForURL:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)endSecuritySession;
-(id)_hexStringForData:(id)arg1 ;
-(id)beginNegotiationWithSAPVersion:(unsigned)arg1 ;
-(id)continueNegotationWithSAPVersion:(unsigned)arg1 data:(id)arg2 isComplete:(BOOL*)arg3 ;
-(BOOL)_getHardwareInfo:(FairPlayHWInfo_*)arg1 ;
@end

