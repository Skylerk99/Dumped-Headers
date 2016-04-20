/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition, NSMutableDictionary, NSDate;

@interface PLIdentityServicesAgent : PLAgent {

	PLXPCListenerOperatorComposition* _xpcHandler;
	PLXPCListenerOperatorComposition* _networkStatsHandler;
	PLXPCListenerOperatorComposition* _infraWiFiRequestHandler;
	PLXPCListenerOperatorComposition* _localLinkTypeHandler;
	NSMutableDictionary* _previousStatsByPriority;
	NSDate* _initialEntryDate;
	NSDate* _lastLocalDeliveryLogDate;
	NSMutableDictionary* _lastEntryDatePerCategory;

}

@property (retain) PLXPCListenerOperatorComposition * xpcHandler;                           //@synthesize xpcHandler=_xpcHandler - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * networkStatsHandler;                  //@synthesize networkStatsHandler=_networkStatsHandler - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * infraWiFiRequestHandler;              //@synthesize infraWiFiRequestHandler=_infraWiFiRequestHandler - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * localLinkTypeHandler;                 //@synthesize localLinkTypeHandler=_localLinkTypeHandler - In the implementation block
@property (retain) NSMutableDictionary * previousStatsByPriority;                           //@synthesize previousStatsByPriority=_previousStatsByPriority - In the implementation block
@property (retain) NSDate * initialEntryDate;                                               //@synthesize initialEntryDate=_initialEntryDate - In the implementation block
@property (retain) NSDate * lastLocalDeliveryLogDate;                                       //@synthesize lastLocalDeliveryLogDate=_lastLocalDeliveryLogDate - In the implementation block
@property (retain) NSMutableDictionary * lastEntryDatePerCategory;                          //@synthesize lastEntryDatePerCategory=_lastEntryDatePerCategory - In the implementation block
+(void)load;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryDefinitionIDSLocalLink;
+(id)entryDefinitionIDSMessageStats;
+(id)entryDefinitionIDSSocketStats;
+(id)entryDefinitionLocalInfraWiFiRequests;
-(id)init;
-(void)initOperatorDependancies;
-(void)logIDSNetworkEntries:(id)arg1 ;
-(void)logLocalInfraWiFiFrequests:(id)arg1 ;
-(void)logLocalLinkType:(id)arg1 ;
-(void)createBTAccountingEvents:(id)arg1 ;
-(NSMutableDictionary *)previousStatsByPriority;
-(NSDate *)lastLocalDeliveryLogDate;
-(void)setLastLocalDeliveryLogDate:(NSDate *)arg1 ;
-(NSMutableDictionary *)lastEntryDatePerCategory;
-(NSDate *)initialEntryDate;
-(void)createIDSAccountingEventsWithEntries:(id)arg1 ;
-(PLXPCListenerOperatorComposition *)xpcHandler;
-(void)setXpcHandler:(PLXPCListenerOperatorComposition *)arg1 ;
-(PLXPCListenerOperatorComposition *)networkStatsHandler;
-(void)setNetworkStatsHandler:(PLXPCListenerOperatorComposition *)arg1 ;
-(PLXPCListenerOperatorComposition *)infraWiFiRequestHandler;
-(void)setInfraWiFiRequestHandler:(PLXPCListenerOperatorComposition *)arg1 ;
-(PLXPCListenerOperatorComposition *)localLinkTypeHandler;
-(void)setLocalLinkTypeHandler:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)setPreviousStatsByPriority:(NSMutableDictionary *)arg1 ;
-(void)setInitialEntryDate:(NSDate *)arg1 ;
-(void)setLastEntryDatePerCategory:(NSMutableDictionary *)arg1 ;
@end

