/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSWPTextSource <NSObject>
@optional
-(void)enumerateWithAttributeKind:(int)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3;
-(BOOL)hasSmartFieldsInRange:(NSRange)arg1;
-(void)enumerateSmartFieldsWithAttributeKind:(int)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3;
-(id)substringWithRange:(NSRange)arg1;

@required
-(id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2;
-(id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2;
-(id)attachmentAtCharIndex:(unsigned long long)arg1;
-(unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
-(unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
-(NSRange*)charRangeMappedToStorage:(NSRange)arg1;
-(NSRange*)charRangeMappedFromStorage:(NSRange)arg1;
-(NSRange*)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(BOOL)arg2;
-(id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;
-(BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1;
-(id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(int)arg2 effectiveRange:(NSRange*)arg3;
-(id)smartFieldsWithAttributeKind:(int)arg1 intersectingRange:(NSRange)arg2;
-(BOOL)hasColumnBreakAtCharIndex:(unsigned long long)arg1;
-(void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(BOOL)arg2 attributesTable:(id)arg3 effectiveRange:(NSRange*)arg4;
-(id)footnoteReferenceAtCharIndex:(unsigned long long)arg1;
-(BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1;
-(long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(NSRange)arg2 locale:(CFLocaleRef)arg3 hyphenChar:(unsigned*)arg4;
-(id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(int)arg2 effectiveRange:(NSRange*)arg3;
-(unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1;
-(BOOL)adjustRangesByDelta:(long long)arg1 startingAt:(unsigned long long)arg2;
-(unsigned long long)storageLength;
-(unsigned long long)length;
-(id)string;
-(unsigned short)characterAtIndex:(unsigned long long)arg1;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2;

@end

