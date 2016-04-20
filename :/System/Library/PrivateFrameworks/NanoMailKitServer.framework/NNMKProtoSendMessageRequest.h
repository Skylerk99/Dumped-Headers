/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NNMKProtoSendMessageRequest : PBRequest <NSCopying> {

	NSString* _body;
	NSMutableArray* _ccs;
	NSString* _composedMessageId;
	NSString* _referenceMessageId;
	unsigned _sendingType;
	NSString* _subject;
	NSMutableArray* _tos;
	BOOL _includeAttachments;
	SCD_Struct_NN2 _has;

}

@property (nonatomic,retain) NSMutableArray * tos;                       //@synthesize tos=_tos - In the implementation block
@property (nonatomic,retain) NSMutableArray * ccs;                       //@synthesize ccs=_ccs - In the implementation block
@property (nonatomic,readonly) BOOL hasSubject; 
@property (nonatomic,retain) NSString * subject;                         //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) BOOL hasBody; 
@property (nonatomic,retain) NSString * body;                            //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) BOOL hasComposedMessageId; 
@property (nonatomic,retain) NSString * composedMessageId;               //@synthesize composedMessageId=_composedMessageId - In the implementation block
@property (assign,nonatomic) BOOL hasSendingType; 
@property (assign,nonatomic) unsigned sendingType;                       //@synthesize sendingType=_sendingType - In the implementation block
@property (nonatomic,readonly) BOOL hasReferenceMessageId; 
@property (nonatomic,retain) NSString * referenceMessageId;              //@synthesize referenceMessageId=_referenceMessageId - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeAttachments; 
@property (assign,nonatomic) BOOL includeAttachments;                    //@synthesize includeAttachments=_includeAttachments - In the implementation block
-(void)setIncludeAttachments:(BOOL)arg1 ;
-(BOOL)includeAttachments;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)body;
-(id)dictionaryRepresentation;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setBody:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addTo:(id)arg1 ;
-(void)addCc:(id)arg1 ;
-(unsigned long long)tosCount;
-(void)clearTos;
-(id)toAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)ccsCount;
-(void)clearCcs;
-(id)ccAtIndex:(unsigned long long)arg1 ;
-(void)setComposedMessageId:(NSString *)arg1 ;
-(void)setReferenceMessageId:(NSString *)arg1 ;
-(BOOL)hasSubject;
-(BOOL)hasBody;
-(BOOL)hasComposedMessageId;
-(void)setSendingType:(unsigned)arg1 ;
-(void)setHasSendingType:(BOOL)arg1 ;
-(BOOL)hasSendingType;
-(BOOL)hasReferenceMessageId;
-(void)setHasIncludeAttachments:(BOOL)arg1 ;
-(BOOL)hasIncludeAttachments;
-(NSMutableArray *)tos;
-(void)setTos:(NSMutableArray *)arg1 ;
-(NSMutableArray *)ccs;
-(void)setCcs:(NSMutableArray *)arg1 ;
-(NSString *)composedMessageId;
-(unsigned)sendingType;
-(NSString *)referenceMessageId;
-(BOOL)readFrom:(id)arg1 ;
@end

