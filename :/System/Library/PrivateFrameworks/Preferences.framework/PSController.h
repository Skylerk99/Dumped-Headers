/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSController <PSStateRestoration>
@optional
+(void)validateSpecifier:(id)arg1;
+(void)formatSearchEntries:(id)arg1 parent:(id)arg2;
+(id)searchBundle;
-(void)highlightSpecifierWithID:(id)arg1;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3;
-(void)pushController:(id)arg1 animate:(BOOL)arg2;
-(void)pushController:(id)arg1;

@required
-(void)setParentController:(id)arg1;
-(id)parentController;
-(void)suspend;
-(id)specifier;
-(void)setSpecifier:(id)arg1;
-(id)rootController;
-(void)setRootController:(id)arg1;
-(void)showController:(id)arg1;
-(void)showController:(id)arg1 animate:(BOOL)arg2;
-(void)handleURL:(id)arg1;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
-(id)readPreferenceValue:(id)arg1;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)statusBarWillAnimateByHeight:(double)arg1;

@end

