/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/AssistiveTouch.axuiservice/AssistiveTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class HNDUIServer, NSString, CALayer;

@interface HNDScannerInputViewController : UIViewController {

	HNDUIServer* _userInterfaceServer;
	NSString* _cameraInputSourceAlertIdentifier;
	NSString* _hardwareInputSourceAlertIdentifier;
	NSString* _screenInputSourceAlertIdentifier;
	CALayer* _cameraInputSourceStateLeftLayer;
	CALayer* _cameraInputSourceStateRightLayer;

}

@property (assign,nonatomic) HNDUIServer * userInterfaceServer;                          //@synthesize userInterfaceServer=_userInterfaceServer - In the implementation block
@property (nonatomic,retain) NSString * cameraInputSourceAlertIdentifier;                //@synthesize cameraInputSourceAlertIdentifier=_cameraInputSourceAlertIdentifier - In the implementation block
@property (nonatomic,retain) NSString * hardwareInputSourceAlertIdentifier;              //@synthesize hardwareInputSourceAlertIdentifier=_hardwareInputSourceAlertIdentifier - In the implementation block
@property (nonatomic,retain) NSString * screenInputSourceAlertIdentifier;                //@synthesize screenInputSourceAlertIdentifier=_screenInputSourceAlertIdentifier - In the implementation block
@property (nonatomic,retain) CALayer * cameraInputSourceStateLeftLayer;                  //@synthesize cameraInputSourceStateLeftLayer=_cameraInputSourceStateLeftLayer - In the implementation block
@property (nonatomic,retain) CALayer * cameraInputSourceStateRightLayer;                 //@synthesize cameraInputSourceStateRightLayer=_cameraInputSourceStateRightLayer - In the implementation block
-(CALayer *)cameraInputSourceStateLeftLayer;
-(HNDUIServer *)userInterfaceServer;
-(void)showAlert:(id)arg1 forSource:(unsigned long long)arg2 ;
-(void)setUserInterfaceServer:(HNDUIServer *)arg1 ;
-(void)_hideAlertsForAllSources;
-(void)_hideStateForAllSources;
-(void)showState:(id)arg1 forSource:(unsigned long long)arg2 ;
-(void)hideStateForSource:(unsigned long long)arg1 ;
-(void)hideAlertForSource:(unsigned long long)arg1 ;
-(void)hideAlerts;
-(NSString *)cameraInputSourceAlertIdentifier;
-(NSString *)hardwareInputSourceAlertIdentifier;
-(NSString *)screenInputSourceAlertIdentifier;
-(void)setScreenInputSourceAlertIdentifier:(NSString *)arg1 ;
-(void)setCameraInputSourceAlertIdentifier:(NSString *)arg1 ;
-(void)setHardwareInputSourceAlertIdentifier:(NSString *)arg1 ;
-(void)setCameraInputSourceStateLeftLayer:(CALayer *)arg1 ;
-(CALayer *)cameraInputSourceStateRightLayer;
-(void)setCameraInputSourceStateRightLayer:(CALayer *)arg1 ;
-(void)dealloc;
@end

