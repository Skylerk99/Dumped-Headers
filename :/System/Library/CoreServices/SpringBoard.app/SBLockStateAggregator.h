/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBLockStateAggregator : NSObject {

	unsigned long long _lockState;

}
+(id)sharedInstance;
-(id)_descriptionForLockState:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(unsigned long long)lockState;
-(BOOL)hasAnyLockState;
-(void)_updateLockState;
@end

