/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SBFakeDuet : NSObject {

	NSArray* _triggers;
	NSArray* _appsToLaunch;
	/*^block*/id _recommendationHandler;

}

@property (nonatomic,retain) NSArray * triggers;                  //@synthesize triggers=_triggers - In the implementation block
@property (nonatomic,retain) NSArray * appsToLaunch;              //@synthesize appsToLaunch=_appsToLaunch - In the implementation block
@property (nonatomic,copy) id recommendationHandler;              //@synthesize recommendationHandler=_recommendationHandler - In the implementation block
+(id)sharedInstance;
-(void)_refreshAppsToLaunch;
-(void)_refreshTriggers;
-(void)_wake:(id)arg1 ;
-(void)_switcherRevealed:(id)arg1 ;
-(void)_frontDisplayChanged:(id)arg1 ;
-(void)setRecommendationHandler:(id)arg1 ;
-(void)setAppsToLaunch:(NSArray *)arg1 ;
-(NSArray *)appsToLaunch;
-(id)recommendationHandler;
-(void)_handleTrigger:(id)arg1 ;
-(void)okToLaunch:(id)arg1 forReasons:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)setAppLaunchRecommendationHandler:(/*^block*/id)arg1 ;
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
@end

