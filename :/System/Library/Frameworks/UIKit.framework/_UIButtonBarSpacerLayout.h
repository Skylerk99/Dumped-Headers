/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIButtonBarLayout.h>

@class UIBarButtonItem, UIView, NSLayoutConstraint;

@interface _UIButtonBarSpacerLayout : _UIButtonBarLayout {

	UIBarButtonItem* _item;
	UIView* _spacer;
	NSLayoutConstraint* _requestedSize;
	NSLayoutConstraint* _minimumSize;
	NSLayoutConstraint* _equalSize;
	BOOL _flexible;
	BOOL _groupSpacer;

}
+(id)spacerForLayoutMetrics:(id)arg1 betweenLayout:(id)arg2 andLayout:(id)arg3 ;
+(double)minimumLayoutWidthForSpacerBetweenLayout:(id)arg1 andLayout:(id)arg2 givenMinimumSpaceWidth:(double)arg3 ;
-(id)description;
-(id)_item;
-(void)_configure;
-(void)_addLayoutViews:(id)arg1 ;
-(void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
-(id)initWithLayoutMetrics:(id)arg1 ;
-(BOOL)_isSpace;
-(double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1 ;
-(id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2 ;
@end

