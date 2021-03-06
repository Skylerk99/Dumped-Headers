/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBLockOverlayViewController;

@interface SBLockOverlayContext : NSObject {

	SBLockOverlayViewController* _viewController;
	unsigned long long _priority;
	/*^block*/id _activationBlock;
	/*^block*/id _deactivationBlock;

}

@property (nonatomic,retain,readonly) SBLockOverlayViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                                      //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) id activationBlock;                                                   //@synthesize activationBlock=_activationBlock - In the implementation block
@property (nonatomic,copy) id deactivationBlock;                                                 //@synthesize deactivationBlock=_deactivationBlock - In the implementation block
-(id)initWithOverlayViewController:(id)arg1 priority:(unsigned long long)arg2 ;
-(void)setActivationBlock:(id)arg1 ;
-(void)setDeactivationBlock:(id)arg1 ;
-(id)activationBlock;
-(id)deactivationBlock;
-(void)dealloc;
-(unsigned long long)priority;
-(SBLockOverlayViewController *)viewController;
@end

