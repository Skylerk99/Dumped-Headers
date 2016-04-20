/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>
#import <libobjc.A.dylib/ASFetchAttachmentTaskProtocol.h>

@class NSString, NSFileHandle;

@interface ASFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol> {

	NSString* _attachmentUUID;
	NSString* _attachmentName;
	NSString* _messageID;
	NSString* _localFileName;
	NSString* _attachmentContentType;
	unsigned long long _localFileLength;
	NSFileHandle* _localFileHandle;

}

@property (nonatomic,retain) NSString * attachmentUUID;                       //@synthesize attachmentUUID=_attachmentUUID - In the implementation block
@property (nonatomic,retain) NSString * attachmentName;                       //@synthesize attachmentName=_attachmentName - In the implementation block
@property (nonatomic,retain) NSString * messageID;                            //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) NSString * localFileName;                        //@synthesize localFileName=_localFileName - In the implementation block
@property (nonatomic,retain) NSString * attachmentContentType;                //@synthesize attachmentContentType=_attachmentContentType - In the implementation block
@property (assign,nonatomic) unsigned long long localFileLength;              //@synthesize localFileLength=_localFileLength - In the implementation block
@property (nonatomic,retain) NSFileHandle * localFileHandle;                  //@synthesize localFileHandle=_localFileHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithError:(id)arg1 ;
-(id)command;
-(NSString *)messageID;
-(NSString *)attachmentName;
-(int)commandCode;
-(id)requestBody;
-(BOOL)processContext:(id)arg1 ;
-(BOOL)shouldLogIncomingData;
-(id)initForMessageServerID:(id)arg1 andAttachmentName:(id)arg2 ;
-(id)initForMessageUUID:(id)arg1 ;
-(NSString *)attachmentUUID;
-(void)setAttachmentUUID:(NSString *)arg1 ;
-(void)setAttachmentName:(NSString *)arg1 ;
-(NSString *)localFileName;
-(void)setLocalFileName:(NSString *)arg1 ;
-(NSString *)attachmentContentType;
-(void)setAttachmentContentType:(NSString *)arg1 ;
-(unsigned long long)localFileLength;
-(void)setLocalFileLength:(unsigned long long)arg1 ;
-(NSFileHandle *)localFileHandle;
-(void)setLocalFileHandle:(NSFileHandle *)arg1 ;
-(id)parameterData;
-(void)setMessageID:(NSString *)arg1 ;
@end

