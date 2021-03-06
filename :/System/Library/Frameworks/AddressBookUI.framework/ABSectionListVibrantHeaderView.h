/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABSectionListHeaderView.h>

@class _UIBackdropView, UIView;

@interface ABSectionListVibrantHeaderView : ABSectionListHeaderView {

	_UIBackdropView* _backdrop;
	UIView* _plusDView;
	BOOL _wantsPlusDLayer;

}

@property (assign,nonatomic) BOOL wantsPlusDLayer;              //@synthesize wantsPlusDLayer=_wantsPlusDLayer - In the implementation block
-(void)setWantsPlusDLayer:(BOOL)arg1 ;
-(BOOL)wantsPlusDLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFloating:(BOOL)arg1 ;
-(void)setBackdropGroupName:(id)arg1 ;
@end

