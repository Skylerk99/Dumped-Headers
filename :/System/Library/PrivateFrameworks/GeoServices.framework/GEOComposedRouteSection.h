/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRouteLeg;

@interface GEOComposedRouteSection : NSObject {

	unsigned _startPointIndex;
	unsigned _pointCount;
	SCD_Struct_GE98* _points;
	int _transportType;
	GEOComposedRouteLeg* _composedRouteLeg;
	unsigned long long _composedRouteLegIndex;
	SCD_Struct_GE57 _bounds;
	SCD_Struct_GE57 _overlayBounds;
	unsigned long long _finalStepIndex;

}

@property (nonatomic,readonly) SCD_Struct_GE179 vkBounds; 
@property (nonatomic,readonly) unsigned startPointIndex;                              //@synthesize startPointIndex=_startPointIndex - In the implementation block
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount;                                   //@synthesize pointCount=_pointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE98* points;                               //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE57 bounds;                                //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteLeg * composedRouteLeg;                //@synthesize composedRouteLeg=_composedRouteLeg - In the implementation block
@property (nonatomic,readonly) unsigned long long composedRouteLegIndex;              //@synthesize composedRouteLegIndex=_composedRouteLegIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long finalStepIndex;                     //@synthesize finalStepIndex=_finalStepIndex - In the implementation block
@property (nonatomic,readonly) int transportType;                                     //@synthesize transportType=_transportType - In the implementation block
-(id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 shouldSnapToTransit:(BOOL)arg3 verifySnapping:(BOOL)arg4 ;
-(void)updateLabelExternalObjectsInRenderRegion:(id)arg1 previousSection:(id)arg2 nextSection:(id)arg3 labelExternalObjectsModerator:(LabelExternalObjectsModerator*)arg4 nodeIDToStyleAttributeMap:(unordered_map<unsigned long long, std::__1::unordered_map<unsigned int, int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int> > >, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::unordered_map<unsigned int, int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int> > > > > >Ref)arg5 ;
-(id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 ;
-(SCD_Struct_GE179)vkBounds;
-(SCD_Struct_GE57)bounds;
-(void)dealloc;
-(id)description;
-(int)transportType;
-(unsigned)startPointIndex;
-(GEOComposedRouteLeg *)composedRouteLeg;
-(id)initWithRoute:(id)arg1 startPoint:(unsigned)arg2 pointCount:(unsigned)arg3 bounds:(SCD_Struct_GE57)arg4 transportType:(int)arg5 finalStepIndex:(unsigned long long)arg6 ;
-(id)initWithRoute:(id)arg1 startPoint:(unsigned)arg2 pointCount:(unsigned)arg3 transportType:(int)arg4 finalStepIndex:(unsigned long long)arg5 fallbackStartCoordinate:(SCD_Struct_GE16)arg6 fallbackEndCoordinate:(SCD_Struct_GE16)arg7 ;
-(unsigned)endPointIndex;
-(unsigned long long)composedRouteLegIndex;
-(unsigned long long)finalStepIndex;
-(BOOL)isTransfer;
-(unsigned)pointCount;
-(SCD_Struct_GE98*)points;
@end

