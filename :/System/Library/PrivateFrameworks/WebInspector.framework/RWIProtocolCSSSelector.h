/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolCSSSelector : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSArray * specificity; 
@property (assign,nonatomic) BOOL dynamic; 
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setDynamic:(BOOL)arg1 ;
-(id)initWithText:(id)arg1 ;
-(BOOL)dynamic;
-(void)setSpecificity:(NSArray *)arg1 ;
-(NSArray *)specificity;
@end

