/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng, NSString, GEOPDViewportInfo;

@interface GEOPDLocationDirectedSearchParameters : PBCodable <NSCopying> {

	unsigned _maxResults;
	GEOLatLng* _searchLocation;
	NSString* _searchString;
	int _sortOrder;
	GEOPDViewportInfo* _viewportInfo;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasSortOrder; 
@property (assign,nonatomic) int sortOrder;                                 //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults;                           //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                       //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo;              //@synthesize viewportInfo=_viewportInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchLocation; 
@property (nonatomic,retain) GEOLatLng * searchLocation;                    //@synthesize searchLocation=_searchLocation - In the implementation block
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSortOrder:(int)arg1 ;
-(int)sortOrder;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(void)setSearchString:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPDViewportInfo *)viewportInfo;
-(BOOL)hasViewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasMaxResults;
-(void)setMaxResults:(unsigned)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(unsigned)maxResults;
-(void)setSearchLocation:(GEOLatLng *)arg1 ;
-(void)setHasSortOrder:(BOOL)arg1 ;
-(BOOL)hasSearchString;
-(GEOLatLng *)searchLocation;
-(BOOL)hasSearchLocation;
-(BOOL)hasSortOrder;
-(BOOL)readFrom:(id)arg1 ;
@end

