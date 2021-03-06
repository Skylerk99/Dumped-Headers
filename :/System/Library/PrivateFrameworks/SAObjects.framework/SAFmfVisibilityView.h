/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSURL;

@interface SAFmfVisibilityView : SAUISnippet

@property (nonatomic,copy) NSURL * searchContext; 
@property (assign,nonatomic) BOOL visible; 
+(id)visibilityView;
+(id)visibilityViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(void)setSearchContext:(NSURL *)arg1 ;
-(NSURL *)searchContext;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

