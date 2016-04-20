/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOCMTicketFollowupResponse, GEOCMTicketStatusResponse, GEOCMTicketSubmissionResponse;

@interface GEOCMCommunityResponse : PBCodable <NSCopying> {

	int _requestType;
	int _statusCode;
	GEOCMTicketFollowupResponse* _ticketFollowupResponse;
	GEOCMTicketStatusResponse* _ticketStatusResponse;
	GEOCMTicketSubmissionResponse* _ticketSubmissionResponse;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode;                                                        //@synthesize statusCode=_statusCode - In the implementation block
@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType;                                                       //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) BOOL hasTicketSubmissionResponse; 
@property (nonatomic,retain) GEOCMTicketSubmissionResponse * ticketSubmissionResponse;              //@synthesize ticketSubmissionResponse=_ticketSubmissionResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasTicketFollowupResponse; 
@property (nonatomic,retain) GEOCMTicketFollowupResponse * ticketFollowupResponse;                  //@synthesize ticketFollowupResponse=_ticketFollowupResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasTicketStatusResponse; 
@property (nonatomic,retain) GEOCMTicketStatusResponse * ticketStatusResponse;                      //@synthesize ticketStatusResponse=_ticketStatusResponse - In the implementation block
-(int)requestType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)statusCode;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(void)setStatusCode:(int)arg1 ;
-(BOOL)hasStatusCode;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasTicketFollowupResponse;
-(BOOL)hasTicketStatusResponse;
-(void)setTicketFollowupResponse:(GEOCMTicketFollowupResponse *)arg1 ;
-(void)setTicketSubmissionResponse:(GEOCMTicketSubmissionResponse *)arg1 ;
-(GEOCMTicketSubmissionResponse *)ticketSubmissionResponse;
-(void)setTicketStatusResponse:(GEOCMTicketStatusResponse *)arg1 ;
-(GEOCMTicketFollowupResponse *)ticketFollowupResponse;
-(BOOL)hasTicketSubmissionResponse;
-(GEOCMTicketStatusResponse *)ticketStatusResponse;
-(BOOL)readFrom:(id)arg1 ;
@end

