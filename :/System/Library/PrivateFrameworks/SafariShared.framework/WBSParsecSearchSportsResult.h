/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecSearchResult.h>

@class WBSParsecSportsScoreSummary, WBSParsecSearchSportsAttributionExtraCompletionItem, NSArray, NSString;

@interface WBSParsecSearchSportsResult : WBSParsecSearchResult {

	WBSParsecSportsScoreSummary* _scoreSummary;
	WBSParsecSearchSportsAttributionExtraCompletionItem* _extraCompletionItem;

}

@property (nonatomic,copy,readonly) NSArray * images; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) WBSParsecSearchSportsAttributionExtraCompletionItem * extraCompletionItem;              //@synthesize extraCompletionItem=_extraCompletionItem - In the implementation block
+(id)_specializedSchema;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)images;
-(NSString *)subtitle;
-(WBSParsecSearchSportsAttributionExtraCompletionItem *)extraCompletionItem;
@end

