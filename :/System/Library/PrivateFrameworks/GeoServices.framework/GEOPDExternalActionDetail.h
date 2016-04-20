/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOPDExternalActionDetail : PBCodable <NSCopying> {

	NSString* _actionLabel;
	NSString* _actionUrlComponent;
	NSString* _actionUrlVerb;
	NSString* _logoId;

}

@property (nonatomic,readonly) BOOL hasActionLabel; 
@property (nonatomic,retain) NSString * actionLabel;                     //@synthesize actionLabel=_actionLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasLogoId; 
@property (nonatomic,retain) NSString * logoId;                          //@synthesize logoId=_logoId - In the implementation block
@property (nonatomic,readonly) BOOL hasActionUrlComponent; 
@property (nonatomic,retain) NSString * actionUrlComponent;              //@synthesize actionUrlComponent=_actionUrlComponent - In the implementation block
@property (nonatomic,readonly) BOOL hasActionUrlVerb; 
@property (nonatomic,retain) NSString * actionUrlVerb;                   //@synthesize actionUrlVerb=_actionUrlVerb - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)actionUrlComponent;
-(void)setActionUrlComponent:(NSString *)arg1 ;
-(BOOL)hasActionUrlComponent;
-(BOOL)hasActionLabel;
-(BOOL)hasActionUrlVerb;
-(void)setActionLabel:(NSString *)arg1 ;
-(NSString *)actionLabel;
-(BOOL)hasLogoId;
-(void)setLogoId:(NSString *)arg1 ;
-(NSString *)actionUrlVerb;
-(void)setActionUrlVerb:(NSString *)arg1 ;
-(NSString *)logoId;
-(BOOL)readFrom:(id)arg1 ;
@end

