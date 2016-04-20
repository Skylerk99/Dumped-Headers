/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:32 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSURL, NSObject, NSURLSession;

@interface HMDServerBag : NSObject {

	BOOL _refreshing;
	NSDictionary* _dictionaryRepresentation;
	unsigned long long _environment;
	NSURL* _url;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSURLSession* _urlSession;

}

@property (nonatomic,readonly) unsigned long long environment;                             //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSURL * activationHostnameURL; 
@property (nonatomic,copy,readonly) NSURL * activationCertificateHostnameURL; 
@property (nonatomic,copy,readonly) NSURL * accessoryReportURL; 
@property (nonatomic,readonly) double accessoryReportTimeout; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                     //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                 //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) NSURLSession * urlSession;                                  //@synthesize urlSession=_urlSession - In the implementation block
@property (assign,nonatomic) BOOL refreshing;                                              //@synthesize refreshing=_refreshing - In the implementation block
@property (nonatomic,copy) NSDictionary * dictionaryRepresentation;                        //@synthesize dictionaryRepresentation=_dictionaryRepresentation - In the implementation block
+(void)initialize;
+(id)serverBagURLForEnvironment:(unsigned long long)arg1 ;
+(id)activationHostnameURLOverride;
+(id)activationCertificateHostnameURLOverride;
+(id)defaultServerBag;
-(id)init;
-(id)description;
-(id)debugDescription;
-(NSURL *)url;
-(unsigned long long)environment;
-(NSDictionary *)dictionaryRepresentation;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)initWithEnvironment:(unsigned long long)arg1 ;
-(void)_loadDefaultBag;
-(void)_synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)refreshing;
-(NSURLSession *)urlSession;
-(void)_handleServerBagResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setRefreshing:(BOOL)arg1 ;
-(void)setDictionaryRepresentation:(NSDictionary *)arg1 ;
-(NSURL *)activationHostnameURL;
-(NSURL *)activationCertificateHostnameURL;
-(NSURL *)accessoryReportURL;
-(double)accessoryReportTimeout;
@end

