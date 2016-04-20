/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/Search-Structs.h>
#import <libobjc.A.dylib/SPDaemonQueryDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol SPSearchAgentDelegate, OS_dispatch_queue;
@class SPDaemonQueryToken, NSString, NSMutableArray, NSArray, SPSearchResultSection, SPSearchResult, NSDictionary, NSObject, NSDate;

@interface SPSearchAgent : NSObject <SPDaemonQueryDelegate, MCProfileConnectionObserver> {

	SPDaemonQueryToken* _currentToken;
	NSString* _prefixWithNoResults;
	NSMutableArray* _sections;
	NSArray* _searchDomains;
	unsigned _resultCount;
	int _options;
	SPSearchResultSection* _topHitResultSection;
	SPSearchResultSection* _searchThroughSection;
	SPSearchResult* _webSearchThroughResult;
	SPSearchResult* _appStoreSearchThroughResult;
	SPSearchResult* _mapsSearchThroughResult;
	BOOL _searchThroughAllowed;
	BOOL _observersAdded;
	BOOL _defaultSearchEnabled;
	BOOL _oneShotZKWSEnabled;
	NSString* _lastVoiceQuery;
	BOOL _voiceQueryHasBeenStable;
	BOOL _hasCachedUpdate;
	NSDictionary* _lastParsecResults;
	BOOL _isActivated;
	NSString* _previousQuery;
	NSString* _previousQueryAnySession;
	BOOL _queryComplete;
	NSObject*<SPSearchAgentDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queryProcessor;
	int _currentZKWLevel;
	NSMutableArray* _cachedSections;
	NSMutableArray* _savedSections;
	NSDate* _parsecNewsExpireTime;
	int _prefsToken;
	BOOL _newQuery;
	BOOL _willNotify;
	BOOL _liveAndCached;
	BOOL _shouldCacheResults;
	BOOL _activeCachedZKW;
	NSMutableArray* _cachedZKW1;
	NSMutableArray* _cachedZKW2;
	NSString* _fbq;
	NSString* _web_fbq;

}

@property (readonly) NSArray * sections; 
@property (readonly) NSString * fbq;                                                        //@synthesize fbq=_fbq - In the implementation block
@property (readonly) NSString * web_fbq;                                                    //@synthesize web_fbq=_web_fbq - In the implementation block
@property (assign,nonatomic) int options;                                                   //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL queryComplete;                                          //@synthesize queryComplete=_queryComplete - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queryProcessor;                   //@synthesize queryProcessor=_queryProcessor - In the implementation block
@property (nonatomic,retain) NSArray * searchDomains;                                       //@synthesize searchDomains=_searchDomains - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SPSearchAgentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)deactivate;
+(void)activate;
+(BOOL)hasSeenZKWApps;
-(BOOL)queryComplete;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(NSArray *)searchDomains;
-(void)setSearchDomains:(NSArray *)arg1 ;
-(void)setDelegate:(NSObject*<SPSearchAgentDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<SPSearchAgentDelegate>)delegate;
-(void)deactivate;
-(void)activate;
-(void)clear;
-(void)setOptions:(int)arg1 ;
-(int)options;
-(id)queryString;
-(NSArray *)sections;
-(void)cancelCurrentQuery;
-(id)sectionAtIndex:(unsigned)arg1 ;
-(BOOL)hasResults;
-(void)addSections:(id)arg1 ;
-(unsigned long long)sectionCount;
-(id)queryId;
-(void)updateResultsThroughDelegate;
-(BOOL)sectionNeedsMoreMapsOption:(id)arg1 ;
-(void)handleHiddenResult:(id)arg1 shownResult:(id)arg2 inSection:(id)arg3 ;
-(void)mergeSections;
-(BOOL)hasParsecNews;
-(void)testPermuteSection:(id)arg1 domain:(unsigned)arg2 count:(int)arg3 ;
-(BOOL)promoteCachedQuery;
-(void)updateSearchThroughSectionWithQuery:(id)arg1 ;
-(BOOL)cleanupObsoleteResults;
-(BOOL)setQueryString:(id)arg1 withResponse:(id)arg2 keyboardLanguage:(id)arg3 keyboardPrimaryLanguage:(id)arg4 isStable:(BOOL)arg5 levelZKW:(int)arg6 allowInternet:(BOOL)arg7 ;
-(void)updateProlog:(id)arg1 ;
-(void)addDeserializer:(id)arg1 ;
-(void)updateEpilog:(id)arg1 ;
-(void)addSearchThroughSectionWithQuery:(id)arg1 ;
-(void)stuffChanged;
-(id)_indexesOfCompatibleSection:(id)arg1 ;
-(int)levelZKW;
-(void)removeSectionAtIndex:(unsigned)arg1 ;
-(BOOL)_shouldIgnoreQuery:(id)arg1 ;
-(void)postSearchAgentClearedResultsToDelegate;
-(BOOL)setQueryString:(id)arg1 keyboardLanguage:(id)arg2 keyboardPrimaryLanguage:(id)arg3 withResponse:(id)arg4 isStable:(BOOL)arg5 ;
-(BOOL)setQueryString:(id)arg1 keyboardLanguage:(id)arg2 levelZKW:(int)arg3 allowInternet:(BOOL)arg4 ;
-(void)internetDomainsChanged;
-(NSObject*<OS_dispatch_queue>)queryProcessor;
-(void)setQueryProcessor:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)fbq;
-(NSString *)web_fbq;
-(BOOL)setQueryString:(id)arg1 keyboardLanguage:(id)arg2 keyboardPrimaryLanguage:(id)arg3 levelZKW:(int)arg4 allowInternet:(BOOL)arg5 ;
-(void)performZKWQueryWithKeyboardLanguage:(id)arg1 allowInternet:(BOOL)arg2 ;
-(void)cacheZKWQueryLive:(BOOL)arg1 allowInternet:(BOOL)arg2 ;
-(BOOL)setQueryString:(id)arg1 keyboardLanguage:(id)arg2 withResponse:(id)arg3 isStable:(BOOL)arg4 ;
-(void)clearParsecResultsIfStale;
-(void)testSaveCachedZKWPermUsers:(int)arg1 appLinks:(int)arg2 apps:(int)arg3 ;
-(void)testRestoreCacheZKW;
-(id)initWithZKWLevel:(int)arg1 andOptions:(int)arg2 ;
-(void)cachedZKWAvailable:(BOOL)arg1 ;
-(void)invalidateCurrentQuery;
-(void)handleOptionsForNewSections:(id)arg1 ;
-(void)retrieveImageDataForIdentifier:(id)arg1 inSection:(id)arg2 preferredSize:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(void)retrieveImageDataForResult:(id)arg1 inSection:(id)arg2 preferredSize:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(void)postSearchAgentUpdatedResultsToDelegate;
-(void)searchDaemonQuery:(id)arg1 addedResults:(id)arg2 ;
-(void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2 ;
-(void)searchDaemonQueryReset:(id)arg1 ;
-(void)searchDaemonQueryCompleted:(id)arg1 ;
-(long long)contentFilters;
@end

