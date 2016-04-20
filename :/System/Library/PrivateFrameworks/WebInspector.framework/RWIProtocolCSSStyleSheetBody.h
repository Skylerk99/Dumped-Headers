/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolCSSStyleSheetBody : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * styleSheetId; 
@property (nonatomic,copy) NSArray * rules; 
@property (nonatomic,copy) NSString * text; 
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSArray *)rules;
-(void)setRules:(NSArray *)arg1 ;
-(void)setStyleSheetId:(NSString *)arg1 ;
-(NSString *)styleSheetId;
-(id)initWithStyleSheetId:(id)arg1 rules:(id)arg2 ;
@end

