/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSProperty : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * priority; 
@property (assign,nonatomic) BOOL implicit; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) BOOL parsedOk; 
@property (assign,nonatomic) long long status; 
@property (nonatomic,retain) RWIProtocolCSSSourceRange * range; 
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)priority;
-(void)setPriority:(NSString *)arg1 ;
-(RWIProtocolCSSSourceRange *)range;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(void)setRange:(RWIProtocolCSSSourceRange *)arg1 ;
-(void)setImplicit:(BOOL)arg1 ;
-(BOOL)implicit;
-(void)setParsedOk:(BOOL)arg1 ;
-(BOOL)parsedOk;
@end

