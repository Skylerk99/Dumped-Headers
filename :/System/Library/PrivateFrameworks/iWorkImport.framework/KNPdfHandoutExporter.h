/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNPdfExporter.h>

@interface KNPdfHandoutExporter : KNPdfExporter {

	BOOL mPrintingRuledLines;
	BOOL mPrintingNotes;
	BOOL mPrintingDivider;
	BOOL mIsPrintingNote;

}

@property (assign,getter=isPrintingNotes,nonatomic) BOOL printingNotes; 
@property (assign,getter=isPrintingRuledLines,nonatomic) BOOL printingRuledLines; 
@property (assign,getter=isPrintingDivider,nonatomic) BOOL printingDivider; 
-(id)initWithDocumentRoot:(id)arg1 ;
-(id)currentInfos;
-(BOOL)drawCurrentPageInContext:(CGContextRef)arg1 viewScale:(double)arg2 unscaledClipRect:(CGRect)arg3 createPage:(BOOL)arg4 ;
-(BOOL)incrementPage;
-(void)p_drawNotesForNode:(id)arg1 index:(unsigned long long)arg2 forRect:(CGRect)arg3 unscaledClipRect:(CGRect)arg4 scaledClipRect:(CGRect)arg5 context:(CGContextRef)arg6 ;
-(void)p_drawDividerLineForRect:(CGRect)arg1 pageRect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(void)p_drawRuledLinesForRect:(CGRect)arg1 pageRect:(CGRect)arg2 numberOfLines:(unsigned long long)arg3 context:(CGContextRef)arg4 ;
-(BOOL)isPrintingRuledLines;
-(BOOL)isPrintingNotes;
-(void)setPrintingRuledLines:(BOOL)arg1 ;
-(void)setPrintingNotes:(BOOL)arg1 ;
-(BOOL)isPrintingDivider;
-(void)setPrintingDivider:(BOOL)arg1 ;
@end

