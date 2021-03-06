/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeTypeSet, NSArray;

@interface RWIProtocolRuntimeTypeDescription : RWIProtocolJSONObject

@property (assign,nonatomic) BOOL isValid; 
@property (nonatomic,copy) NSString * leastCommonAncestor; 
@property (nonatomic,retain) RWIProtocolRuntimeTypeSet * typeSet; 
@property (nonatomic,copy) NSArray * structures; 
@property (assign,nonatomic) BOOL isTruncated; 
-(BOOL)isValid;
-(void)setIsValid:(BOOL)arg1 ;
-(id)initWithIsValid:(BOOL)arg1 ;
-(void)setLeastCommonAncestor:(NSString *)arg1 ;
-(NSString *)leastCommonAncestor;
-(void)setTypeSet:(RWIProtocolRuntimeTypeSet *)arg1 ;
-(RWIProtocolRuntimeTypeSet *)typeSet;
-(void)setStructures:(NSArray *)arg1 ;
-(NSArray *)structures;
-(void)setIsTruncated:(BOOL)arg1 ;
-(BOOL)isTruncated;
@end

