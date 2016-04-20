/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDSearchQueryDelegate.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, NSLock, MFFuture, NSMutableArray, MDSearchQuery, NSString, NSPredicate;

@interface MFLibrarySearchableIndexQuery : NSObject <MDSearchQueryDelegate, NSProgressReporting> {

	NSLock* _lock;
	NSProgress* _progress;
	NSProgress* _internalProgress;
	MFFuture* _resultsFuture;
	NSMutableArray* _resultsBlocks;
	unsigned _cancellableQuery : 1;
	MDSearchQuery* _query;
	NSString* _queryString;
	NSPredicate* _predicate;

}

@property (nonatomic,copy,readonly) NSString * queryString;               //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,copy,readonly) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
+(id)queryStringByJoiningQueries:(id)arg1 withOperand:(long long)arg2 ;
+(id)queryWithString:(id)arg1 options:(id)arg2 ;
+(id)searchWordsForPhrase:(id)arg1 ;
+(id)_operandStringForOperand:(long long)arg1 ;
+(id)_modifierStringFromModifiers:(unsigned long long)arg1 ;
+(id)_queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3 ;
+(id)queryWithPredicate:(id)arg1 options:(id)arg2 ;
+(id)queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)start;
-(NSPredicate *)predicate;
-(NSProgress *)progress;
-(NSString *)queryString;
-(id)initWithPredicate:(id)arg1 options:(id)arg2 ;
-(void)searchQuery:(id)arg1 didReturnItems:(id)arg2 ;
-(void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2 ;
-(void)searchQuery:(id)arg1 didFailWithError:(id)arg2 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(void)addResultsBlock:(/*^block*/id)arg1 ;
-(id)initWithQueryString:(id)arg1 options:(id)arg2 ;
-(id)truncatedDescription;
-(void)_commonInitWithOptions:(id)arg1 ;
-(void)_failedWithError:(id)arg1 ;
-(void)_removeAllResultsBlocks;
-(void)_foundItems:(id)arg1 ;
-(void)_performClientWork:(/*^block*/id)arg1 ;
-(void)_completed;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
@end

