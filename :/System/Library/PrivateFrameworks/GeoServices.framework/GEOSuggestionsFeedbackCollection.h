/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDAutocompleteEntry, NSData;

@interface GEOSuggestionsFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE4 _sessionID;
	GEOPDAutocompleteEntry* _suggestionEntry;
	int _suggestionEntryIndex;
	NSData* _suggestionEntryMetadata;
	NSData* _suggestionMetadata;
	int _suggestionsEntryListIndex;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionID;                              //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionsEntryListIndex; 
@property (assign,nonatomic) int suggestionsEntryListIndex;                         //@synthesize suggestionsEntryListIndex=_suggestionsEntryListIndex - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionEntryIndex; 
@property (assign,nonatomic) int suggestionEntryIndex;                              //@synthesize suggestionEntryIndex=_suggestionEntryIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata;                           //@synthesize suggestionMetadata=_suggestionMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;                      //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * suggestionEntry;              //@synthesize suggestionEntry=_suggestionEntry - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSessionID:(SCD_Struct_GE4)arg1 ;
-(SCD_Struct_GE4)sessionID;
-(BOOL)hasSessionID;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSuggestionMetadata;
-(NSData *)suggestionMetadata;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryIndex;
-(int)suggestionsEntryListIndex;
-(void)setHasSuggestionEntryIndex:(BOOL)arg1 ;
-(int)suggestionEntryIndex;
-(void)setSuggestionEntryIndex:(int)arg1 ;
-(BOOL)hasSuggestionsEntryListIndex;
-(void)setSuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(BOOL)hasSuggestionEntry;
-(void)setHasSuggestionsEntryListIndex:(BOOL)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(NSData *)suggestionEntryMetadata;
-(GEOPDAutocompleteEntry *)suggestionEntry;
-(void)setSuggestionsEntryListIndex:(int)arg1 ;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

