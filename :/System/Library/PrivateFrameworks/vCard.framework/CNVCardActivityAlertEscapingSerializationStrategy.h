/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNVCardActivityAlertAbstractSerializationStrategy.h>

@class NSString;

@interface CNVCardActivityAlertEscapingSerializationStrategy : NSObject <CNVCardActivityAlertAbstractSerializationStrategy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)strategyWouldAlterString:(id)arg1 ;
+(id)charactersToTriggerStrategy;
+(id)serializeString:(id)arg1 ;
+(id)regex;
@end

