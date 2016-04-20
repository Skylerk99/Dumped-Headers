/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UABestAppSuggestionManagerProtocol <NSObject>
@required
-(void)doConnected;
-(void)doStartBestAppSuggestion:(double)arg1;
-(void)doDetermineBestAppSuggestionWithCompletionHandler:(/*^block*/id)arg1;
-(void)doDetermineBestAppSuggestions:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doRemoveBestAppSuggestion:(id)arg1 options:(id)arg2;
-(void)doRegisterForBestAppChangeNotification;
-(void)doUnregisterForBestAppChangeNotification;
-(void)doQueueFetchOfPayloadForBestAppSuggestion:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doLaunchFollowUp:(id)arg1 interactionType:(unsigned long long)arg2 cancelled:(BOOL)arg3;

@end

