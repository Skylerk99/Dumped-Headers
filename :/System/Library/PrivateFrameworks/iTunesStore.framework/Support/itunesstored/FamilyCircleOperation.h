/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSFamilyCircle, NSString;

@interface FamilyCircleOperation : ISOperation {

	long long _authenticationPromptStyle;
	SSFamilyCircle* _familyCircle;
	BOOL _fetchITunesAccountNames;
	NSString* _userAgent;

}

@property (assign,nonatomic) long long authenticationPromptStyle;              //@synthesize authenticationPromptStyle=_authenticationPromptStyle - In the implementation block
@property (assign,nonatomic) BOOL fetchITunesAccountNames;                     //@synthesize fetchITunesAccountNames=_fetchITunesAccountNames - In the implementation block
@property (nonatomic,copy) NSString * userAgent;                               //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,readonly) SSFamilyCircle * familyCircle;                  //@synthesize familyCircle=_familyCircle - In the implementation block
-(id)_familyCircleForDictionary:(id)arg1 ;
-(void)_writeCacheWithFamilyCircle:(id)arg1 accountIdentifier:(id)arg2 ;
-(id)_cachedFamilyCircleWithAccountIdentifier:(id)arg1 ;
-(id)_cachePath;
-(void)dealloc;
-(void)run;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setAuthenticationPromptStyle:(long long)arg1 ;
-(SSFamilyCircle *)familyCircle;
-(long long)authenticationPromptStyle;
-(BOOL)fetchITunesAccountNames;
-(void)setFetchITunesAccountNames:(BOOL)arg1 ;
@end

