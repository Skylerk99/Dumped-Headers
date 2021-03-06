/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface ExpiredDownloadRecoveryResponse : NSObject {

	long long _downloadIdentifier;
	NSError* _error;
	long long _result;

}

@property (assign,nonatomic) long long downloadIdentifier;              //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (nonatomic,copy) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long result;                          //@synthesize result=_result - In the implementation block
-(long long)downloadIdentifier;
-(NSError *)error;
-(long long)result;
-(void)setDownloadIdentifier:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setResult:(long long)arg1 ;
@end

