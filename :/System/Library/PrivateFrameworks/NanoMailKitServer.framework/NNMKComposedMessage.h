/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface NNMKComposedMessage : NSObject <NSSecureCoding> {

	BOOL _includeAttachments;
	NSString* _composedMessageId;
	unsigned long long _sendingType;
	NSArray* _to;
	NSArray* _cc;
	NSString* _subject;
	NSString* _body;
	NSString* _referenceMessageId;

}

@property (nonatomic,retain) NSString * composedMessageId;                //@synthesize composedMessageId=_composedMessageId - In the implementation block
@property (assign,nonatomic) unsigned long long sendingType;              //@synthesize sendingType=_sendingType - In the implementation block
@property (nonatomic,retain) NSArray * to;                                //@synthesize to=_to - In the implementation block
@property (nonatomic,retain) NSArray * cc;                                //@synthesize cc=_cc - In the implementation block
@property (nonatomic,retain) NSString * subject;                          //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSString * body;                             //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSString * referenceMessageId;               //@synthesize referenceMessageId=_referenceMessageId - In the implementation block
@property (assign,nonatomic) BOOL includeAttachments;                     //@synthesize includeAttachments=_includeAttachments - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIncludeAttachments:(BOOL)arg1 ;
-(BOOL)includeAttachments;
-(NSArray *)cc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)body;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setBody:(NSString *)arg1 ;
-(void)setCc:(NSArray *)arg1 ;
-(void)setComposedMessageId:(NSString *)arg1 ;
-(void)setReferenceMessageId:(NSString *)arg1 ;
-(void)setSendingType:(unsigned long long)arg1 ;
-(NSString *)composedMessageId;
-(unsigned long long)sendingType;
-(NSString *)referenceMessageId;
-(id)copyWithNewId;
-(NSArray *)to;
-(void)setTo:(NSArray *)arg1 ;
@end

