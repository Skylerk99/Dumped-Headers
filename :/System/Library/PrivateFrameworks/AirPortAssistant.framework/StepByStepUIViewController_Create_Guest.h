/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/StepByStepUIViewController.h>
#import <libobjc.A.dylib/TableViewManagerDelegate.h>

@class NSString;

@interface StepByStepUIViewController_Create_Guest : StepByStepUIViewController <TableViewManagerDelegate> {

	NSString* _wifiName;
	NSString* _wifiPassword;
	BOOL _guestNetworkEnabled;
	int _guestNetSecMode;

}

@property (nonatomic,copy) NSString * wifiName;                     //@synthesize wifiName=_wifiName - In the implementation block
@property (nonatomic,copy) NSString * wifiPassword;                 //@synthesize wifiPassword=_wifiPassword - In the implementation block
@property (assign,nonatomic) BOOL guestNetworkEnabled;              //@synthesize guestNetworkEnabled=_guestNetworkEnabled - In the implementation block
@property (assign,nonatomic) int guestNetSecMode;                   //@synthesize guestNetSecMode=_guestNetSecMode - In the implementation block
-(void)setupTable;
-(void)updateTable;
-(void)validateAndUpdateNextButton;
-(void)addGuestNetworkIsEnabledSection;
-(void)addGuestNetworkPasswordSection;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4 ;
-(void)switchTouchedInCellAtIndexPath:(id)arg1 forSwitchIndex:(unsigned long long)arg2 isOn:(BOOL)arg3 ;
-(void)textFieldDidChangeAtIndexPath:(id)arg1 ;
-(void)setupInitialTableHeaderConfiguration;
-(void)setWifiName:(NSString *)arg1 ;
-(void)setWifiPassword:(NSString *)arg1 ;
-(NSString *)wifiPassword;
-(NSString *)wifiName;
-(BOOL)validateAndSetValues;
-(void)setGuestNetworkEnabled:(BOOL)arg1 ;
-(void)setGuestNetSecMode:(int)arg1 ;
-(BOOL)guestNetworkEnabled;
-(int)guestNetSecMode;
@end

