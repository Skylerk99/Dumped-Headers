/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAPerson;

@interface SAPersonAttribute : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * data; 
@property (nonatomic,copy) NSString * displayText; 
@property (nonatomic,retain) SAPerson * object; 
@property (nonatomic,retain) id<SAAceComparable> typedData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)personAttribute;
+(id)personAttributeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)st_contactAddressValue;
-(NSString *)displayText;
-(SAPerson *)object;
-(NSString *)data;
-(void)setData:(NSString *)arg1 ;
-(void)setObject:(SAPerson *)arg1 ;
-(void)setDisplayText:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id<SAAceComparable>)typedData;
-(void)setTypedData:(id<SAAceComparable>)arg1 ;
@end

