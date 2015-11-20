//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSSearchProvider.h"

@class NSString;

@interface SearchEngineInfo : WBSSearchProvider
{
    int _searchID;
    NSString *_scriptName;
    NSString *_shortName;
}

+ (id)_parsecCompletionIdentifierForShortName:(id)arg1;
+ (id)_parsecSearchIdentifierForShortName:(id)arg1;
+ (id)engineFromDictionary:(id)arg1 withController:(id)arg2;
@property(readonly, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(readonly, nonatomic) NSString *scriptName; // @synthesize scriptName=_scriptName;
@property(readonly, nonatomic) int searchID; // @synthesize searchID=_searchID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayName;
- (id)description;
@property(readonly, nonatomic) NSString *parsecCompletionIdentifier;
@property(readonly, nonatomic) NSString *parsecSearchIdentifier;
- (_Bool)searchShouldUseSafeSearchTemplate;
- (Class)classForCoder;
- (id)initWithName:(id)arg1 scriptName:(id)arg2 searchID:(int)arg3 searchTemplate:(id)arg4 hostSuffixes:(id)arg5 pathPrefixes:(id)arg6 usesSearchTermsFromFragment:(_Bool)arg7 suggestionsTemplate:(id)arg8 topLevelDomains:(id)arg9 safeSearchSuffix:(id)arg10 safeSearchURLQueryParameters:(id)arg11 carrierInfo:(id)arg12 controller:(id)arg13;

@end
