/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingCommand.h>

@interface SASettingSetValue : SASettingCommand

@property (assign,nonatomic) BOOL dryRun; 
@property (assign,nonatomic) BOOL failOnSiriDisconnectWarnings; 
+(id)setValue;
+(id)setValueWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)dryRun;
-(void)setDryRun:(BOOL)arg1 ;
-(BOOL)failOnSiriDisconnectWarnings;
-(void)setFailOnSiriDisconnectWarnings:(BOOL)arg1 ;
@end

