/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface MKTransitAttributionSummaryCell : MKCustomSeparatorTableViewCell {

	UILabel* _attributionLabel;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;

}

@property (nonatomic,copy) NSString * attributionSummary; 
+(id)reuseIdentifier;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(id)moreString;
-(void)setAttributionSummary:(NSString *)arg1 ;
-(NSString *)attributionSummary;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
@end

