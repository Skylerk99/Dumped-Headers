/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <libobjc.A.dylib/AFSessionObject.h>
#import <SAObjects/SAAceSerializable.h>
#import <SAObjects/SAAceCommand.h>

@class NSString;

@interface SABaseCommand : AceObject <AFSessionObject, SAAceSerializable, SAAceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)baseCommand;
+(id)baseCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)serializedAceDataError:(id*)arg1 ;
-(BOOL)af_bufferingAllowedDuringActiveSession;
-(void)af_logDiagnostics;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)aceId;
-(void)setAceId:(NSString *)arg1 ;
-(NSString *)refId;
-(void)setRefId:(NSString *)arg1 ;
@end

