/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAutocompleteFetchDelegate, CNFuture;
@class NSMutableOrderedSet;

@interface CNAutocompleteQueryResponsePreparer : NSObject {

	NSMutableOrderedSet* _previouslyReturnedResults;
	id<CNAutocompleteFetchDelegate> _delegate;
	id<CNFuture> _priorityResultsFuture;

}

@property (nonatomic,__weak,readonly) id<CNAutocompleteFetchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<CNFuture> priorityResultsFuture;                             //@synthesize priorityResultsFuture=_priorityResultsFuture - In the implementation block
-(id)init;
-(id<CNAutocompleteFetchDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(id)addDiagnosticLog:(/*^block*/id)arg1 ;
-(id)askDelegateToAdjustResults;
-(id)suppressResultsWithAddresses:(id)arg1 ;
-(id)prepareResults:(id)arg1 ;
-(void)setPriorityResultsFuture:(id<CNFuture>)arg1 ;
-(id)findUniqueResults:(id)arg1 ;
-(id)resultsNotPreviouslyReturned:(id)arg1 ;
-(id)applyPriorityResultsOrder:(id)arg1 ;
-(id<CNFuture>)priorityResultsFuture;
-(id)sortResults;
@end

