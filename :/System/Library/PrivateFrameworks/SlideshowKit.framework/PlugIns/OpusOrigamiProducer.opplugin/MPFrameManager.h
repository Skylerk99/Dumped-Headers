/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MPFrameManager : NSObject {

	NSMutableDictionary* mFrames;
	NSMutableDictionary* mCategories;

}
+(void)loadFrameManagerWithPaths:(id)arg1 ;
+(void)releaseSharedManager;
+(id)sharedManager;
-(id)initWithPaths:(id)arg1 ;
-(id)constraintsForFramesMatchingList:(id)arg1 andCriteria:(id)arg2 ;
-(id)randomFrameFromList:(id)arg1 abidingWithConstraints:(id)arg2 ;
-(id)versionOfFrameID:(id)arg1 ;
-(id)localizedFrameNameForFrameID:(id)arg1 ;
-(id)framesForCategoryID:(id)arg1 ;
-(id)categoryIDsForFrameID:(id)arg1 ;
-(id)allFrameIDs;
-(id)attributesForFrameID:(id)arg1 andPresetID:(id)arg2 ;
-(id)allCategoryIDs;
-(id)localizedCategoryNameFromCategoryID:(id)arg1 ;
-(id)descriptionForFrameID:(id)arg1 ;
-(void)dealloc;
@end

