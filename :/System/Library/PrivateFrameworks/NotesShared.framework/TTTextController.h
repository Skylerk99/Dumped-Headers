/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/TTTextStorageStyler.h>

@class NSString;

@interface TTTextController : NSObject <TTTextStorageStyler> {

	double _bodyStyleFontSizeThreshold;
	double _headingStyleFontSizeThreshold;

}

@property (assign,nonatomic) double bodyStyleFontSizeThreshold;                 //@synthesize bodyStyleFontSizeThreshold=_bodyStyleFontSizeThreshold - In the implementation block
@property (assign,nonatomic) double headingStyleFontSizeThreshold;              //@synthesize headingStyleFontSizeThreshold=_headingStyleFontSizeThreshold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)superscriptScaleFactor;
+(double)bodyParagraphSpacing;
+(double)bodyParagraphSpacingBefore;
+(double)attachmentParagraphSpacing;
+(double)attachmentParagraphSpacingBefore;
-(id)init;
-(id)defaultParagraphStyle;
-(void)styleText:(id)arg1 inRange:(NSRange)arg2 fixModelAttributes:(BOOL)arg3 ;
-(UIFont*)preferredFontForTTTextStyle:(unsigned)arg1 ;
-(id)preferredAttributesForTTTextStyle:(unsigned)arg1 ;
-(void)styleText:(id)arg1 inExactRange:(NSRange)arg2 fixModelAttributes:(BOOL)arg3 ;
-(void)styleListsAndIndentsInAttributedString:(id)arg1 inRange:(NSRange)arg2 ;
-(void)fixModelAttributesInTextStorage:(id)arg1 inRange:(NSRange)arg2 ;
-(void)resetGuessedFontSizes;
-(id)modelForStyleAttributes:(id)arg1 filterAttributes:(BOOL)arg2 ;
-(id)styleForModelAttributes:(id)arg1 ;
-(id)titleAttributes;
-(id)headingAttributes;
-(id)bodyAttributes;
-(void)addBIToStyle:(id)arg1 ;
-(id)subheadingAttributes;
-(id)captionAttributes;
-(id)fixedWidthAttributes;
-(id)defaultListAttributes;
-(id)checklistAttributes;
-(double)bodyStyleFontSizeThreshold;
-(void)setBodyStyleFontSizeThreshold:(double)arg1 ;
-(void)setHeadingStyleFontSizeThreshold:(double)arg1 ;
-(double)headingStyleFontSizeThreshold;
-(void)styleFontInTextStorage:(id)arg1 inRange:(NSRange)arg2 ;
-(void)addLetterpressInTextStorage:(id)arg1 inRange:(NSRange)arg2 ;
-(void)guessFontSizeThresholdsForTTStylesInAttributedString:(id)arg1 ;
-(id)typingAttributesForRange:(NSRange)arg1 forSelectionChange:(BOOL)arg2 currentTypingAttributes:(id)arg3 inTextStorage:(id)arg4 ;
-(id)filterStyleAttributes:(id)arg1 range:(NSRange)arg2 ;
@end

