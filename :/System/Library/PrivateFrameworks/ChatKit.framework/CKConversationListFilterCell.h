/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UISegmentedControl;

@interface CKConversationListFilterCell : UITableViewCell {

	UISegmentedControl* _filterControl;

}

@property (nonatomic,retain) UISegmentedControl * filterControl;              //@synthesize filterControl=_filterControl - In the implementation block
+(double)defaultHeight;
+(id)identifier;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setFilterControl:(UISegmentedControl *)arg1 ;
-(UISegmentedControl *)filterControl;
@end

