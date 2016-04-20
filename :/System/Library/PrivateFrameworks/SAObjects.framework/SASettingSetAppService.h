/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingSetBool.h>
#import <SAObjects/SASettingAppSettingCommand.h>

@class NSString, NSArray;

@interface SASettingSetAppService : SASettingSetBool <SASettingAppSettingCommand>

@property (nonatomic,copy) NSString * appWithSettingsId; 
@property (nonatomic,copy) NSString * location; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)setAppService;
+(id)setAppServiceWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)appWithSettingsId;
-(void)setAppWithSettingsId:(NSString *)arg1 ;
@end

