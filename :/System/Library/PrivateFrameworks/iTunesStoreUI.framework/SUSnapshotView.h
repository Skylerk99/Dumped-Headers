/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView;

@interface SUSnapshotView : UIView {

	UIView* _imageView;

}
-(void)dealloc;
-(void)layoutSubviews;
-(void)snapshotView:(id)arg1 usingIOSurface:(BOOL)arg2 ;
-(void)_takeIOSurfaceSnapshotOfView:(id)arg1 ;
-(void)_takeCGSnapshotOfView:(id)arg1 ;
@end

