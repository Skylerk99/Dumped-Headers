/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKFocusAttachmentView.h>

@interface CMKFocusLockAttachmentView : CMKFocusAttachmentView {

	BOOL _locked;

}

@property (assign,getter=isLocked,nonatomic) BOOL locked;              //@synthesize locked=_locked - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)arg1 ;
-(void)_updateText;
@end

