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

@class NSMutableArray, NSData, GEORPUserSearchInput;

@interface GEORPDirectionsProblem : PBCodable <NSCopying> {

	SCD_Struct_GE223* _problematicRouteIndexs;
	unsigned long long _problematicRouteIndexsCount;
	unsigned long long _problematicRouteIndexsSpace;
	NSMutableArray* _clientSuggestedRoutes;
	NSData* _directionsResponseId;
	GEORPUserSearchInput* _endWaypoint;
	NSData* _overviewScreenshotImageData;
	unsigned _problematicLineIndex;
	unsigned _problematicStepIndex;
	GEORPUserSearchInput* _startWaypoint;
	SCD_Struct_GE7 _has;

}

@property (nonatomic,readonly) BOOL hasDirectionsResponseId; 
@property (nonatomic,retain) NSData * directionsResponseId;                                 //@synthesize directionsResponseId=_directionsResponseId - In the implementation block
@property (nonatomic,readonly) BOOL hasOverviewScreenshotImageData; 
@property (nonatomic,retain) NSData * overviewScreenshotImageData;                          //@synthesize overviewScreenshotImageData=_overviewScreenshotImageData - In the implementation block
@property (assign,nonatomic) BOOL hasProblematicStepIndex; 
@property (assign,nonatomic) unsigned problematicStepIndex;                                 //@synthesize problematicStepIndex=_problematicStepIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientSuggestedRoutes;                        //@synthesize clientSuggestedRoutes=_clientSuggestedRoutes - In the implementation block
@property (nonatomic,readonly) unsigned long long problematicRouteIndexsCount; 
@property (nonatomic,readonly) SCD_Struct_GE223* problematicRouteIndexs; 
@property (assign,nonatomic) BOOL hasProblematicLineIndex; 
@property (assign,nonatomic) unsigned problematicLineIndex;                                 //@synthesize problematicLineIndex=_problematicLineIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasStartWaypoint; 
@property (nonatomic,retain) GEORPUserSearchInput * startWaypoint;                          //@synthesize startWaypoint=_startWaypoint - In the implementation block
@property (nonatomic,readonly) BOOL hasEndWaypoint; 
@property (nonatomic,retain) GEORPUserSearchInput * endWaypoint;                            //@synthesize endWaypoint=_endWaypoint - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasProblematicStepIndex:(BOOL)arg1 ;
-(void)setEndWaypoint:(GEORPUserSearchInput *)arg1 ;
-(void)addProblematicRouteIndex:(SCD_Struct_GE223)arg1 ;
-(BOOL)hasStartWaypoint;
-(void)setDirectionsResponseId:(NSData *)arg1 ;
-(unsigned)problematicStepIndex;
-(BOOL)hasProblematicStepIndex;
-(void)setProblematicStepIndex:(unsigned)arg1 ;
-(void)setHasProblematicLineIndex:(BOOL)arg1 ;
-(GEORPUserSearchInput *)endWaypoint;
-(SCD_Struct_GE223)problematicRouteIndexAtIndex:(unsigned long long)arg1 ;
-(NSData *)overviewScreenshotImageData;
-(unsigned long long)clientSuggestedRoutesCount;
-(BOOL)hasProblematicLineIndex;
-(unsigned long long)problematicRouteIndexsCount;
-(BOOL)hasOverviewScreenshotImageData;
-(void)setClientSuggestedRoutes:(NSMutableArray *)arg1 ;
-(id)clientSuggestedRouteAtIndex:(unsigned long long)arg1 ;
-(void)addClientSuggestedRoute:(id)arg1 ;
-(void)setStartWaypoint:(GEORPUserSearchInput *)arg1 ;
-(void)setProblematicLineIndex:(unsigned)arg1 ;
-(GEORPUserSearchInput *)startWaypoint;
-(SCD_Struct_GE223*)problematicRouteIndexs;
-(NSData *)directionsResponseId;
-(unsigned)problematicLineIndex;
-(void)setProblematicRouteIndexs:(SCD_Struct_GE223*)arg1 count:(unsigned long long)arg2 ;
-(void)setOverviewScreenshotImageData:(NSData *)arg1 ;
-(BOOL)hasDirectionsResponseId;
-(BOOL)hasEndWaypoint;
-(void)clearProblematicRouteIndexs;
-(void)clearClientSuggestedRoutes;
-(NSMutableArray *)clientSuggestedRoutes;
-(BOOL)readFrom:(id)arg1 ;
@end

