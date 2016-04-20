/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DECServer.h>

@protocol _DECServer <_DECServerInterface>
@required
-(void)invalidate;

@end


@protocol OS_dispatch_queue, _DECFilter;
@class _DECServerResponder, _DECPredictionCache, NSObject, NSString, NSXPCConnection, _DECPredictionMap;

@interface _DECServer : NSObject <_DECServer> {

	_DECServerResponder* _responder;
	_DECPredictionCache* _resultCache;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _categories;
	long long _type;
	NSString* _identifier;
	NSXPCConnection* _connection;
	_DECPredictionMap* _predictionsContributed;
	id<_DECFilter> _predictionFilter;

}

@property (nonatomic,readonly) unsigned long long categories;                           //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) long long type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) _DECPredictionMap * predictionsContributed;              //@synthesize predictionsContributed=_predictionsContributed - In the implementation block
@property (nonatomic,retain) id<_DECFilter> predictionFilter;                           //@synthesize predictionFilter=_predictionFilter - In the implementation block
+(id)_defaultRestorationDirectory;
+(id)serverWithConnection:(id)arg1 responder:(id)arg2 ;
-(void)invalidate;
-(NSString *)identifier;
-(long long)type;
-(unsigned long long)categories;
-(NSXPCConnection *)connection;
-(void)registerClient:(long long)arg1 category:(unsigned long long)arg2 identifier:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 providesFeedback:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
-(void)setPrediction:(id)arg1 category:(unsigned long long)arg2 consumer:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)prewarmPredictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)userEngaged:(id)arg1 resultIdentifier:(id)arg2 metadata:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)userAbandoned:(id)arg1 resultIdentifier:(id)arg2 metadata:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)_restorationPath;
-(_DECPredictionMap *)predictionsContributed;
-(void)initializeCacheWithWarmUpHandler:(/*^block*/id)arg1 ;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id<_DECFilter>)predictionFilter;
-(void)setPredictionFilter:(id<_DECFilter>)arg1 ;
-(id)initWithConnection:(id)arg1 responder:(id)arg2 ;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 prewarm:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_filterPrediction:(id)arg1 forConsumer:(unsigned long long)arg2 ;
@end

