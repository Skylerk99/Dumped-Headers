/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Calculate.framework/Calculate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSDate, NSDictionary, NSString, NSNumber, NSMutableString, NSMutableDictionary;

@interface CurrencyCache : NSObject <NSXMLParserDelegate> {

	unsigned long long _uuid;
	NSDate* _lastRefreshDate;
	NSDictionary* _currencyData;
	NSString* _currentCurrency;
	NSNumber* _currentRate;
	NSMutableString* _currentString;
	NSMutableDictionary* _mutableCurrencyCache;

}

@property (readonly) unsigned long long uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSDate * lastRefreshDate;                 //@synthesize lastRefreshDate=_lastRefreshDate - In the implementation block
@property (nonatomic,retain) NSDictionary * currencyData;              //@synthesize currencyData=_currencyData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
-(void)dealloc;
-(id)init;
-(unsigned long long)uuid;
-(void)_loadPersistedCurrencyCache;
-(void)setCurrencyData:(NSDictionary *)arg1 ;
-(void)setLastRefreshDate:(NSDate *)arg1 ;
-(void)_persistCurrencyCache;
-(NSDate *)lastRefreshDate;
-(NSDictionary *)currencyData;
-(BOOL)refreshWithTimeOut:(float)arg1 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(BOOL)refresh;
@end

