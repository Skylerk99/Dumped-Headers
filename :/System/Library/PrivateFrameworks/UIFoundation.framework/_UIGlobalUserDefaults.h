/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSUserDefaults.h>

@protocol UIFoundationGlobalUserDefaultsHelper;
@class NSMutableDictionary;

@interface _UIGlobalUserDefaults : NSUserDefaults {

	id<UIFoundationGlobalUserDefaultsHelper> _userDefaultsHelper;
	NSMutableDictionary* _userDefaultsDictionary;
	unsigned long long _backgroundTaskIdentifier;

}

@property (nonatomic,retain) id<UIFoundationGlobalUserDefaultsHelper> userDefaultsHelper;              //@synthesize userDefaultsHelper=_userDefaultsHelper - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userDefaultsDictionary;                             //@synthesize userDefaultsDictionary=_userDefaultsDictionary - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTaskIdentifier;                              //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
-(void)dealloc;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)synchronize;
-(void)setBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)backgroundTaskIdentifier;
-(void)_synchronizeIfNeeded;
-(void)setUserDefaultsHelper:(id<UIFoundationGlobalUserDefaultsHelper>)arg1 ;
-(void)setUserDefaultsDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)userDefaultsDictionary;
-(void)loadDefaultsDictionaryIfNeeded;
-(void)_scheduleSynchronization;
-(id)_userDefaultsHelperCreateIfNeeded;
-(void)loadDefaultsDictionary;
-(id<UIFoundationGlobalUserDefaultsHelper>)userDefaultsHelper;
@end

