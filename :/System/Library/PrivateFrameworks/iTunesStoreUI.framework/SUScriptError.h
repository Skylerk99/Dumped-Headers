/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:16 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSError, NSString;

@interface SUScriptError : SUScriptObject {

	NSError* _error;

}

@property (readonly) long long code; 
@property (readonly) NSString * domain; 
@property (readonly) NSString * localizedDescription; 
@property (readonly) NSString * localizedFailureReason; 
@property (readonly) NSString * localizedRecoverySuggestion; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(NSString *)localizedDescription;
-(NSString *)domain;
-(long long)code;
-(NSString *)localizedRecoverySuggestion;
-(NSString *)localizedFailureReason;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)initWithError:(id)arg1 ;
@end

