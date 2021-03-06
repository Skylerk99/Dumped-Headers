/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecSearchResult.h>

@class NSMutableArray, NSString;

@interface WBSParsecSearchMoviesResult : WBSParsecSearchResult {

	NSMutableArray* _posterRepresentations;
	NSString* _descriptionLeadInText;

}

@property (nonatomic,readonly) NSString * descriptionLeadInText;              //@synthesize descriptionLeadInText=_descriptionLeadInText - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(id)postersWithSession:(id)arg1 ;
-(NSString *)descriptionLeadInText;
@end

