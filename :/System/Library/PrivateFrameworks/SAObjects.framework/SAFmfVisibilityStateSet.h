/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@interface SAFmfVisibilityStateSet : SADomainCommand

@property (assign,nonatomic) BOOL visible; 
+(id)visibilityStateSet;
+(id)visibilityStateSetWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

