/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSContainerPredicate.h>

@class NSString;

@interface CNiOSABContainersForAccountExternalIdentifierPredicate : CNPredicate <CNiOSContainerPredicate> {

	NSString* _accountExternalIdentifier;

}

@property (nonatomic,copy,readonly) NSString * accountExternalIdentifier;              //@synthesize accountExternalIdentifier=_accountExternalIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CFArrayRef)cn_copyContainersInAddressBook:(void*)arg1 error:(_CFError*)arg2 ;
-(BOOL)includesDisabledContainers;
-(id)initWithAccountExternalIdentifier:(id)arg1 ;
-(NSString *)accountExternalIdentifier;
-(void)dealloc;
-(NSString *)description;
@end

