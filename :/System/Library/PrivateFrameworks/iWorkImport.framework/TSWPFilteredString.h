/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <Foundation/NSString.h>

@class NSString, TSWPDeletionRangeMap, TSWPRangeArray;

@interface TSWPFilteredString : NSString {

	unsigned long long _length;
	NSString* _sourceString;
	TSWPDeletionRangeMap* _rangeMap;
	TSWPRangeArray* _sourceRanges;

}

@property (nonatomic,retain) NSString * sourceString;                             //@synthesize sourceString=_sourceString - In the implementation block
@property (nonatomic,retain) TSWPDeletionRangeMap * rangeMap;                     //@synthesize rangeMap=_rangeMap - In the implementation block
@property (nonatomic,retain,readonly) TSWPRangeArray * sourceRanges;              //@synthesize sourceRanges=_sourceRanges - In the implementation block
-(NSString *)sourceString;
-(TSWPDeletionRangeMap *)rangeMap;
-(TSWPRangeArray *)sourceRanges;
-(id)initWithString:(id)arg1 subrange:(NSRange)arg2 removeRanges:(id)arg3 ;
-(unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1 ;
-(unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1 ;
-(NSRange)charRangeMappedToStorage:(NSRange)arg1 ;
-(NSRange)charRangeMappedFromStorage:(NSRange)arg1 ;
-(void)setSourceString:(NSString *)arg1 ;
-(void)setRangeMap:(TSWPDeletionRangeMap *)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
@end

