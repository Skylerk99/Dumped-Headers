/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_resolver;
@class NWEndpoint, NWParameters, NSObject, NSSet, NSArray;

@interface NWResolver : NSObject {

	NWEndpoint* _endpoint;
	NWParameters* _parameters;
	NSObject*<OS_nw_resolver> _internalResolver;
	long long _internalStatus;
	NSSet* _internalResolvedEndpoints;
	NSArray* _internalResolvedEndpointArray;

}

@property (readonly) long long status; 
@property (readonly) NWEndpoint * endpoint;                                   //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) NWParameters * parameters;                               //@synthesize parameters=_parameters - In the implementation block
@property (readonly) NSSet * resolvedEndpoints; 
@property (readonly) NSArray * resolvedEndpointArray; 
@property (readonly) NSObject*<OS_nw_resolver> internalResolver;              //@synthesize internalResolver=_internalResolver - In the implementation block
@property (assign) long long internalStatus;                                  //@synthesize internalStatus=_internalStatus - In the implementation block
@property (retain) NSSet * internalResolvedEndpoints;                         //@synthesize internalResolvedEndpoints=_internalResolvedEndpoints - In the implementation block
@property (retain) NSArray * internalResolvedEndpointArray;                   //@synthesize internalResolvedEndpointArray=_internalResolvedEndpointArray - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
-(NSSet *)resolvedEndpoints;
-(void)dealloc;
-(NWParameters *)parameters;
-(NWEndpoint *)endpoint;
-(long long)status;
-(void)setInternalStatus:(long long)arg1 ;
-(long long)internalStatus;
-(NSObject*<OS_nw_resolver>)internalResolver;
-(NSSet *)internalResolvedEndpoints;
-(NSArray *)internalResolvedEndpointArray;
-(NSArray *)resolvedEndpointArray;
-(void)setInternalResolvedEndpointArray:(NSArray *)arg1 ;
-(void)setInternalResolvedEndpoints:(NSSet *)arg1 ;
@end

