/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:47 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSString, NSDictionary;

@interface STGenericIntentRequest : AFSiriRequest {

	NSString* _appIdentifier;
	NSString* _intentString;
	NSString* _utterance;
	NSDictionary* _info;
	BOOL __launchToForeground;

}

@property (assign,setter=_setLaunchToForeground:,nonatomic) BOOL _launchToForeground;              //@synthesize _launchToForeground=__launchToForeground - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)utterance;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)info;
-(BOOL)_makeAppFrontmost;
-(id)appIdentifier;
-(id)responseWithCode:(long long)arg1 ;
-(BOOL)isForegroundLaunch;
-(id)intentString;
-(BOOL)_launchToForeground;
-(void)_setLaunchToForeground:(BOOL)arg1 ;
-(id)initWithAppIdentifier:(id)arg1 intentString:(id)arg2 utterance:(id)arg3 info:(id)arg4 ;
@end

