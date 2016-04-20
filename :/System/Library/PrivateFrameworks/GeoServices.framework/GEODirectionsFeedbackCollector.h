/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEODirectionsFeedback, GEODirectionsFeedbackCollection, NSMutableSet;

@interface GEODirectionsFeedbackCollector : NSObject {

	GEODirectionsFeedback* _currentDirectionsFeedback;
	GEODirectionsFeedbackCollection* _currentFeedbackCollection;
	NSMutableSet* _routeIDs;
	double _currentDirectionsNavigationStartTime;
	double _currentDirectionsNavigationEndTime;

}

@property (nonatomic,retain) GEODirectionsFeedbackCollection * currentFeedbackCollection;              //@synthesize currentFeedbackCollection=_currentFeedbackCollection - In the implementation block
@property (nonatomic,retain) GEODirectionsFeedback * currentDirectionsFeedback;                        //@synthesize currentDirectionsFeedback=_currentDirectionsFeedback - In the implementation block
@property (nonatomic,retain) NSMutableSet * routeIDs;                                                  //@synthesize routeIDs=_routeIDs - In the implementation block
-(void)dealloc;
-(void)reset;
-(void)setCurrentDirectionsFeedback:(GEODirectionsFeedback *)arg1 ;
-(void)addTrafficRerouteFeedback:(id)arg1 ;
-(void)setupFeedbackSessionWithResponseID:(id)arg1 ;
-(void)setCurrentFeedbackCollection:(GEODirectionsFeedbackCollection *)arg1 ;
-(void)setFinalLocation:(id)arg1 asArrival:(BOOL)arg2 ;
-(void)endFeedbackSession;
-(GEODirectionsFeedback *)currentDirectionsFeedback;
-(NSMutableSet *)routeIDs;
-(void)setRouteIDs:(NSMutableSet *)arg1 ;
-(void)addRouteID:(id)arg1 routeIndex:(unsigned)arg2 stepID:(unsigned)arg3 completeStep:(BOOL)arg4 ;
-(void)setAudioFeedback:(SCD_Struct_GE135*)arg1 ;
-(void)_updateFeedbackSessionWithResponseID:(id)arg1 ;
-(void)startFeedbackSession;
-(GEODirectionsFeedbackCollection *)currentFeedbackCollection;
-(void)startFeedbackSessionForResponseID:(id)arg1 ;
@end

