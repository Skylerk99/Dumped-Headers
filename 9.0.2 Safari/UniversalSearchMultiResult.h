//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CompletionItem.h"

@class NSArray, NSString;

@interface UniversalSearchMultiResult : NSObject <CompletionItem>
{
    NSArray *_subResults;
}

@property(copy, nonatomic) NSArray *subResults; // @synthesize subResults=_subResults;
- (void).cxx_destruct;
- (unsigned long long)_searchUIStyle;
@property(readonly, copy, nonatomic) NSString *sectionHeader;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (id)reflectedStringForUserTypedString:(id)arg1;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool restoresSearchState;
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;
- (void)acceptCompletionWithActionHandler:(id)arg1;
- (id)completionTableViewCell;
- (id)completionTableViewCellReuseIdentifier;
- (id)initWithSubResults:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(readonly) Class superclass;

@end
