/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUAudioDeviceControllerActions.h>

@class AVAudioClient, AVAudioDevice, NSArray, NSString;

@interface TUAudioDeviceController : NSObject <TUAudioDeviceControllerActions> {

	AVAudioClient* _audioClient;

}

@property (nonatomic,retain) AVAudioDevice * currentInputDevice; 
@property (nonatomic,retain) AVAudioDevice * currentOutputDevice; 
@property (nonatomic,readonly) NSArray * inputDevices; 
@property (nonatomic,readonly) NSArray * outputDevices; 
@property (nonatomic,retain) AVAudioClient * audioClient;                      //@synthesize audioClient=_audioClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(AVAudioDevice *)currentInputDevice;
-(NSArray *)inputDevices;
-(NSArray *)outputDevices;
-(AVAudioDevice *)currentOutputDevice;
-(void)setCurrentInputDevice:(AVAudioDevice *)arg1 ;
-(void)setCurrentOutputDevice:(AVAudioDevice *)arg1 ;
-(void)setAudioClient:(AVAudioClient *)arg1 ;
-(AVAudioClient *)audioClient;
-(void)setCurrentInputDeviceToDeviceWithID:(id)arg1 ;
-(void)setCurrentOutputDeviceToDeviceWithID:(id)arg1 ;
@end

