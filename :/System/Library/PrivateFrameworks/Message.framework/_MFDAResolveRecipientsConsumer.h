/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DAResolveRecipientsConsumer.h>

@class MFConditionLock, NSDictionary, NSError;

@interface _MFDAResolveRecipientsConsumer : NSObject <DAResolveRecipientsConsumer> {

	MFConditionLock* _conditionLock;
	NSDictionary* _resolvedRecipientsByEmailAddress;
	NSError* _error;

}

@property (readonly) NSError * error; 
-(NSError *)error;
-(void)dealloc;
-(id)init;
-(id)waitForResolvedRecipients;
-(void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(void)resolvedRecipientsByEmailAddress:(id)arg1 ;
@end

