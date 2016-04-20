/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASRecordingInfo : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * activationAudioAlertDuration; 
@property (nonatomic,copy) NSNumber * activationAudioAlertStartTime; 
@property (nonatomic,copy) NSNumber * activationHapticAlertDuration; 
@property (nonatomic,copy) NSNumber * activationHapticAlertStartTime; 
@property (nonatomic,copy) NSNumber * activationTime; 
@property (nonatomic,copy) NSString * alertType; 
@property (nonatomic,copy) NSNumber * beamFormingStartTime; 
@property (nonatomic,copy) NSNumber * buttonDowntime; 
@property (nonatomic,copy) NSNumber * buttonUpTime; 
@property (assign,nonatomic) BOOL ringerSwitchOff; 
@property (assign,nonatomic) BOOL zeroLatencyLaunch; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordingInfo;
+(id)recordingInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)alertType;
-(void)setAlertType:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)activationAudioAlertDuration;
-(void)setActivationAudioAlertDuration:(NSNumber *)arg1 ;
-(NSNumber *)activationAudioAlertStartTime;
-(void)setActivationAudioAlertStartTime:(NSNumber *)arg1 ;
-(NSNumber *)activationHapticAlertDuration;
-(void)setActivationHapticAlertDuration:(NSNumber *)arg1 ;
-(NSNumber *)activationHapticAlertStartTime;
-(void)setActivationHapticAlertStartTime:(NSNumber *)arg1 ;
-(NSNumber *)activationTime;
-(void)setActivationTime:(NSNumber *)arg1 ;
-(NSNumber *)beamFormingStartTime;
-(void)setBeamFormingStartTime:(NSNumber *)arg1 ;
-(NSNumber *)buttonDowntime;
-(void)setButtonDowntime:(NSNumber *)arg1 ;
-(NSNumber *)buttonUpTime;
-(void)setButtonUpTime:(NSNumber *)arg1 ;
-(BOOL)ringerSwitchOff;
-(void)setRingerSwitchOff:(BOOL)arg1 ;
-(BOOL)zeroLatencyLaunch;
-(void)setZeroLatencyLaunch:(BOOL)arg1 ;
@end

