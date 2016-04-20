/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAMailboxRequest.h>

@class DAMailMessage;

@interface DADraftMessageRequest : DAMailboxRequest {

	BOOL _send;
	DAMailMessage* _message;

}

@property (nonatomic,retain) DAMailMessage * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL send;                            //@synthesize send=_send - In the implementation block
-(id)description;
-(DAMailMessage *)message;
-(void)setMessage:(DAMailMessage *)arg1 ;
-(BOOL)send;
-(id)initWithRequestType:(int)arg1 message:(id)arg2 send:(BOOL)arg3 ;
-(void)setSend:(BOOL)arg1 ;
@end

