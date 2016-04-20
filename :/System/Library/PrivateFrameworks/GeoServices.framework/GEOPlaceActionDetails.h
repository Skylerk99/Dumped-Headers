/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:17 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOTransitPlaceCard;

@interface GEOPlaceActionDetails : PBCodable <NSCopying> {

	unsigned long long _animationID;
	unsigned long long _businessID;
	long long _placeID;
	double _searchResponseRelativeTimestamp;
	unsigned long long _targetID;
	NSString* _actionUrl;
	int _localSearchProviderID;
	NSString* _photoId;
	int _resultIndex;
	GEOTransitPlaceCard* _transitPlaceCard;
	SCD_Struct_GE63 _has;

}

@property (assign,nonatomic) BOOL hasBusinessID; 
@property (assign,nonatomic) unsigned long long businessID;                        //@synthesize businessID=_businessID - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceID; 
@property (assign,nonatomic) long long placeID;                                    //@synthesize placeID=_placeID - In the implementation block
@property (assign,nonatomic) BOOL hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID;                            //@synthesize localSearchProviderID=_localSearchProviderID - In the implementation block
@property (assign,nonatomic) BOOL hasSearchResponseRelativeTimestamp; 
@property (assign,nonatomic) double searchResponseRelativeTimestamp;               //@synthesize searchResponseRelativeTimestamp=_searchResponseRelativeTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasResultIndex; 
@property (assign,nonatomic) int resultIndex;                                      //@synthesize resultIndex=_resultIndex - In the implementation block
@property (assign,nonatomic) BOOL hasAnimationID; 
@property (assign,nonatomic) unsigned long long animationID;                       //@synthesize animationID=_animationID - In the implementation block
@property (assign,nonatomic) BOOL hasTargetID; 
@property (assign,nonatomic) unsigned long long targetID;                          //@synthesize targetID=_targetID - In the implementation block
@property (nonatomic,readonly) BOOL hasPhotoId; 
@property (nonatomic,retain) NSString * photoId;                                   //@synthesize photoId=_photoId - In the implementation block
@property (nonatomic,readonly) BOOL hasActionUrl; 
@property (nonatomic,retain) NSString * actionUrl;                                 //@synthesize actionUrl=_actionUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitPlaceCard; 
@property (nonatomic,retain) GEOTransitPlaceCard * transitPlaceCard;               //@synthesize transitPlaceCard=_transitPlaceCard - In the implementation block
+(id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 ;
+(id)actionDetailsWithTargetID:(unsigned long long)arg1 ;
+(id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 ;
+(id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 transitCardCategory:(int)arg5 transitSystem:(id)arg6 transitDepartureSequence:(id)arg7 transitIncident:(id)arg8 ;
-(id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 transitCardCategory:(int)arg5 transitSystem:(id)arg6 transitDepartureSequence:(id)arg7 transitIncident:(id)arg8 ;
-(id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 ;
-(id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)localSearchProviderID;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(void)setHasLocalSearchProviderID:(BOOL)arg1 ;
-(BOOL)hasLocalSearchProviderID;
-(NSString *)photoId;
-(BOOL)hasPhotoId;
-(void)setPhotoId:(NSString *)arg1 ;
-(void)setBusinessID:(unsigned long long)arg1 ;
-(unsigned long long)businessID;
-(void)setHasBusinessID:(BOOL)arg1 ;
-(BOOL)hasBusinessID;
-(long long)placeID;
-(void)setHasPlaceID:(BOOL)arg1 ;
-(BOOL)hasPlaceID;
-(void)setPlaceID:(long long)arg1 ;
-(int)resultIndex;
-(void)setResultIndex:(int)arg1 ;
-(void)setHasResultIndex:(BOOL)arg1 ;
-(BOOL)hasResultIndex;
-(void)setHasTargetID:(BOOL)arg1 ;
-(BOOL)hasTargetID;
-(GEOTransitPlaceCard *)transitPlaceCard;
-(BOOL)hasSearchResponseRelativeTimestamp;
-(void)setTransitPlaceCard:(GEOTransitPlaceCard *)arg1 ;
-(unsigned long long)targetID;
-(void)setAnimationID:(unsigned long long)arg1 ;
-(void)setHasSearchResponseRelativeTimestamp:(BOOL)arg1 ;
-(unsigned long long)animationID;
-(void)setHasAnimationID:(BOOL)arg1 ;
-(BOOL)hasActionUrl;
-(BOOL)hasTransitPlaceCard;
-(BOOL)hasAnimationID;
-(void)setSearchResponseRelativeTimestamp:(double)arg1 ;
-(void)setActionUrl:(NSString *)arg1 ;
-(void)setTargetID:(unsigned long long)arg1 ;
-(double)searchResponseRelativeTimestamp;
-(NSString *)actionUrl;
-(BOOL)readFrom:(id)arg1 ;
@end

