/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AAUIServerSuppliedProfilePictureCache : NSObject {

	NSMutableDictionary* _personIDToEntryMap;
	double _pictureDiameter;

}

@property (nonatomic,readonly) double pictureDiameter; 
+(id)sharedCache;
-(id)init;
-(void)_ensureMinimumPictureDiameter_mustBeSynchronized:(double)arg1 ;
-(double)pictureDiameter;
-(id)profilePictureForPersonID:(id)arg1 diameter:(double)arg2 serverFetchBlock:(/*^block*/id)arg3 ;
-(void)profilePictureForPersonID:(id)arg1 diameter:(double)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)updateProfilePicture:(id)arg1 didReceiveNewPicture:(BOOL)arg2 serverCacheTag:(id)arg3 forPersonID:(id)arg4 ;
@end

