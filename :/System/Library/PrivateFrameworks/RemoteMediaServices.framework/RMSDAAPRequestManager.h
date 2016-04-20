/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RMSDAAPRequestManagerDelegate;
@class NSURLSession, NSString, RMSFairPlaySession;

@interface RMSDAAPRequestManager : NSObject {

	NSURLSession* _urlSession;
	NSString* _hostName;
	NSString* _pairingGUID;
	NSString* _homeSharingGroupKey;
	long long _sessionIdentifier;
	long long _port;
	id<RMSDAAPRequestManagerDelegate> _delegate;
	RMSFairPlaySession* _fairPlaySession;

}

@property (nonatomic,copy) NSString * hostName;                                              //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,copy) NSString * pairingGUID;                                           //@synthesize pairingGUID=_pairingGUID - In the implementation block
@property (nonatomic,copy) NSString * homeSharingGroupKey;                                   //@synthesize homeSharingGroupKey=_homeSharingGroupKey - In the implementation block
@property (assign,nonatomic) long long sessionIdentifier;                                    //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) long long port;                                                 //@synthesize port=_port - In the implementation block
@property (assign,nonatomic,__weak) id<RMSDAAPRequestManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) RMSFairPlaySession * fairPlaySession;                           //@synthesize fairPlaySession=_fairPlaySession - In the implementation block
-(void)setPort:(long long)arg1 ;
-(NSString *)hostName;
-(void)setDelegate:(id<RMSDAAPRequestManagerDelegate>)arg1 ;
-(id)init;
-(id<RMSDAAPRequestManagerDelegate>)delegate;
-(long long)sessionIdentifier;
-(long long)port;
-(void)setSessionIdentifier:(long long)arg1 ;
-(void)setHostName:(NSString *)arg1 ;
-(void)setPairingGUID:(NSString *)arg1 ;
-(NSString *)pairingGUID;
-(NSString *)homeSharingGroupKey;
-(void)setHomeSharingGroupKey:(NSString *)arg1 ;
-(void)setFairPlaySession:(RMSFairPlaySession *)arg1 ;
-(id)requestWithPath:(id)arg1 method:(id)arg2 postData:(id)arg3 queryArgs:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)requestControlCommand:(id)arg1 text:(id)arg2 promptRevision:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(RMSFairPlaySession *)fairPlaySession;
@end

