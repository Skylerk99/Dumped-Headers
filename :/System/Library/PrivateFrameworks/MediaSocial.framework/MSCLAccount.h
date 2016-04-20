/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface MSCLAccount : NSObject <NSCopying> {

	NSMutableDictionary* _accountProperties;

}

@property (nonatomic,copy) NSString * authenticationSecret; 
@property (nonatomic,copy) NSString * authenticationToken; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,copy) NSString * preferredPageIdentifier; 
@property (nonatomic,copy) NSString * serviceIdentifier; 
@property (nonatomic,copy) NSString * userName; 
-(NSString *)userName;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(BOOL)removeFromKeychain;
-(NSString *)serviceIdentifier;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(void)updateWithACAccount:(id)arg1 ;
-(id)_keychainPassword;
-(void)setAuthenticationSecret:(NSString *)arg1 ;
-(BOOL)saveToKeychain;
-(void)updateWithMSCLAccount:(id)arg1 ;
-(NSString *)authenticationSecret;
-(NSString *)preferredPageIdentifier;
-(void)setPreferredPageIdentifier:(NSString *)arg1 ;
-(NSString *)fullName;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(void)setFullName:(NSString *)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(id)initWithACAccount:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
@end

