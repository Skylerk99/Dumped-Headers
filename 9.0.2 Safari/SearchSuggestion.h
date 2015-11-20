//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CompletionItem.h"

@class NSString;

@interface SearchSuggestion : NSObject <CompletionItem>
{
    _Bool _recentSearch;
    _Bool _searchEngineSuggestion;
    _Bool _goesToURL;
    NSString *_string;
}

@property(nonatomic) _Bool goesToURL; // @synthesize goesToURL=_goesToURL;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)reflectedStringForUserTypedString:(id)arg1;
@property(readonly, nonatomic) _Bool restoresSearchState;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;
- (double)completionTableViewCellCustomHeightForCompletionList:(id)arg1;
- (id)completionTableViewCell;
- (id)completionTableViewCellReuseIdentifier;
- (void)acceptCompletionWithActionHandler:(id)arg1;
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithSearchEngineSuggestion:(id)arg1;
- (id)initWithRecentSearchString:(id)arg1;
- (id)initWithUserTypedString:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(readonly) Class superclass;

@end

