/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, _HKEmergencyContact;

@interface _HKEmergencyCardContactCell : UITableViewCell {

	UILabel* _relationshipLabel;
	UILabel* _nameLabel;
	UILabel* _phoneNumberLabel;
	_HKEmergencyContact* _contact;

}

@property (nonatomic,retain) _HKEmergencyContact * contact;              //@synthesize contact=_contact - In the implementation block
-(void)setContact:(_HKEmergencyContact *)arg1 ;
-(_HKEmergencyContact *)contact;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end

