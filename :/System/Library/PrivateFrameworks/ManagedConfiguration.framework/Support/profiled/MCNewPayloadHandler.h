/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCPayload, MCProfileHandler, NSArray;

@interface MCNewPayloadHandler : NSObject {

	MCPayload* _payload;
	MCProfileHandler* _profileHandler;
	NSArray* _userInputResponses;

}

@property (nonatomic,retain,readonly) MCPayload * payload;                            //@synthesize payload=_payload - In the implementation block
@property (nonatomic,__weak,readonly) MCProfileHandler * profileHandler;              //@synthesize profileHandler=_profileHandler - In the implementation block
@property (nonatomic,retain) NSArray * userInputResponses;                            //@synthesize userInputResponses=_userInputResponses - In the implementation block
+(id)promptDictionaryForKey:(id)arg1 title:(id)arg2 description:(id)arg3 retypeDescription:(id)arg4 finePrint:(id)arg5 defaultValue:(id)arg6 placeholderValue:(id)arg7 minimumLength:(unsigned long long)arg8 fieldType:(int)arg9 flags:(int)arg10 ;
+(id)prioritizeUserInput:(id)arg1 key:(id)arg2 overField:(id)arg3 ;
-(id)initWithPayload:(id)arg1 profileHandler:(id)arg2 ;
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(void)setAsideWithInstaller:(id)arg1 ;
-(void)unsetAside;
-(void)setAside;
-(void)_retainDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 ;
-(void)_releaseDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 ;
-(MCProfileHandler *)profileHandler;
-(void)_touchDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 ;
-(id)userInputFields;
-(BOOL)preflightUserInputResponses:(id)arg1 outError:(id*)arg2 ;
-(BOOL)stageForInstallationWithInstaller:(id)arg1 interactionClient:(id)arg2 outError:(id*)arg3 ;
-(void)unstageFromInstallationWithInstaller:(id)arg1 ;
-(void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(id)_temporaryPersistentIDForIdentityUUID:(id)arg1 outError:(id*)arg2 ;
-(void)setUserInputResponses:(NSArray *)arg1 ;
-(BOOL)isInstalled;
-(MCPayload *)payload;
-(void)remove;
-(NSArray *)userInputResponses;
@end

