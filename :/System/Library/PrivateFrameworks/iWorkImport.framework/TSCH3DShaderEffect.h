/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:32 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DShaderEffectStateInfo.h>

@interface TSCH3DShaderEffect : NSObject <TSCH3DShaderEffectStateInfo>
+(id)stateSharingID;
+(Class)stateClass;
+(id)effect;
-(id)stateSharingID;
-(void)addVariables:(id)arg1 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 updateCurrentStates:(id)arg3 ;
-(void)updateState:(id)arg1 effectsStates:(id)arg2 ;
-(Class)stateClass;
-(BOOL)alwaysUploadData;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

