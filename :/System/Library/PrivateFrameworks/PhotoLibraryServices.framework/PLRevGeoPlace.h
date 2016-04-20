/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, PLRevGeoPlaceAnnotation;

@interface PLRevGeoPlace : NSObject {

	NSMutableArray* _placeTypeInfoMap[15];
	PLRevGeoPlaceAnnotation* _placeAnnotation;
	BOOL _isHome;

}

@property (assign,nonatomic) BOOL isHome;              //@synthesize isHome=_isHome - In the implementation block
+(/*^block*/id)sortedAdditionalPlaceInfoComparator;
-(BOOL)isHome;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithGEOMapItem:(id)arg1 placeAnnotationData:(id)arg2 ;
-(id)bestPlaceInfoForOrderType:(unsigned long long)arg1 ;
-(id)placeInfosForOrderType:(unsigned long long)arg1 ;
-(id)minimumAreaForOrderType:(unsigned long long)arg1 name:(id)arg2 ;
-(void)setIsHome:(BOOL)arg1 ;
-(void)_mergeGEOMapItem:(id)arg1 ;
-(id)_placeInfosForOrderType:(unsigned long long)arg1 createIfNeeded:(BOOL)arg2 ;
-(unsigned long long)_dominantOrderTypeForPlaceType:(int)arg1 lastOrderType:(unsigned long long)arg2 ;
-(id)_newFilterSortedPlaceInfos:(id)arg1 usingPlaceAnnotation:(id)arg2 outFoundOrderType:(unsigned long long*)arg3 outPreviousOrderType:(unsigned long long*)arg4 ;
-(void)_addPlaceName:(id)arg1 placeInfo:(id)arg2 forOrderType:(unsigned long long)arg3 ;
-(void)_removePlacesInPlaceInfos:(id)arg1 fromOrderType:(unsigned long long)arg2 ;
@end

