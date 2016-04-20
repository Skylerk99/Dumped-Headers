/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLAuthenticationChallenge, NSString, NSNumber;

@interface DownloadSessionProperties : NSObject <NSCopying> {

	long long _assetID;
	NSURLAuthenticationChallenge* _authenticationChallenge;
	NSString* _clientIdentifier;
	long long _downloadID;
	NSString* _downloadPhase;
	NSNumber* _duetBudget;
	long long _handlerIdentifier;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;                                  //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) long long handlerIdentifier;                                       //@synthesize handlerIdentifier=_handlerIdentifier - In the implementation block
@property (assign,nonatomic) long long assetIdentifier;                                           //@synthesize assetID=_assetID - In the implementation block
@property (assign,nonatomic) long long downloadIdentifier;                                        //@synthesize downloadID=_downloadID - In the implementation block
@property (nonatomic,copy) NSString * downloadPhase;                                              //@synthesize downloadPhase=_downloadPhase - In the implementation block
@property (nonatomic,copy) NSNumber * duetBudget;                                                 //@synthesize duetBudget=_duetBudget - In the implementation block
@property (nonatomic,retain) NSURLAuthenticationChallenge * authenticationChallenge;              //@synthesize authenticationChallenge=_authenticationChallenge - In the implementation block
-(long long)assetIdentifier;
-(id)initWithClientIdentifier:(id)arg1 handlerIdentifier:(long long)arg2 ;
-(void)setAssetIdentifier:(long long)arg1 ;
-(void)setAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg1 ;
-(NSNumber *)duetBudget;
-(void)setDuetBudget:(NSNumber *)arg1 ;
-(long long)handlerIdentifier;
-(long long)downloadIdentifier;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDownloadIdentifier:(long long)arg1 ;
-(NSString *)clientIdentifier;
-(NSString *)downloadPhase;
-(void)setDownloadPhase:(NSString *)arg1 ;
-(NSURLAuthenticationChallenge *)authenticationChallenge;
@end

