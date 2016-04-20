/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoGlanceSettings.framework/NanoGlanceSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoGlanceSettings/NGSInternalSettingsManager.h>
#import <libobjc.A.dylib/SPDeviceConnectionDelegate.h>

@protocol NGSSettingsManagerDelegate;
@class NSString;

@interface NGSSettingsManager : NGSInternalSettingsManager <SPDeviceConnectionDelegate> {

	id<NGSSettingsManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NGSSettingsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSettingsManager;
-(void)setDelegate:(id<NGSSettingsManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<NGSSettingsManagerDelegate>)delegate;
-(void)updateInstallStateForApplication:(id)arg1 installState:(long long)arg2 ;
-(BOOL)_shouldSaveGlanceDefinitions;
-(void)_willSaveGlanceDefinitions;
-(BOOL)_shouldMergeGlanceDefinitions;
-(void)_mergeAdditionalGlanceDefinitionsIntoArray:(id)arg1 ;
-(void)didLoadGlanceDefinitions;
-(void)_handleLocaleChange:(id)arg1 ;
-(id)_fetchWatchKitGlances;
-(unsigned long long)_installStateForWatchKitInstallState:(long long)arg1 ;
@end

