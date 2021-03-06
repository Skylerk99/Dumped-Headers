/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/_GEOCountryConfigurationServerProxyDelegate.h>

@protocol _GEOCountryConfigurationServerProxy;
@class NSString, NSLock, NSMutableArray, NSMutableDictionary;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver, _GEOCountryConfigurationServerProxyDelegate> {

	NSString* _countryCode;
	NSLock* _countryCodeLock;
	NSMutableArray* _updateCompletionHandlers;
	NSLock* _supportedFeaturesLock;
	NSMutableDictionary* _supportedFeatures;
	double _urlAuthenticationTimeToLive;
	BOOL _hasURLAuthenticationTimeToLive;
	id<_GEOCountryConfigurationServerProxy> _serverProxy;

}

@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,readonly) BOOL currentCountrySupportsTraffic; 
@property (nonatomic,readonly) BOOL currentCountrySupportsDirections; 
@property (nonatomic,readonly) BOOL currentCountrySupportsNavigation; 
@property (nonatomic,readonly) BOOL currentCountrySupportsRouteGenius; 
@property (nonatomic,readonly) BOOL currentCountrySupportsCarIntegration; 
@property (nonatomic,readonly) double urlAuthenticationTimeToLive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setUseLocalProxy:(BOOL)arg1 ;
+(id)sharedConfiguration;
+(void)disableServerConnection;
-(void)dealloc;
-(id)init;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(double)urlAuthenticationTimeToLive;
-(BOOL)currentCountrySupportsCarIntegration;
-(BOOL)currentCountrySupportsNavigation;
-(BOOL)countryCode:(id)arg1 supportsFeature:(long long)arg2 ;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)updateCountryConfiguration:(/*^block*/id)arg1 ;
-(BOOL)currentCountrySupportsRouteGenius;
-(void)serverProxyProvidersDidChange:(id)arg1 ;
-(id)_defaultForKey:(id)arg1 inCountry:(id)arg2 defaultValue:(id)arg3 sourcePtr:(long long*)arg4 ;
-(void)updateProvidersForCurrentCountry;
-(BOOL)currentCountrySupportsTraffic;
-(void)_updateCountryConfiguration:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)_resetSupportedFeatures;
-(id)_countryDefaultForKey:(id)arg1 inCountry:(id)arg2 sourcePtr:(long long*)arg3 ;
-(BOOL)currentCountrySupportsFeature:(long long)arg1 ;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long*)arg3 ;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)serverProxy:(id)arg1 countryCodeDidChange:(id)arg2 ;
-(void)updateCountryConfiguration:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(BOOL)currentCountrySupportsDirections;
@end

