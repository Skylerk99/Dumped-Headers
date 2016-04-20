/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Bundles/TwoSteps.fpenroll/TwoSteps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TwoSteps/TwoSteps-Structs.h>
#import <UIKit/UIButton.h>

@class RCRadarComposeController, UIViewController, NSString, NSArray;

@interface BKUIRadarButton : UIButton {

	RCRadarComposeController* _radarController;
	BOOL _flashing;
	UIViewController* _parentController;
	NSString* _radarTitle;
	NSArray* _radarAttachmentPaths;
	unsigned long long _radarClassification;
	unsigned long long _radarReproducibility;
	SEL _parentTapSelector;
	NSString* _radarDescription;

}

@property (__weak) UIViewController * parentController;                  //@synthesize parentController=_parentController - In the implementation block
@property (retain) NSString * radarTitle;                                //@synthesize radarTitle=_radarTitle - In the implementation block
@property (retain) NSArray * radarAttachmentPaths;                       //@synthesize radarAttachmentPaths=_radarAttachmentPaths - In the implementation block
@property (assign) unsigned long long radarClassification;               //@synthesize radarClassification=_radarClassification - In the implementation block
@property (assign) unsigned long long radarReproducibility;              //@synthesize radarReproducibility=_radarReproducibility - In the implementation block
@property (assign) SEL parentTapSelector;                                //@synthesize parentTapSelector=_parentTapSelector - In the implementation block
@property (retain) NSString * radarDescription;                          //@synthesize radarDescription=_radarDescription - In the implementation block
-(void)blinkTimes:(unsigned long long)arg1 withPeriod:(double)arg2 ;
-(void)setRadarReproducibility:(unsigned long long)arg1 ;
-(void)setRadarClassification:(unsigned long long)arg1 ;
-(void)fillRadar;
-(SEL)parentTapSelector;
-(void)_startFlashingWithPeriod:(double)arg1 ;
-(void)setPreferencesBool:(CFStringRef)arg1 toValue:(BOOL)arg2 ;
-(BOOL)getPreferencesBool:(CFStringRef)arg1 ;
-(NSArray *)radarAttachmentPaths;
-(unsigned long long)radarClassification;
-(void)setParentTapSelector:(SEL)arg1 ;
-(void)setRadarAttachmentPaths:(NSArray *)arg1 ;
-(unsigned long long)radarReproducibility;
-(void)_setupRadarController;
-(void)_radarResult:(long long)arg1 ;
-(void)_clicked:(id)arg1 ;
-(void)blinkTimes:(unsigned long long)arg1 ;
-(void)_stopFlashing;
-(void)setParentController:(UIViewController *)arg1 ;
-(UIViewController *)parentController;
-(void)_setup;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)blink;
-(void)setRadarTitle:(NSString *)arg1 ;
-(void)setRadarDescription:(NSString *)arg1 ;
-(NSString *)radarTitle;
-(NSString *)radarDescription;
@end

