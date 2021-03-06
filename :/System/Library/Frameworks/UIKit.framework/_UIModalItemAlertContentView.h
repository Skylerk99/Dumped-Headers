/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIModalItemContentView.h>

@class _UIModalItemTextFiledBGView, UITableView, UIView, UIScrollView;

@interface _UIModalItemAlertContentView : _UIModalItemContentView {

	_UIModalItemTextFiledBGView* _textFieldBGView;
	BOOL _alertViewIsSetup;
	UITableView* _otherTableView;
	UIView* _2ButtonsSeparators;
	UIView* _tableViewTopSeparator;
	UIScrollView* _labelsScrollView;
	BOOL _itemWantsVerticalButtons;
	BOOL _itemNeedsTwoTableViews;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)layout;
-(void)_reloadButtons;
-(void)setEnableFirstOtherButton:(BOOL)arg1 ;
-(void)_prepareViewIfNeeded;
@end

