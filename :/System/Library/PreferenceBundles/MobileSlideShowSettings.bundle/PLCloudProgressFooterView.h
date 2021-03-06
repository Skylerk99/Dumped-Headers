/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MobileSlideShowSettings.bundle/MobileSlideShowSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSlideShowSettings/MobileSlideShowSettings-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PLCPLStatusDelegate.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class NSDate, UILabel, PLCPLStatus, PLFooterViewUpdater, NSString;

@interface PLCloudProgressFooterView : UIView <PLCPLStatusDelegate, PSHeaderFooterView> {

	NSDate* _lastSyncDate;
	UILabel* _statusLabel;
	PLCPLStatus* _cplStatus;
	PLFooterViewUpdater* _updateTarget;

}

@property (nonatomic,retain) UILabel * statusLabel;                           //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) PLCPLStatus * cplStatus;                         //@synthesize cplStatus=_cplStatus - In the implementation block
@property (nonatomic,retain) PLFooterViewUpdater * updateTarget;              //@synthesize updateTarget=_updateTarget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)cplStatusDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)willMoveToWindow:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_updateStatusDisplay;
-(double)_preferredHeight;
-(PLCPLStatus *)cplStatus;
-(void)setCplStatus:(PLCPLStatus *)arg1 ;
-(PLFooterViewUpdater *)updateTarget;
-(void)setUpdateTarget:(PLFooterViewUpdater *)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
@end

