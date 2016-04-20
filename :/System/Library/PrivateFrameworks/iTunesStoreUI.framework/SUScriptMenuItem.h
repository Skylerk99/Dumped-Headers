/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptMenuItem : SUScriptObject {

	BOOL _enabled;
	NSString* _title;
	id _userInfo;

}

@property (assign) BOOL enabled; 
@property (retain) NSString * title; 
@property (retain) id userInfo; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(BOOL)enabled;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setUserInfo:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)userInfo;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)_sendDidChange;
@end

