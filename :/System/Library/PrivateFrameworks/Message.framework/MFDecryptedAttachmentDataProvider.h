/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFAttachmentDataProviderProtocol.h>

@class MFMailMessage, NSString;

@interface MFDecryptedAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol> {

	MFMailMessage* _message;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)fetchLocalDataForAttachment:(id)arg1 ;
-(BOOL)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id*)arg3 ;
-(id)messageForAttachment:(id)arg1 ;
-(id)initWithDecryptedMessage:(id)arg1 ;
@end

