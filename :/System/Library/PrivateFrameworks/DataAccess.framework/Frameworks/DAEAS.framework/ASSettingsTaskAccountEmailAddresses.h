/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSMutableSet, NSString;

@interface ASSettingsTaskAccountEmailAddresses : ASItem {

	NSMutableSet* _mEmailAddresses;
	NSString* _primarySMTPAddress;

}

@property (nonatomic,retain) NSMutableSet * mEmailAddresses;              //@synthesize mEmailAddresses=_mEmailAddresses - In the implementation block
@property (nonatomic,retain) NSString * primarySMTPAddress;               //@synthesize primarySMTPAddress=_primarySMTPAddress - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)emailAddresses;
-(id)description;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(NSMutableSet *)mEmailAddresses;
-(void)setMEmailAddresses:(NSMutableSet *)arg1 ;
-(void)addEmailAddress:(id)arg1 ;
-(void)setPrimarySMTPAddress:(NSString *)arg1 ;
-(NSString *)primarySMTPAddress;
@end

