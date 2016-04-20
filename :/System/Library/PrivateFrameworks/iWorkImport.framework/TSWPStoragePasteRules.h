/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPStorage;

@interface TSWPStoragePasteRules : NSObject {

	unsigned _flags;
	unsigned _actionFlags[6];
	unsigned _lastFlag;
	NSRange _srcLeadRange;
	NSRange _srcTrailRange;
	BOOL _mapDestTrailCS;
	TSWPStorage* _destStorage;
	unsigned long long _sourceColumnStyleCount;
	unsigned long long _sourceSectionCount;
	SCD_Struct_TS664 _paragraphs[4];

}
-(void)mapCharacterStyleProperties:(id)arg1 toRange:(NSRange)arg2 ioTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)setupFlagsForPastingSrcStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(NSRange)arg3 srcStylesAmbiguous:(BOOL)arg4 ;
-(void)addActionFlag:(int)arg1 ;
-(void)applyParagraph:(int)arg1 toCharIndex:(unsigned long long)arg2 ioTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)mapCharacterStyles:(int)arg1 toRange:(NSRange)arg2 useParagraphProperties:(BOOL)arg3 ioTransaction:(TSWPStorageTransaction*)arg4 ;
-(void)willPasteStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(NSRange)arg3 srcStylesAmbiguous:(BOOL)arg4 ;
-(void)didPasteWithIOTransaction:(TSWPStorageTransaction*)arg1 atDestRange:(NSRange)arg2 ;
-(void)dealloc;
@end

